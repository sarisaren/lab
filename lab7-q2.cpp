/*write a c++ program to print all natural numbers between 1 to n using recursion */

//define library
#include<iostream>
using namespace std;
//declare the recursive function
int NatNo(int a,int n)
{
	if (a<=n)
		{
			cout<<a<<endl;
			a++;
			NatNo(a,n);
		}
	return 0;
}
//give the main function
int main ()
{
	int a,n;
	cout<<"please enter the starting value a "<<endl;
	cin>>a;
	cout<<"please enter the ending value n:"<<endl;
	cin>>n;
	cout<<"the natural numbers between a and n are"<<NatNo(a,n)<<endl;
	
	return 0;
}
