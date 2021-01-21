/*Given a string str, the task is to find the minimum number of characters to be inserted to convert it to palindrome.*/

#include<iostream>
#include<string.h>
using namespace std;

int repeaters(char a[]){
    int count = 0,i=0,j;
    int temp= (strlen(a)-1);
    int temp2=0;
    for(i=0;i<temp;i++){
        for(j=temp;j>i;j--){
            if(a[i]== a[j]){
                temp = j-1;
                count++;
                temp2=(((j-i)%2==0)?1:0);
                cout<<temp2;
                cout<<a[i]<<a[j];
                break;
            }  
        }
    }
    return count+temp2;
}
int mininsertions(char a[], int b){
    return strlen(a)-b-1;
}
void nearestpalindrome(char a[]){
    cout<<strlen(a);
    int count = repeaters(a);
    cout<<mininsertions(a,count)<<endl;

    
}
int main(){
    char a[100];
    gets(a);
    nearestpalindrome(a);
}