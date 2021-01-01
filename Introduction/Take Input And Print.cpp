/* Take Input And Print-
   You just need to take input from stdin and print it to the stdout.

   Input Format-
   You will be taking a string as an input from stdin.

   Constraints-
   1 <= |S| <= 10^5

   Output Format-
   You need to print the input string to the stdout.*/

#include <iostream>
using namespace std;
int main()
{
	string s;
	getline(cin, s);
	int l;
	for(l=0;s[l]!='\0';l++)
	{
		cout<<s[l];
	}
}