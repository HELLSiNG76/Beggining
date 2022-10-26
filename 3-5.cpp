#include<iostream>
using namespace std;
int main(){
    char op;
    int num1,num2;
    cout<<"enter an operator"<<endl;
    cin>>op;
    cout<<"enter two numbers"<<endl;
    cin>>num1>>num2;
    switch(op){
        case '+':
        cout<<num1<<"+"<<num2<<"="<<num1+num2;
        break;
        case '-':
        cout<<num1<<"-"<<num2<<"="<<num1-num2;
        break;
        case '*':
        cout<<num1<<"*"<<num2<<"="<<num1*num2;
        break;
        case '/':
        cout<<num1<<"/"<<num2<<"="<<num1/num2;
        break;
        default:
        cout<<"enter an another operator"<<endl;
        break;
    }
    return 0;
}