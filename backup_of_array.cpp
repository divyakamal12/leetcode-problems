#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,mid=0, arr[100],backup[100];
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}

	if (n%2==0)
		{
			mid = (n-1)/2;
		}
		else
			mid = (n/2);
	backup[0]=arr[mid];
	int j=1;
	int r,l;
	l=mid-1;
	r=mid+1;
	while(l>=0 || r<=n){
		if(l>=0){

		backup[j]= arr[l];
		j++;
		l--;
	}	

		if(r<=n){
		backup[j]= arr[r];
		j++;
		r++;
		}


	}

	for (int i = 0; i < n; ++i)
	{
		cout<<backup[i]<<" ";
	}

	
}