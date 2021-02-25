#include<iostream>
using namespace std;
int main(){
    char c= '1';
    int b=c,i=0;
    while(b>>i != 0){
        cout<<((b>>i++)&1);
    }
}