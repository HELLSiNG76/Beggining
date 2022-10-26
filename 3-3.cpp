#include<iostream>
using namespace std;
int main(){
    int costPrice,sellingPrice;
    cout<<"Enter C.P. & S.P."<<endl;
    cin>>costPrice>>sellingPrice;
    if(costPrice>sellingPrice){
        cout<<"Loss : "<<costPrice-sellingPrice<<endl;
    }
    else{
            cout<<"Profit : "<<sellingPrice-costPrice<<endl;
    }
    return 0;
}