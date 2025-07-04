#include<iostream>
using namespace std;
bool isprime(int n,int i=2){
    if(n<=2)
    return (n==2);
    if(n%i==0)
    return false;
    if(i*i>2)
    return true;
    return isprime(n,i+1);
}
int main(){
    int n;cin>>n;
    if (isprime(n)){
        cout<<n<<" is a prime."<<endl;
    }else{
        cout<<n<<" is not prime."<<endl;
    }return 0;
}