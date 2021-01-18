#include<iostream>
using namespace std;
void merge(int a[], int l, int m, int r){
    int a1[50],a2[50],i,j=0,k=0;
    for(i=l;i<=r;i++){
        (i<=m)?a1[j++]=a[i]:a2[k++]=a[i];
        
    }
    i=0;
    j=0;
    k=l;
    while(i<(m-l+1) && j<(r-m)){
        a[k++] = (a1[i]<a2[j])?a1[i++]:a2[j++];  
    }
    while(i<(m-l+1)){
        a[k++]=a1[i++];
    }
    while(j<(r-m)){
        a[k++]= a2[j++];
    }
}
void mergesort(int a[],int l, int r){
    int m=(l+r-1)/2;
    if(l>=r) return;

    mergesort(a,l,m);
    mergesort(a,m+1,r);
    merge(a,l,m,r);
    }

using namespace std;
int main(){
    int a[100],n,i;
    cout<<"Enter length of array";
    cin>>n;
    cout<<"Enter numbers of array";
    for( i=0;i<n;i++){
            cin>>a[i];
    }
    mergesort(a,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}