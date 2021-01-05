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
