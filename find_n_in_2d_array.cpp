#include <bits/stdc++.h>
using namespace std;

void printar(int a[][100],int n,int m){
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			/* code */
			cout<<a[i][j] <<" ";

		}
		cout<<endl;
	}
}



void search(int a[][100],int n,int m , int x){
	int i =0,j=m-1;
	while(i<n && j<m ){
		if(a[i][j]==x){
			cout<<"i= " <<i+1<<" j= "<<j+1;
			return;
		}
		else if(a[i][j]<x){
			i= i+1;
		}
		else if (a[i][j]>x)
		{
			j=j-1;
		}
	}
	cout<<"-1";
	return
;


	/*for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j]== x){
				cout<<"i= " <<i+1<<" j= "<<j+1;
			}

		}//o(n^2)
	}*/
}


int main(){
	int a[100][100];
	int m,n;
	cin>>n>>m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			/* code */
			cin>>a[i][j];

		}
	}

	int x;
	cin>>x;

	//printar(a,n,m);

	search(a,n,m,x);


}