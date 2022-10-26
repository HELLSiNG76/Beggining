#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a&b"<<endl;
    cin>>a>>b;
    cout<<a<<" " <<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<a<<" " <<b<<endl;
    return 0;
}