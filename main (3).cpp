#include<iostream>
using namespace std;
void decimaltobinary(int n){
    if(n==0)
    return;
    decimaltobinary(n/2);
    cout<<(n%2);
    
}int main(){
    int n;cin>>n;
    if(n==0)
    cout<<0<<endl;
    else
    decimaltobinary(n);
    cout<<endl;
    return 0;
}