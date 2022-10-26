#include<iostream>
using namespace std;
int main(){
    int length,breadth;
    cout<<"Enter length and breadth"<<endl;
    cin>>length>>breadth;
    if(length==breadth){
        cout<<"It's a square"<<endl;
    }
    else{
        cout<<"It's not a square"<<endl;
    }
    return 0;
}