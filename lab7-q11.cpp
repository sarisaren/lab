/* Write a C++ program to find GCD (HCF) of two numbers using recursion */

//define library
#include<iostream>
using namespace std;
//declare the recursion
int hcf(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return hcf(b,a%b);
	}
}
//give the function
int main()
{
	int a,b,num;
	cout<<"enter the value ";
	cin>>a>>b;
	num=hcf(a,b);
	cout<<num;
	return 0;
}
