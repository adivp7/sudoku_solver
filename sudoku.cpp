#include <iostream>
using namespace std;

bool check(int m[9][9],int r,int c,int n)
{
	int i,j,br=(r/3)*3,bc=(c/3)*3;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			if(m[br+i][bc+j]==n)
				return false;
	for(j=0;j<9;j++)
		if(m[r][j]==n)
			return false;
	for(i=0;i<9;i++)
		if(m[i][c]==n)
			return false;
	return true;
}
bool solve(int m[9][9])
{
	int i,j,flag=0,n;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
			if(m[i][j]==0)
			{
				flag=1;
				break;
			}
		if(flag==1)
			break;
	}
	if(i==9&&j==9)
		return true;
	for(n=1;n<=9;n++)
	{
		if(check(m,i,j,n))
		{
			m[i][j]=n;
			if(solve(m))
				return true;
			m[i][j]=0;
		}
	}
	return false;
}
int main()
{
	int i,j,m[9][9]={
	{0,0,0,0,6,0,0,0,0},
	{0,3,4,8,9,0,7,0,1},
	{0,0,0,0,0,2,0,9,0},
	{0,2,7,0,0,6,5,1,0},
	{0,0,0,0,0,0,0,0,0},
	{0,9,5,3,0,0,2,4,0},
	{0,4,0,6,0,0,0,0,0},
	{2,0,1,0,3,8,4,6,0},
	{0,0,0,0,7,0,0,0,0}};
//	for(i=0;i<9;i++)
//		for(j=0;j<9;j++)
//			cin>>m[i][j];
	cout<<'\n';
	if(solve(m))
		for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
				cout<<m[i][j]<<' ';
			cout<<'\n';
		}
	else
		cout<<"no solution\n";
    return 0;
}
