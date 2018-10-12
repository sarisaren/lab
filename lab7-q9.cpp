/*  Write a C++ program to find factorial of any number using recursion */

//define library
#include<iostream>
using namespace std;
//declare the recursion
int factorial(int a)
{
	if(a==1)
	{
		return 1;
	}
	else
	{
		return a*factorial(a-1);
	}
}
//give the function
int main()
{
	int a,num;
	cout<<"please enter the value";
	cin>>a;
	num=factorial(a);
	cout<<num;
	return 0;
}
