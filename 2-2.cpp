#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter a & b" <<endl;
    cin>>a>>b;
    cout<<((a<50)&&(a<b))?1:0;
    cout<<"\n";
    return 0;
}