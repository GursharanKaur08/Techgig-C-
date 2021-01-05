/* Count Characters (100 Marks)
You will be given a string S, consisting of lowercase English letters and a character C.
Your task is to find the number of occurrences of that character in the string. 

Input Format
First line will contain a string S.
Next line will contain a character C.

Constraints
1 <= S <= 10^3

Output Format
Output the number of occurrences of character C in the string S. 
*/

#include <iostream>
#include<cstring>
using namespace std;
int main()
{
	string s;
	char c;
	cin>>s;
	cin>>c;
	int i,n=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==c)
		n++;
	}
	cout<<n;
}
