#include<iostream>
using namespace std;
int main(){
    cout<<"size of fundamental data types : "<<endl;
    cout<<"int"<<sizeof(int)<<endl;
    cout<<"short"<<__SIZEOF_SHORT__<<endl;
    cout<<"char"<<sizeof(char)<<endl;
    cout<<"long"<<sizeof(long)<<endl;
    cout<<"long long"<<sizeof(long long)<<endl;
    cout<<"float"<<sizeof(float)<<endl;
    cout<<"double"<<sizeof(double)<<endl;
    cout<<"long double"<<sizeof(long double)<<endl;
    cout<<"bool"<<sizeof(bool)<<endl;
    return 0;
}