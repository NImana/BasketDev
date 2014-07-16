/*
This .cpp files will take 20 number inputs and determine which is the maximum and min values.
*/
#include<iostream>
using namespace std;


void main()
{
	int i,min,max,sum;
	double ave;
	int number[20];

	cout<<"INPUT 20 INTEGERS VALUE: ";

	for(i=0;i<20;i++)
	{
		cin>>number[i];
	}

	min=number[0];
	max=number[0];
	for(i=0;i<20;i++)
	{
		if(number[i]<min)
		{		
			min=number[i];
			
		}
		else if(number[i]>max)
		{
			max=number[i];
			
		}
	}
	
	sum=number[0];
	for(i=0;i<20;i++)
	{
		sum=sum+number[i];
		ave=sum/20;
		
	}


	cout<<"the minimum value is: "<<min<<endl;
	cout<<"the maximum value is: "<<max<<endl;
	cout<<"average: "<<ave<<endl;
}
