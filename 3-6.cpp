#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter your marks"<<endl;
    cin>>marks;
    if(marks>90&&marks<=100){
        cout<<"A+ grade"<<endl;
    }
    else if(marks>80){
        cout<<"A grade"<<endl;
    }
else if(marks>70){
    cout<<"B+ grade"<<endl;
}
else if(marks>60){
    cout<<"B grade"<<endl;
}
else if(marks>50){
    cout<<"C grade"<<endl;
}
else if(marks>40){
    cout<<"D grade"<<endl;
}
else if(marks>30){
    cout<<"E grade"<<endl;
}
else if(marks>0){
    cout<<"F grade"<<endl;
}
else{
    cout<<"Please enter correct marks"<<endl;
}
return 0;
}