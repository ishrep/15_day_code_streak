/*Given a string str, the task is to find the minimum number of characters to be inserted to convert it to palindrome.*/

#include<iostream>
#include<string.h>
using namespace std;

int repeaters(char a[],int i){
    int count = 0;
    int j;
    int temp= (strlen(a)-1);
    int temp2=0;
    int c;
    int b;
    int tempcount = 0;
    for(;i<temp;i++){
        for(j=temp;j>i;j--){
            if(a[i]== a[j]){    
                temp = j-1;
                count++;
                temp2=(((j-i)%2==0)?1:0);
                c= repeaters(a,i+1);
                tempcount= (tempcount>c)?tempcount:c;
                break;
            }  
        }
    }
    b=2*count+temp2;
    return ((b>tempcount)?b:tempcount);
}
int mininsertions(char a[], int b){
    return strlen(a)-b;
}
void nearestpalindrome(char a[]){
    cout<<strlen(a);
    int count = repeaters(a,0);
    cout<<"minimum insertions required to convert the string in to a palindrome: "<<mininsertions(a,count)<<endl;   
}
int main(){
    char a[100];
    gets(a);
    nearestpalindrome(a);
}