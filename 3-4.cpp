#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Input a no."<<endl;
    cin>>n;
    if(n<0){
        cout<<"Given no. is negative and skipped "<<n<<endl;
    }
    else{
        cout<<"Given no. is positive "<<n<<endl;
    }
    return 0;
}