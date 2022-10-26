#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a integer"<<endl;
    cin>>n;
    if(n<0){
        cout<<"Absolute value is : "<<(-1)*n<<endl;
    }
    else{
        cout<<"Absolute value is : "<<n<<endl;
    }
    return 0;
}