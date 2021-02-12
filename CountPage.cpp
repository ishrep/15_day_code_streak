/*Yes, you read it right - Little Jhool is back, but no, he's not over his break up, still. And he's sad, broken and depressed; thus, he decided to visit a psychologist. She tells him to think about his pleasant memories of childhood, and stay busy so as to not miss his ex-girlfriend.

She asks him about his favorite memories from childhood, and being the genius Mathematician Little Jhool is, he remembered that solving Mathematics problem given to him by his teacher was his favorite memory.

He had two types of notebooks, when he was a kid.

 problems could be solved in one page, in the first notebook.
 problems could be solved in one page, in the second notebook.
Little Jhool remembered how in order to maintain symmetry, if he was given with n problems in total to solve, he tore out pages from both notebooks, so no space was wasted. EVER!

But, now he's unable to solve his own problem because of his depression, and for the exercise of the week, he has to answer the queries asked by his psychologist.

Given n number of questions, print the minimum number of pages he needs to tear out from the combination of both the notebooks, so that no space is wasted.

Input Format:
The first line will contain t - number of test cases.

The second will contain an integer n - number of questions.

Output Format:
Corresponding to the input, print the minimum number of pages Little Jhool needs to tear out from the combination of both the notebooks. If it is NOT possible, print "1".

Constraints:


SAMPLE INPUT 
2
23
32
SAMPLE OUTPUT 
-1
3
Explanation
For : 2 pages from the notebook, where  can be solved; 1 page from the notebook, where  can be solved.*/
#include<iostream>
using namespace std;

int main(){
	int t,a[100],i,count,x,tenmul;
	cin>>t;
	for(i=0;i<t; i++){
		cin>>a[i];
	}
	for(i=0;i<t;i++){
		if(a[i]%2==1){
			cout<<-1<<endl;
			continue;
		}
		if(a[i]%12==0){
			cout<<a[i]%12<<endl;
			continue;	
		}
		x=a[i]%10;
		count = x/2;
		tenmul = (a[i]-12*count);
		if(tenmul<0){
			cout<<-1<<endl;
			continue;
		}
		count+=(tenmul/60)*5;
		count+=(tenmul%60)/10;
		cout<<count<<endl;
		


	}
}