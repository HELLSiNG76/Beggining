#include<iostream>
using namespace std;
int main(){
int n,first,second,third,sum;
cout<<"enter a 3-digit no."<<endl;
cin>>n;
first=n/100;
n%=100;
second=n/10;
third=n%10;
sum=first+second+third;
cout<<"sum of digits of given 3-digit no. is: "<<sum<<endl;
return 0;
}