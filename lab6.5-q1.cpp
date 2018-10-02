/*Loops*/

#include<iostream>
using namespace std;
int main()
{

//declare the variables
	int a,b,m;
	cout << "please enter the value of a";
//take the input
	cin>>a;
//give the conditions
	while (a>=5 and a<=95)
	{
		m=20-(a/5);
		b=100-(a+m);
		cout<<"number of mangoes"<<m<<endl;
		cout<<"number of bananas"<<b<<endl;
		break;
	}
	return 0;
}


