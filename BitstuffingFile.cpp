#include<iostream>
#include<fstream>


using namespace std;

int main(){
    int i,count=0;
    char a[100];
    fstream file;
    file.open("BitStuffFile.txt");

    for(i =0; file.eof()!=1;i++){
        file>>a[i];
        cout<<a[i];
        (a[i-1]==a[i])?count++:count=1;
        if(count==5){
            (a[i]=='1')?a[++i]='0':a[++i]='1';
            count=0;
            cout<<a[i];
        }
    }

        
}