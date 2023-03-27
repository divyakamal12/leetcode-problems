#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,mid=0, recover[100],backup[100];
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		cin>>backup[i];
	}


	if (n%2==0)
		{
			mid = (n-1)/2;
		}
		else
			mid = (n)/2;
	
		cout<<mid<<endl;
recover[mid]= backup[0];
int l= mid-1,r=mid+1,j=1;
while(j<n){
	if(l>=0){
		recover[l]=backup[j];
		j++;l--;
	}
	if (r<n)
	{
		recover[r]=backup[j];
		r++;j++;
	}
}


	for (int i = 0; i < n; ++i)
	{
		cout<<recover[i]<<" ";
	}


}