/* Greatest Of 3 
You just need to take three number as input from stdin and you need to find greatest of them.

Input Format
You will be taking three numbers as an input from stdin one on each line respectively.

Constraints
1 <= A,B,C <= 10^5

Output Format
You need to print the greatest of the three numbers to the stdout.*/

#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b && a>c)
	{
		cout<<a;
	}
	else if(b>a && b>c)
	{
		cout<<b;
	}	
	else if(c>a && c>b)
	{
		cout<<c;
	}
}