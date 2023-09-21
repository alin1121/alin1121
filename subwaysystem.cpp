#include "subwaysystem.h"

#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QVector>
#include <QMap>
#include <QString>
#include <Queue>
#include <QDebug>
SubwaySystem::SubwaySystem()
{

}

State SubwaySystem::readSubwayFile(QString filepath)
{
    QFile file(filepath);
    file.open(QIODevice::ReadOnly);
    if(!file.isOpen()){
        //报错
        qDebug()<<filepath<<"打开失败";
        return State::ERROR;
    }
    this->lines.clear();

    minLongi=minLati=2000;
    maxLongi=maxLati=0;

    QTextStream in(&file);
    QString buffer;
    while(true){
        in>>buffer>>buffer; //输入id
        if(in.atEnd())
            break;
        in>>buffer>>buffer; //输入线路名

        Line *line_now = &this->lines[buffer];
        line_now->name = buffer;
        in>>buffer>>buffer; //输入颜色
        line_now->color = QColor(buffer);
        in>>buffer>>buffer; //起始站
        line_now->start_stas.append(buffer);
        in>>buffer; //终点站
        line_now->end_stas.append(buffer);
        in>>buffer>>buffer; //总站数
        line_now->total_stations.append(buffer.toInt());

        QList<QString> sta_list;
        for(int i=0;i<line_now->total_stations.last();i++){  // 存储站点stations[station]  将该线路的所有站点存储到line的stalist
            Station sta;
            in>>buffer>>sta.name>>sta.longi>>sta.lati;
            if(!this->stations.count(sta.name))
                this->stations[sta.name]=sta;
            this->stations[sta.name].lines.insert(line_now->name);
            updateBound(sta.lati,sta.longi);  //更新经纬度
            sta_list.append(sta.name);
        }
        line_now->sta_list.append(sta_list);
    }
    file.close();

    //统计边的信息
    statisticEdges();

    return State::OK;
}

void SubwaySystem::statisticEdges()
{
    for(auto &line:this->lines.values()){
        for(auto &sta_list:line.sta_list){
            int len = sta_list.size();
            for(int i=0;i<len;i++){
                if(i>0)
                    this->stations[sta_list.at(i)].addEdge(this->stations[sta_list.at(i-1)],line.name);
                if(i<len-1)
                    this->stations[sta_list.at(i)].addEdge(this->stations[sta_list.at(i+1)],line.name);
            }
        }
    }
}

State SubwaySystem::addStation(QString name,double longi,double lati,QSet<QString> line_set)
{
    if(name==""){
        qDebug()<<"尚未输入名称";
        return State::ERROR;
    } else if(this->stations.count(name)){
        qDebug()<<"站点已经存在";
        return State::REPEAT;
    }

    this->stations[name].name = name;
    this->stations[name].lati = lati;
    this->stations[name].longi = longi;
    this->stations[name].lines = line_set;
    this->stations[name].latiLongi2coord();

    return State::OK;
}

State SubwaySystem::addLine(QString name,QColor color)
{
    if(name==""){
        qDebug()<<"尚未输入线路名称";
        return State::ERROR;
    } else if(this->lines.count(name)){
        qDebug()<<"线路已经存在";
        return State::REPEAT;
    }
    this->lines[name].name = name;
    this->lines[name].color = color;

    return State::OK;
}

State SubwaySystem::addEdge(QString sta1,QString sta2,QString line)
{
    this->stations[sta1].lines.insert(line);
    this->stations[sta2].lines.insert(line);
    this->stations[sta1].addEdge(this->stations[sta2],line);
    this->stations[sta2].addEdge(this->stations[sta1],line);
    this->lines[line].total_stations.push_back(2);
    this->lines[line].start_stas.push_back(sta1);
    this->lines[line].end_stas.push_back(sta2);

    QList<QString> sta_list;
    sta_list.push_back(sta1);
    sta_list.push_back(sta2);
    this->lines[line].sta_list.push_back(sta_list);

    return State::OK;
}

QList<QString> SubwaySystem::shortTimePath(const QString start_sta,const QString end_sta)
{
    qDebug()<<"求最短时间";
    //迪杰斯特拉算法求解最短时间路径
    const int INFINITY = INT32_MAX;
    QMap<QString,int> short_time_map;     //距离表
    QMap<QString,bool> final;             //是否遍历过
    QList<QString> ret_line;//路线list


    for(auto &i:this->stations) {           // all station information
        short_time_map[i.name] = INFINITY;   // init dist = max
   //     ret_line[i.name].append(start_sta);  // push start_sta
    }
    short_time_map[start_sta] = 0;          // start time = 0
   // final[start_sta] = true;                //start_sta arrived


 //   priority_queue< pair<int, int>,vector<pair<int, int> > ,greater<pair<int, int> > >q;
    QMap<QString,QString>pre;
    //std::priority_queue<int>qq;
    std::priority_queue<std::pair<int, QString>,std::vector<std::pair<int, QString> >, std::greater<std::pair<int, QString> > > q;
    q.push({0,start_sta});
    pre[start_sta]="-1";
    while (q.size())
    {
        qDebug()<<"##ing\n";
        std::pair<int, QString> f = q.top();
        q.pop();
    //    int32_t var = f.first;
        QString stas=f.second;
        if(final[stas]) continue;
        final[stas] = true;
        for(auto &i:this->stations[stas].edges.keys()){
            qDebug()<<"##ingint\n";
            int32_t v = this->stations[stas].edges[i].dist;
            if(!final[i])
            if(short_time_map[i]>short_time_map[stas]+v){
                short_time_map[i]=short_time_map[stas]+v;
                pre[i] = stas;
                q.push({short_time_map[i],i});
                if(i==end_sta) break;
             }
        }
    }


    QString u = end_sta;
    while(u!="-1"){
        ret_line.prepend(u);
        u = pre[u];
    }
    

    return ret_line;
}
typedef std::pair<QString,QString> PII; // station  Line

typedef std::pair<int,int> PLL; //  station dist

typedef std::pair<PLL,PII> PCC; // station  Line

QList<PII> SubwaySystem::lessTransPath(const QString start_sta,const QString end_sta)
{    

    qDebug()<<"最少换乘";
    //迪杰斯特拉算法求解最短时间路径
    const int INFINITY = INT32_MAX;

    QMap<PII,int> short_time_map;     //距离表
    QMap<PII,bool> final;             //是否遍历过
    QMap<PII,int> short_station_map;     //换乘表
    QList<PII> ret_line;//路线list

    for(auto &i:this->stations) {           // all station information
        for(auto &j:i.edges.keys())
            for(auto &k:i.edges[j].line_list){
             //PII t; t.first=i.name; t.second= k;
             short_time_map[PII(i.name,k)] = INFINITY;
             short_station_map[PII(i.name,k)] = INFINITY;
            }
                // init dist = max
    }

    QMap<PII,PII>pre;
    std::priority_queue<PCC,std::vector<PCC >, std::greater<PCC > > q;

    for(auto &j:stations[start_sta].edges.keys())
        for(auto &k:stations[start_sta].edges[j].line_list){
            //PII t; t.first=i.name; t.second= k;
            short_time_map[PII(start_sta,k)] = 0;
            short_station_map[PII(start_sta,k)] = 0;

            pre[PII(start_sta,k)] = PII("-1","-1");
            pre[PII(start_sta,k)] = PII("-1","-1");

            q.push({PLL{0,0},PII{start_sta,k}});

        }
    PCC endu;
    endu.first.first = INFINITY;
    endu.first.second = INFINITY;
    int cnt=0;
    while (q.size())
    {
        qDebug()<<"##ing"<<++cnt<<"\n";
       PCC f = q.top();
        q.pop();
    //    int32_t var = f.first;
        QString stas=f.second.first;
        QString linestr=f.second.second;
        if(final[PII{stas,linestr}]) continue;
        final[PII{stas,linestr}] = true;
        for(auto &i:this->stations[stas].edges.keys()){
            for(auto &j:this->stations[stas].edges[i].line_list){
                int32_t v = this->stations[stas].edges[i].dist;
                if(final[PII{i,j}]) break;
                if(j==linestr){
                if(short_station_map[f.second]<short_station_map[PII{i,j}]){
                    pre[PII{i,j}] = f.second;
                    short_station_map[PII{i,j}] = short_station_map[f.second];
                    short_time_map[PII{i,j}]=short_time_map[f.second]+v;
                //    qDebug()<<"1_________"<<stas<<"-->"<<i<<"____line"<<j<<"____"<<short_station_map[PII{i,j}]<<"\n";
               //     qDebug()<<"1_________"<<stas<<"-->"<<i<<"____line"<<j<<"____pre:"<<pre[PII{i,j}]<<"time"<<short_time_map[PII{i,j}]<<"\n";

                        //  if(i==end_sta) break;
                    q.push({PLL{short_station_map[PII{i,j}],short_time_map[PII{i,j}]},PII{i,j} });

                    if(i == end_sta){
                        if(short_station_map[PII{i,j}] < endu.first.first){
                            endu.second.second = j;
                            endu.first.first = short_station_map[PII{i,j}];
                        }
                    }

                }else if(short_station_map[f.second]== short_station_map[PII{i,j}]){
                    if(short_time_map[PII{i,j}]>short_time_map[f.second]+v){
                        short_time_map[PII{i,j}]=short_time_map[f.second]+v;
                        pre[PII{i,j}] = f.second;
                  //      qDebug()<<"2___"<<stas<<"-->"<<i<<"____line"<<j<<"____"<<short_station_map[PII{i,j}]<<"\n";
                  //       qDebug()<<"2___"<<stas<<"-->"<<i<<"____line"<<j<<"____"<<pre[PII{i,j}]<<"time"<<short_time_map[PII{i,j}]<<"\n";
                        //  if(i==end_sta) break;
                        q.push({PLL{short_station_map[PII{i,j}],short_time_map[PII{i,j}]},PII{i,j} });
                        if(i == end_sta){
                            if(short_station_map[PII{i,j}] < endu.first.first){
                                endu.second.second = j;
                                endu.first.first = short_station_map[PII{i,j}];
                            }else if(short_station_map[PII{i,j}] == endu.first.first){
                                if(endu.first.second > short_time_map[PII{i,j}])
                                    endu.second.second = j;
                            }
                        }

                    }
                }
                }else{
                    if(short_station_map[f.second]+1<short_station_map[PII{i,j}] ){
                        short_station_map[PII{i,j}] = short_station_map[f.second]+1;
                        pre[PII{i,j}] = f.second;
                        short_time_map[PII{i,j}]=short_time_map[f.second]+v;
                    //    qDebug()<<"3_________"<<stas<<"-->"<<i<<"____line"<<j<<"____"<<short_station_map[PII{i,j}]<<"\n";
                    //    qDebug()<<"3_________"<<stas<<"-->"<<i<<"____line"<<j<<"____"<<pre[PII{i,j}]<<"time"<<short_time_map[PII{i,j}]<<"\n";

                        if(i == end_sta){
                        if(short_station_map[PII{i,j}] < endu.first.first){
                                endu.second.second = j;
                                endu.first.first = short_station_map[PII{i,j}];
                            }else if(short_station_map[PII{i,j}] == endu.first.first){
                            if(endu.first.second > short_time_map[PII{i,j}])
                                endu.second.second = j;
                            }
                        }
                        q.push({PLL{short_station_map[PII{i,j}],short_time_map[PII{i,j}]},PII{i,j} });

                    }else if(short_station_map[f.second]+1==short_station_map[PII{i,j}]){
                        if(short_time_map[PII{i,j}]>short_time_map[f.second]+v){
                            short_time_map[PII{i,j}]=short_time_map[f.second]+v;
                            pre[PII{i,j}] = f.second;
                            //  if(i==end_sta) break;
                     //       qDebug()<<"4_________"<<stas<<"-->"<<i<<"____line"<<j<<"____"<<short_station_map[PII{i,j}]<<"\n";
                     //       qDebug()<<"4_________"<<stas<<"-->"<<i<<"____line"<<j<<"____"<<pre[PII{i,j}]<<"time"<<short_time_map[PII{i,j}]<<"\n";

                            q.push({PLL{short_station_map[PII{i,j}],short_time_map[PII{i,j}]},PII{i,j} });
                            if(i == end_sta){
                            if(short_station_map[PII{i,j}] < endu.first.first){
                                endu.second.second = j;
                                endu.first.first = short_station_map[PII{i,j}];
                            }else if(short_station_map[PII{i,j}] == endu.first.first){
                                if(endu.first.second > short_time_map[PII{i,j}])
                                    endu.second.second = j;
                            }
                            }

                        }
                    }

                }

            }


        }
    }

    endu.second.first = end_sta;
    qDebug()<<endu.second<<"##ing\n";
    PII uu = endu.second;
    QString u = end_sta;
    while(u!="-1"){
        qDebug()<<u<<"《--------";
        ret_line.prepend(uu);
        uu = pre[uu];
        u = uu.first ;
        qDebug()<<u<<"\n";
       // qDebug()<<"##ing"<<++cnt<<"#######\n";
    }


    return ret_line;
}

QList<QString> SubwaySystem::getSameLineABPath(const QString&s1,const QString&s2)const
{
    //s1和s2位于同一条线上,找出其中间经过的站点
    QList<QList<QString>> ret_list;
    QList<QString> same_line_list;
    for(auto &i:this->stations[s1].lines){
        for(auto &j:this->stations[s2].lines)
            if(i==j){
                same_line_list.push_back(i);
                break;
            }
    }
    for(auto &same_line:same_line_list)
        for(auto &sta_list:this->lines[same_line].sta_list){
            int index1 = sta_list.indexOf(s1);
            int index2 = sta_list.indexOf(s2);
            if(index1>=0&&index2>=0){
                int delta = (index1>index2)?-1:1;
                ret_list.push_back(*new QList<QString>);
                for(int i=index1;i!=index2;i+=delta)
                    ret_list.last().push_back(sta_list.at(i));          //终点未加上
                ret_list.last().push_back(s2);
                continue;
            }
        }
    if(ret_list.size()){
        int index = 0;
        int min = INT32_MAX;
        for(int i=0;i<ret_list.length();i++)
            if(ret_list.at(i).length()<min){
                min = ret_list.at(i).length();
                index = i;
            }
        return ret_list.at(index);
    }

    //至此,两个站点在同一线路的不同方向
    for(auto &same_line:same_line_list){
        QList<QPair<int,int>> s1_line_index;
        QList<QPair<int,int>> s2_line_index;
        for(int i=0;i<this->lines[same_line].sta_list.size();i++){
            int index1=this->lines[same_line].sta_list.at(i).indexOf(s1);
            if(index1>=0)
                s1_line_index.push_back({i,index1});
            int index2=this->lines[same_line].sta_list.at(i).indexOf(s2);
            if(index2>=0)
                s2_line_index.push_back({i,index2});
        }
        QMap<QPair<int,int>,bool> have_check_list;
        for(int i=0;i<s1_line_index.size();i++){
            const QList<QString>*s1_line=&this->lines[same_line].sta_list.at(s1_line_index.at(i).first);
            int index1=s1_line_index.at(i).second;
            for(int j=0;j<s2_line_index.size();j++){
                if(have_check_list.count({i,j}))
                    continue;
                for(int m=s1_line_index.at(i).second-1;m>=0;m--){
                    QString middle_sta=s1_line->at(m);
                    const QList<QString>*s2_line=&this->lines[same_line].sta_list.at(s2_line_index.at(j).first);
                    int index2=s2_line_index.at(j).second;
                    int middle_index=s2_line->indexOf(middle_sta);
                    if(middle_index>=0){
                        int delta=(index1>m)?-1:1;
                        ret_list.push_back(*new QList<QString>);
                        for(int k=index1;k!=m;k+=delta)
                            ret_list.last().push_back(s1_line->at(k));
                        delta=(middle_index>index2)?-1:1;
                        for(int k=middle_index;k!=index2;k+=delta)
                            ret_list.last().push_back(s2_line->at(k));
                        ret_list.last().push_back(s2_line->at(index2));
                        have_check_list[{i,j}] = true;
                        break;
                    }
                }
                if(have_check_list.count({i,j}))
                    continue;
                for(int m=s1_line_index.at(i).second+1;m<this->lines[same_line].sta_list.at(s1_line_index.at(i).first).size();m++){
                    QString middle_sta=s1_line->at(m);
                    const QList<QString>*s2_line=&this->lines[same_line].sta_list.at(s2_line_index.at(j).first);
                    int index2=s2_line_index.at(j).second;
                    int middle_index=s2_line->indexOf(middle_sta);
                    if(middle_index>=0){
                        int delta=(index1>m)?-1:1;
                        ret_list.push_back(*new QList<QString>);
                        for(int k=index1;k!=m;k+=delta)
                            ret_list.last().push_back(s1_line->at(k));
                        delta=(middle_index>index2)?-1:1;
                        for(int k=middle_index;k!=index2;k+=delta)
                            ret_list.last().push_back(s2_line->at(k));
                        ret_list.last().push_back(s2_line->at(index2));
                        have_check_list[{i,j}] = true;
                        break;
                    }
                }
            }
        }
    }

    int index = 0;
    int min = INT32_MAX;
    for(int i=0;i<ret_list.length();i++)
        if(ret_list.at(i).length()<min){
            min = ret_list.at(i).length();
            index = i;
        }
    return ret_list.at(index);
}
