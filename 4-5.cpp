#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 2 no."<<endl;
    cin>>a>>b;
    int power=1;
    for(int i=1;i<=b;i++){
        power*=a;
    }
    cout<<power<<endl;
    return 0;
}