/*
Hallow Rhombus 
Star Pattern
col 123456789
row1----*****
row2---*   *
row3--*   *
row4-*   *
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
		for(int space=1;space<=num-row;space++)
		{
			cout<<" ";
		}
		for(int col=1;col<=num;col++)
		{
			if(row==1||row==num||col==1||col==num) //mur ehelj bga bolohoor col1,tugsuj bga bolohoor col num gj oruulaw. hajuu2
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

