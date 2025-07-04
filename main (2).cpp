#include<iostream>
using namespace std;
int sumofnumber(int n){
    if(n==1)
    return 1;
    else
    return n+sumofnumber(n-1);
}
int main(){
    int n;cin>>n;
    int sum=sumofnumber(n);
    cout<<sum;
    return 0;
}