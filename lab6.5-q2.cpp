/*using function decide the best choice of compensation */

//define library
#include<iostream>
using namespace std;
//ask the user for input of the number of shoes sold per week using function
int func1(int a){
		cout << "please enter the number of shoes sold per week";
		cin >> a ;
}
//write a function for the option1
int func2(int a){
						a=600;
						}
//write a function for the option2
int func3(int a){
						float x;
						x=7*40+(10*225*a/100);
						}
//write a function for the option3
int func4(int a){
						float x;
						x=(20*225*a/100)+(20*a);
						}
//write a driver program to use the 4 functions and decide the best option for yourself
int main()
{
	int s;
	int inp=func1(s);

	//for the first salary
	float sal1=func2(inp);
	//for the second salary
	float sal2=func3(inp);
	//for the third salary
	float sal3=func4(inp);


	if (sal1>sal2 and sal1>sal3)
	{
		cout<<"first option is best with the salary"<<sal1<<endl;
	}
 	else if (sal1<sal2 and sal2>sal3)
	{
		cout<<"second option is best with the salary"<<sal2<<endl;
	}
	else
	{
		cout<<"third option is best with the salary"<<sal3<<endl;
	}

	return 0;
}
