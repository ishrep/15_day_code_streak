/*
Compute the running median of a sequence of numbers. That is, given a stream of numbers, print out the median of the list so far on each new element.

Recall that the median of an even-numbered list is the average of the two middle numbers.

For example, given the sequence [2, 1, 5, 7, 2, 0, 5], your algorithm should print out:

2
1.5
2
3.5
2
2


*/
#include<iostream>
using namespace std;
int main(){
    int a[100],n,i,temp,j;
    float median;
    cout<<"Enter length of array";
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<n; i++){
        temp= a[i];
        for(j=(i-1);j>=0;j--){
            if(temp<a[j]){
                a[j+1] = a[j];
                a[j]=temp;
            }
            else break;
        }
        cout<<"median= "<<(float(a[i/2] + a[(i+1)/2])/2)<<endl;
    }
}