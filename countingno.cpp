#include<iostream>
using namespace std;
int main(){
    int n,l;
    cout<<"enter no.and line";
    cin>>n>>l;
    for(int i=1;i<=l;i++){
        for(int j=1;j<=n;j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}