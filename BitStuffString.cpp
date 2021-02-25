#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
    int a[1000],i,count=0,n,j,secn,b,k;
    char arr[100];
    cout<<"Enter required string";
    gets(arr);
    secn=strlen(arr)*8;
    for(i=(strlen(arr)-1);i>=0;i--){
        b=arr[i];
        k=0;
        for(j=secn-1; j>=secn-8;j--){
            if(b>>k != 0){
                    a[j]=((b>>k++)&1);
            }
            else a[j] = 0;
        }
        secn= j+1;
    }
    n=(strlen(arr)*8);
    cout<<"Before Bitstuffing:";
    for(i =0; i<n;i++){
        cout<<a[i];
       
    }
    
    for(i =0; i<n;i++){ 
        (a[i-1]==a[i])?count++:count=1;
        if(count==5){
            for(j=n;j>i;j--){
                a[j+1]= a[j];    
            }
            n++;
            (a[i]==1)?a[++i]=0:a[++i]=1;      
        }
    }
    cout<<"\nAfter BitStuffing:";
    for(i =0; i<n;i++){
        cout<<a[i];   
    }
        
    
}