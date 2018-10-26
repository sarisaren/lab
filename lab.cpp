//define library
#include<iostream>
using namespace std;
//declare a function for kth largest element
int klarge(int array[],int len,int k)
{
	int n;
	n=array[len-k];
	cout<<n<<endl;
}
//declare a function for kth smallest element
int ksmall(int array[],int len,int k)
{
	int n;
	n=array[k-1];
	cout<<n<<endl;
}
//main
int main()
{
	//array declaration
	int n,i,j,k;
	int temp;
	
	//enter the length of the array
	cout<<"please enter the length of the array"<<endl;
	cin>>n;
	int array[n];
	//enter the value of k
	cout<<"please enter the value of k"<<endl;
	cin>>k;
	//enter the elements
	for(i=0;i<n;i++)
	{
		cout<<"please enter the "<<i+1<<"th value of array"<<endl;
		cin>>array[i];
	}
	//sorting-ascending order
	//sorting-ascending order
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(array[i]>array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	//call the functons
	klarge(array,n,k);
	ksmall(array,n,k);
	return 0;
}
