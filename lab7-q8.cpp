/* Write a C++ program to find sum of digits of a given number using recursion */

//define library
#include<iostream>
using namespace std;
//declare the recursion
int sum(int a)
{
	if(a>=0 and a<=9)
	{
		return a;
	}
	else
	{
		return (a%10)+sum(a/10);
	}
}
//give the function
int main()
{
	int a,num;
	cout<<"enter the value ";
	cin>>a;
	num=sum(a);
	cout<<num;
	return 0;
}
