#include <iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	string s;
	int m1[t],m2[t],m3[t],m4[t],m5[t];
	float s1=0.00,s2=0.00,s3=0.00,s4=0.00,s5=0.00;
	for(int i=0;i<t;i++)
	{			
		cin>>s;
		cin>>m1[t]>>m2[t]>>m3[t]>>m4[t]>>m5[t];
		s1=s1+m1[t];
		s2=s2+m2[t];
		s3=s3+m3[t];
		s4=s4+m4[t];
		s5=s5+m5[t];
	}
	float a1,a2,a3,a4,a5;
	a1=s1/t;
	a2=s2/t;
	a3=s3/t;
	a4=s4/t;
	a5=s5/t;
	printf("%.2f ", a1);
	printf("%.2f ", a2);
	printf("%.2f ", a3);
	printf("%.2f ", a4);
	printf("%.2f", a5);
}