/*array example*/

#include<iostream>
using namespace std;

//declare the function
int sumofarray(int arr[], int length)
{
	int sum=0;
	for(int n=0;n<length;n++)
	{
		sum = sum + arr[n];
	}
	return sum;
}
//give the main function to find sum of all elements of an array
int main()
{
	int x;
	int arr[]={1,2,3,4,5};
	x=sumofarray (arr,5);
	cout<<x;
	return 0;
}
