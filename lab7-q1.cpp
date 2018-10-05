/* write a program to find power of any number using recursion */

//define library
#include<iostream>
using namespace std;
//declare the recursive function
int PowerFinder(int a,int n)
{
	if(n==0)
		{
			return 1;
		}
	else
		{
			return a*PowerFinder(a,n-1);
		}
}
//give the main function
int main ()
{
	int a,n;
	cout<<"please enter the value of base a"<<endl;
	cin>>a;
	cout<<"please enter the value of power n"<<endl;
	cin>>n;
	cout<<"the power of the given base number is "<<PowerFinder(a,n);
	return 0;
}
