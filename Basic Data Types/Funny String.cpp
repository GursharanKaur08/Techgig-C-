/* Funny String
Hari has a problem for you. He will provide you with a string consisting of lowercase letters, uppercase letters and digits and you have to tell if the string is funny or not.
A string is considered to be funny if it contains at least three vowels in uppercase, alphabet x, y, z in lowercase and only the even digits.

Input Format
The first line of input consists of numbers of test cases, T
Next T lines consist of the strings.

Constraints
1<= T <=10
1<= |string_length| <=1000

Output Format
For each test case, print "FUNNY" if the string is funny otherwise print "NOT FUNNY" */

#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int vowel=0, xyz=0, uxyz=0, digitodd=0,digiteven=0;
		for(int i=0;s[i]!='\0';i++)
		{
			if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
			{
				vowel++;
			}
			else if(s[i]=='x' || s[i]=='y' || s[i]=='z')
			{
				xyz++;
			}
			else if(s[i]=='X' || s[i]=='Y' || s[i]=='Z')
			{
				uxyz++;
			}
			else if(isdigit(s[i])==1)
			{	
				if(s[i]%2!=0)
				{
					digitodd++;
				}
				else 
				{
					digiteven++;
				}
			}
		}
		if(vowel>=3 && xyz>=3 && uxyz==0 && digitodd==0 && digiteven>0)
		{
			cout<<"FUNNY\n";
		}
		else
		{
			cout<<"NOT FUNNY\n";
		}
	}
}


