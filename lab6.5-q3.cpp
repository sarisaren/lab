/* Loops and Logic */

//define library
#include<iostream>
using namespace std;
int main()
{
//define variable
	int a=0,x;
//give infinite loop for the square
	while(a>=0)
	{
				x=a*a;
		//give finite loop for the sum
				int k=0;		
				while (k<=x){
							if	(x==k*(k+1)/2) {
													cout<<x<<endl;
													}
								k++;
								}
		a++;
	}
	return 0;
}	
