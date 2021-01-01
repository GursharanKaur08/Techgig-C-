/* Play with Fibonacci sequence 
You just need to take a number as input from stdin which will tell how many terms of the Fibonacci needs to be printed.

Input Format
You will be taking a number as an input from stdin. 

Constraints
1 <= N <= 50

Output Format
You need to print the Fibonacci series separated by space to the stdout. */

#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a=0,b=1,c;
	cout<<a<<" "<<b;
	for(int i=0;i<n-2;i++)
	{
		c=a+b;
		cout<<" "<<c;
		a=b;
		b=c;
	}
}


