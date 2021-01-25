#include<iostream>
using namespace std;
int main(){
    int a[100],n,i,num,found;
    cout<<"Enter array size";
    cin>>n;
    cout<<"Enter the numbers in the array:";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter number to be searched:";
    cin>>num;
    for(i=0;i<n;i++){
        if(a[i]==num){
            found =1;
            break;
        }
    }
    (found)?cout<<"Element found":cout<<"Element not found";

}
