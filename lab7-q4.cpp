/* write a c++ program to find sum of all natural numbers between 1 to n using recursion */

//define library
#include<iostream>
using namespace std;
//declare the recursive program
int SumNatNo(int n)
{
	if (n>1)
		{
			int sum=n+SumNatNo(n-1);
		}
	else
		{
			return 1;
		}
}	
//give the main program
int main()
{
	int n;
	
	cout<<"please enter the ending value n"<<endl;
	cin>>n;
	cout<<"the sum of all the natural numbers between 1 and n are"<<SumNatNo(n)<<endl;

	return 0;
}
