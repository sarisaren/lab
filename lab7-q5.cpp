/* write a c++ program to find sum of all even or odd numbers in given range using recursion */

//define library
#include<iostream>
using namespace std;
//declare the recursive function
int sumEvenorOdd(int a,int n)
{
	if(a%2==0 and a<=n)
		{
			int sumEven=a+sumEvenorOdd(a+2,n);
		}
	else if(a%2!=0 and a<=n)
		{
			int sumEven=a+sumEvenorOdd(a+2,n);
		}
}
//give the main function
int main()
{
	int a,n;

	cout<<"please enter the starting value a"<<a<<endl;
	cin>>a;
	cout<<"please enter the ending value n"<<n<<endl;
	cin>>n;
	cout<<sumEvenorOdd(a,n);

	return 0;
}
