/* Take my name 
An encoded string is provided and you are asked to decode it. There are few rules governing the decryption which are presented in the form of a puzzle. Solve the puzzle and decrypt the string. 

Puzzle:
I am a and c too but my identity is xxx. All the numbers represent my agent number 007. The bar is always the best p. I should not be preferred over us. The b is Bond and James is always j. No one is allowed to enter in personal space. The case is very sensitive.

Input Format
The first line of input consists of the numbers of test cases, T
Next T lines consist of the encoded strings.

Constraints
1<= T <=10
1<= |string_length| <=1000

Output Format
Print the decrypted string for each test case in a separate line.*/

#include <iostream>
#include<cstring>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int l;
		for(int i=0;s[i]!='\0';i++)
		{
			l++;
		}		
		for(int i=0;i<l;i++)
		{
			if(s[i]=='a' || s[i]=='c')
			{
				for(int j=l;j>i;j--)
				{
					s[j+2]=s[j];
				}
				s[i]='x';
				s[i++]='x';
				s[i++]='x';
				l=l+2;
			}	
			else if(s[i]=='p')
			{
				for(int j=l;j>i;j--)
				{
					s[j+2]=s[j];
				}
				s[i]='b';
				s[i++]='a';
				s[i++]='r';
				l=l+2;
			}
			else if(s[i]=='I')
			{
				for(int j=l;j>i;j--)
				{
					s[j+2]=s[j];
				}
				s[i]='u';
				s[i++]='s';
				l=l+1;
			}
		}
		puts(s);
	}
}

