#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a[100],n,exp=0,i,j,count=0;
    cout<<"Enter array length";
    cin>>n;
    cout<<"Enter Data";
    for(i=0;i<n;i++){
        if(i == ((int)pow(2,exp))-1){
            a[i] = 0;
            n++;
            exp++;
            continue;
        }
        cin>>a[i];    
    }
    for(i =0; i<n;i++){
        cout<<a[i];   
    }
    cout<<endl;
    for(i=0;pow(2,i)<n;i++){
    count=0;
    j=pow(2,i);
       while(j<n){
           (a[j]==1)?count++:1;
           ((j+1) % (int)(pow(2,i+1)) ==0)?j+=4:j++;
       }
       (count%2)?a[(int)pow(2,i)]=1:a[(int)pow(2,i)]=0;
    }
    for(i =0; i<n;i++){
        cout<<a[i];   
    }
     
}