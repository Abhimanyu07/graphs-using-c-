// graph plotting using C++
#include<iostream>
#include<math.h>
using namespace std;
void graph(int* arr, int n, int max)
{	int rows = max+3;
	int cols = 2*n+1;
	cout<<"\n\n";
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			if(j==0)
			{
				cout<<rows-i-1;
			}
			else if(rows-i-1==0)
			{
				if(j%2==0)
				{
					cout<<arr[int(j/2-1)];
				}
				else
				cout<<"\t";
			}
			else if(j%2==0)
			{
				if(arr[int(j/2-1)]>=rows-i-1)
				{
					cout<<"x";
				}
				else{
				cout<<"\t";
				}
			}
			else if(j%2!=0)
			{
				cout<<"\t";
			}
		}
		cout<<"\n";
	}
}
int max_val(int* arr,int n)
{	
	int max = arr[0];
	for(int i=1;i<n;i++)
	{
		if(max<arr[i])
		{
			max = arr[i];
		}
	
	}
	return max;
}
int* get_array(int n)
{
	int* arr= new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	return arr;
}
int main()
{	int* a= get_array(5);
	cout<<"\n";
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n max : "<<max_val(a, 5);
	graph(a, 5, max_val(a,5));
	return 0;
}
