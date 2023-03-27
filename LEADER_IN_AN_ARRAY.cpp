#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
	vector<int> a;
	int n,temp;
	cin>>n;

	for(int i= 0;i<n;i++){
		cin>>temp;
		a.push_back(temp);
	}

	int sum=0;
	for (int i = 0; i < n; i++)
	{
		sum=sum+a[i];
	}
	cout<<sum<<endl;

	int curent=sum;
	for (int i = 0; i < n; i++)
	{	
		curent = curent -a[i];
		if (curent<a[i])
		{
			/* code */
			cout<<a[i]<<" ";
		}
		else if (curent<=0)
		{
			/* code */
			cout<<a[i]<<" ";
		}
		//cout<<curent<<" ";
	}
}