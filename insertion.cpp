#include<iostream>

using namespace std;
int main(){
    int a[100],n,i,j;
    cout<<"Enter length of array\n";
    cin>>n;
    cout<<"Enter List of numbers";
    for( i=0;i<n;i++){
            cin>>a[i];
    }
    for ( i=1;i<n;i++){
        int temp = a[i];
        for( j=i-1; j>=0; j--){
            if(a[j]<temp) break;
            a[j+1]=a[j];
            a[j]=temp;

        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}