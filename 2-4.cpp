#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a 5-digit no.\n";
    cin>>n;
    int first,second,third,fourth,fifth,sum;
    first=n/10000;
    n%=10000;
    second=n/1000;
    n%=1000;
    third=n/100;
    n%=100;
    fourth=n/10;
    fifth=n%10;
    sum=first +fourth;
    cout<<"sum of first and fourth digit is : "<<sum<<endl;
    return 0;
}