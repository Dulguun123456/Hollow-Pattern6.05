/*
Hallow Inverted Mirrored
Right Triangle Star Pattern

row1*****
row2-*  *
row3--* *
row4---**
row5----*
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
		for(int space=1;space<=row-1;space++)
		{
			cout<<"-";
		}
		for(int col=1;col<=num;col++)
		{
			if(row==1||col==1||col==num-row+1)
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
