#include<iostream>

using namespace std;

int gcd(int a,int b){
    if(a%b!=0)
        return gcd(b,a%b);
    return b;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<((a>b)?gcd(a,b):gcd(b,a));
}
