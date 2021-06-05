/*
Hollow Diamond 
Star Pattern
col  12345678910
row1 **********
row2 ****--****
row3 ***----***
row4 **------**
row5 *--------*
row6 *--------*
row7 **------**
row8 ***----***
row9 ****--****
row10**********
*/
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the size:";
	cin>>num;
	for(int row=1;row<=num;row++)
		{
			for(int star=1;star<=(2*num-row)-4;star++)
			{
				cout<<"*";
			}
			for(int space=1;space<=row-1;space++)
			{
				cout<<" ";
			}
			for(int space1=1;space1<=row-1;space1++)
			{
				cout<<" ";
			}
			for(int star1=1;star1<=(2*num-row)-4;star1++)
			{
				cout<<"*";
			}
			
			cout<<endl;	
		}
		
	for(int row=1;row<=num;row++)
		{
			for(int star=1;star<=row+num-5;star++)
			{
				cout<<"*";
			}
			for(int space=1;space<=num-row;space++)
			{
				cout<<" ";
			}
			for(int space1=1;space1<=num-row;space1++)
			{
				cout<<" ";
			}
			for(int star1=1;star1<=row+num-5;star1++)
			{
				cout<<"*";
			}
			
			cout<<endl;
		}	
		
	return 0;
}
