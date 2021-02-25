#include<iostream>
using namespace std;

int main(){
    int i,count=0,n;
    cout<<"Enter size of array";
    cin>>n;
    int *a = new int(n);
    
    for(i =0; i<n;i++){
        cin>>a[i];
        (a[i-1]==a[i])?count++:count=1;
        if(count==5){
            a = (int *)realloc(a, sizeof(int)*++n);
            (a[i]==1)?a[++i]=0:a[++i]=1;
            count=0;
        }
    }
    for(i =0; i<n;i++){
        cout<<a[i];
    }
        
}