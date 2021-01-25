#include<iostream>

using namespace std;
int main(){
    int a[100],n,i,j,tempinx, temp;
    cout<<"Enter length of array\n";
    cin>>n;
    cout<<"Enter List of numbers";
    for( i=0;i<n;i++){
            cin>>a[i];
    }
    for(i=0;i<n;i++){
        tempinx = i;
        for(j=i;j<n;j++){
            if(a[j]<a[tempinx]){
                tempinx = j;
            }
        }
        temp= a[i];
        a[i]=a[tempinx];
        a[tempinx]= temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}