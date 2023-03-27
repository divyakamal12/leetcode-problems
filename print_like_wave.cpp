#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	vector<vector<int>> v(n, vector<int>(m));
	

	for (int i = 0; i < n; i++)
	{for (int j = 0; j < m; j++)
	{cin>> v[i][j];}}

for (int i = 0; i < n; i++)
	{for (int j = 0; j < m; j++)
	{cout<< v[i][j]<<" ";}cout<<endl;}

	cout<<endl;
	int i=0;

	for (int j = 0; j < m; j++){
		//cout<<" j "<<j<<endl;
		if(i==0){
		while(i<n)
		{
			cout<< v[i][j]<<" ";
			//cout<<" i "<<i<<" ";
			i++;

		}
		i--;}
		else{
			for(i;i>=0;i--){
			cout<< v[i][j]<<" ";
			//cout<<" i "<<i<<" ";
		}
		i++;

		}}

}