/*
Hallow Mirrored
Right Triangle 
Star Pattern
col 12345
row1----*
row2---**
row3--* *
row4-*  *
row5*****
*/
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the size";
	cin>>num;
	for(int row=1;row<=num;row++)
	{
		for(int space=1;space<=num-row;space++)
		{
			cout<<"-";
		}
		for(int col=1;col<=row;col++)
		{
			if(row==col||col==1||row==num)
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
