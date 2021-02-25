#include<iostream>
using namespace std;

int main(){
    int a[100],b[100];
    int arr[30],arr1[30],n,x,i,t,j=0,arr2[30];
	cout<<"Enter length of divisor: ";
	cin>>x;
	cout<<"Enter the divisor array: ";
	for(i=0;i<x;i++){
		cin>>arr1[i];
	}
	cout<<"Enter length of data array: ";
	cin>>n;
	cout<<"Enter the data array:";
	for(i=0;i<n+x-1;i++){
		if(i<n){
			cin>>a[i];
		}
		else{
			a[i]=0;
		}
	}
	
	while(j<n){
		if(a[j]!=1) j++;
		else{
			for(i=0;i<x;i++){
				a[j+i] = a[j+i]^arr1[i];
			}
		}
	}
	for(i=n;i<n+x-1;i++){
		cout<<a[i];
	}
}