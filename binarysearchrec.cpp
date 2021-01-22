#include<iostream>
using namespace std;
void search(int a[],int l, int r,int num){
    int m=(l+r)/2;
    if (a[m]==num){
        cout<<"Required number is present";
        return;
    }
    if(l==r){
        cout<<"Number is not present";
        return;
    }
    if (a[m]<num){
        return search(a,m+1,r,num);
        }
    return search(a,l,m-1,num);
}
void sort(int a[],int n){
    int i,j,temp;
     for ( i=1;i<n;i++){
        int temp = a[i];
        for( j=i-1; j>=0; j--){
            if(a[j]<temp) break;
            a[j+1]=a[j];
            a[j]=temp;
        }
}
}
int main(){
    int a[100],n,i,num;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<< "Enter number to be searched";
    cin>>num;
    sort(a,n);
    search(a,0,n-1,num);
}