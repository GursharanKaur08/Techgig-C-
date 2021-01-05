/* Class Records (100 Marks)
You are given a dataset of N students belonging to the same class.
The data contains name of the student followed by marks they scored in five subjects which are Physics, Chemsistry, Maths, English, Hindi.
Your task is find the average marks of the class for each individual subject.

Input Format
First line will contain an Integer N, denoting  the number of students in the class.
Each of the Next N lines will contain a string S denoting the student name, followed by five integers m1, m2, m3, m4, m5 denoting the marks scored in each subject.

Constraints
1 <= N <= 10^3
1 <= S <= 10^2
0 <= m1, m2, m3, m4, m5 <= 100

Output Format
You have to print average marks upto two decimal places for each subject followed by a space.*/

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
