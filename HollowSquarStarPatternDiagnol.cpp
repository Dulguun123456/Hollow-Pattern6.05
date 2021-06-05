/*
Hallow Squar Star Pattern 
with Diagnol
col 12345
row1*****
row2** **
row3* * *
row4** **
row5*****
*/
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<" Enter the size:";
	cin>>num;
	for(int row=1;row<=num;row++)
	{
		for(int col=1;col<=num;col++)
		{
			if(row==1 ||row==num||col==1||col==num || row==col || col==num-row+1 )
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
