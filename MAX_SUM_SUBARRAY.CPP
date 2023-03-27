#include <bits/stdc++.h>
using namespace std;
int max_sum(int arr1[],int size1, int arr2[], int size2){
	int i = 0, j= 0; int max[100];
	int sum1 = 0, sum2 =0,k=0;
	int sum = 0; 
	while(i<size1 || j<size2){
		if(arr1[i]<arr2[j]){
			max[k]=arr2[j];
			
		}
		else
			sum = sum+arr1[i];
		
		
	}

}

int main(){

	int arr1[100],arr2[100];
	int n,m;
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		/* code */
		cin>>arr1[i];
	}

	cin>>m;
	for (int i = 0; i < m; i++)
	{
		/* code */
		cin>>arr2[i];
	}

	int max = max_sum(arr1,n,arr2,m);
	cout<<max;
}