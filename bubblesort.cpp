#include<iostream>
using namespace std;
int main(){
    int a[100],n,i,j,temp;
    cout<<"Enter length of array\n";
    cin>>n;
    cout<<"Enter List of numbers";
    for( i=0;i<n;i++){
            cin>>a[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j+1]<a[j]){
                temp=a[j];
                a[j]= a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for (int i = 0; i < n; i++){
        cout<<a[i]<<"\t";
    }
}