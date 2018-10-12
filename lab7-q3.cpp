/* write a c++ program to print all even numbers in given range using recursion */

//define library
#include<iostream>
using namespace std;
//declare the recursion
 int Even(int a,int n)
{
	if(a%2==0 and a<=n)
	{
		cout<<a<<endl;
		Even(a+2,n);
	}
	else if(a+1<=n)
	{
		cout<<a+1<<endl;
		Even(a+2,n);
	}
}
//give the function
int main()
{
	int a,n;
	cout<<"please enter the starting value a"<<endl;
	cin>>a;
	cout<<"please enter the ending value n"<<endl;
	cin>>n;
	Even(a,n);

	return 0;
}
