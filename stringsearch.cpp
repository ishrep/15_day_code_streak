#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char a[30],b[100];
    int i,j,found=0;
    cout<<"Enter the string:";
    gets(b);
    cout<<"Enter the string to be searched";
    gets(a);
    for(i=0;i<=(strlen(b)-strlen(a));i++){
        for(j=0;j<strlen(a);j++){
            if(a[j]!=b[i+j])break;
            if(j==strlen(a)-1){
                found = i+1;
                break;
            }
            
        }
    }
    (found)?cout<<"Element found at index: "<<found-1:cout<<"Element not found";

}