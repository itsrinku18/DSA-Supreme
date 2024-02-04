#include<iostream>
using namespace std;

int main(){
    int a=123;
    char c='r';
    double d=1.89;
    float f=1.8;
    short sh=22;
    long lg=13232323332;
    long long log=123213213;
    bool b=0;

    cout<<"Size of Integer in Bytes:"<<sizeof(a)<<endl;
    cout<<"Size of Chracter in Bytes:"<<sizeof(c)<<endl;
    cout<<"Size of Double in Bytes:"<<sizeof(d)<<endl;
    cout<<"Size of Float in Bytes:"<<sizeof(f)<<endl;
    cout<<"Size of Short in Bytes:"<<sizeof(sh)<<endl;
    cout<<"Size of Long in Bytes:"<<sizeof(lg)<<endl;
    cout<<"Size of Long Long in Bytes:"<<sizeof(log)<<endl;
    cout<<"Size of Bool in Bytes:"<<sizeof(b)<<endl;

    return 0;
}