/*
Hallow Right Triangle 
star pattern
cal 12345
row1*
row2**
row3* *
row4*  *
row5*****
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
		for(int col=1;col<=num;col++)
		{
			if(col==1||row==num||row==col)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";	
			}
		}
		cout<<endl;	
	}	
	return 0; 
}
