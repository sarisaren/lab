/* write a c++ program to find reverse of any number using recursion */

//define library
#include<iostream>
using namespace std;
//declare the recursion
int reverse(int a)
{
	if(a>=0 and a<=9)
	{
		return a;
	}
	else
	{
		cout<< a%10;
		return reverse(a/10);
	}
}
//give the function
int main()
{
	int a,num;
	cout<<"enter the value ";
	cin>>a;
	num=reverse(a);
	cout<<num;
	return 0;
}
