/* Subtraction 
You just need to take two numbers as input from stdin and you need to subtract the one from later.

Input Format
You will be taking two numbers as an input from stdin one on each line respectively. 

Constraints
1 <= A, B <= 10^5

Output Format
You need to print the output of the subtraction to stdout.*/

#include <iostream>
using namespace std;
int main()
{
	long a,b,c;
	cin>>a>>b;
	if(a>=b)
		c=a-b;
	else if(b>a)
		c=b-a;
	cout<<c;
}