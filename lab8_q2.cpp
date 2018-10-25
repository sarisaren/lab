/*  Write a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. (Use functions for each of the task in the question) */

//define library
#include<iostream>
using namespace std;
//declare a function to find the largest element
int large(int arr[],int l)
{
	int n=arr[0];
	for(int i=1;i<l;i++)
	{
		if(n<arr[i])
		{
			n=arr[i];
			cout<<n;
		}
		else
		{
			cout<<n;
		}
	}
	
	cout<<"the largest element is"<<n<<endl;
}
//declare a function to find the smallest element
int small(int arr[],int l)
{
	int n=arr[0];
	for(int i=1;i<l;i++)
	{
		if(n>arr[i])
		{
			n=arr[i];
			cout<<n;
		}
		else
		{
			cout<<n;
		}
	}
	
	cout<<"the smallest element is"<<n<<endl;
}
//declare a function to find the mean value
int mean(int arr[],int l)
{
	int sum=0;
	float mean;
	for(int i=0;i<l;i++)
	{
		sum=sum+arr[i];
		mean=sum/l;
	}
	cout<<"the mean of the elements is"<<mean<<endl;
}
//declare a function to find the median
int median(int arr[],int l)
{
	if(l%2==1)
	{
		cout<<arr[l/2]<<endl;
	}
	else
	{
		int n=(arr[l/2]+arr[(l/2)-1])/2;
		cout<<n;
	}
	cout<<"the median of the elements is"<<median<<endl;
}
//declare the main 
int main()
{
	int i,j,temp;
	//give the length of elements of the array
	int p;
	cout<<"please enter the length of elements"<<endl;
	cin>>p;
	//use for loop to enter the elements of array
	int arr[p];
	for(i=0;i<p;i++)
	{
		int q;
		cout<<"please enter the"<<i+1<<"element of the array"<<endl;
		cin>>q;
		arr[i]=q;
	}
	//sorting-ascending order
	for(i=0;i<p;i++)
	{
		for(j=i+1;j<p;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	//call the functions
	large(arr,p);
	small(arr,p);
	mean(arr,p);
	median(arr,p);
	return 0;
}
