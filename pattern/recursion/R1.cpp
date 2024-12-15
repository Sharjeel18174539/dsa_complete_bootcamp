#include<iostream>
using namespace std;
//print 1 to N;
void oneToN(int n){
    if(n==0)return;
    oneToN(n-1);
    cout<<n<<" ";
}
void nToOne(int n){
    if(n==0)return;
    cout<<n<<" ";
    nToOne(n-1);
}
int sumOfN_Number(int n){
    int sum=0;
    if(n<=1)return n;

    return sumOfN_Number(n-1) + n;
}
int main(){
    int n=10;
    oneToN(n);
    cout<<endl;
    nToOne(n);
    cout<<endl;
    cout<<sumOfN_Number(10);
}