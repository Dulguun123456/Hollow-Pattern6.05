/*
Hollow Inverted 
Pyramid Star Pattern
row1*********
row2-*     *
row3--*   *
row4---* *
row5----*
*/
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter rhe size : ";
	cin>>num;
	for(int row=1; row<=num; row++)
	{
		for(int space=1; space<=row; space++)
		{
			cout<<" ";
		}
		for(int col=1;col<=2*num-1;col++)
		{
			if( row==1||col==1||col==2*(num-row)+1)
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
