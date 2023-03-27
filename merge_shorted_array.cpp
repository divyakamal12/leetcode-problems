#include <bits/stdc++.h>
using namespace std;
void mergearray(int arr[],int size1,int arr2[] , int size2 ,int arrans[]){
	int i = 0,j=0, k=0;
	while(i<size1 || j<size2){
		if (arr[i]<arr2[j])
		{
			arrans[k]=arr[i];
			k++;
			i++;
		}
		else{
			arrans[k]= arr2[j];
			k++;
			j++;
		}
			
	}
}


void printarr(int arr[], int size){
	for (int i = 0; i < size; i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main(){
	int n,x;
	cin>>n;
	int arr[100];

	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	cin>>x;
	int arr2[100];
	for (int j = 0; j < x; j++)
	{
		cin>>arr2[j];
	}

	int arrans[100];
	mergearray(arr,n,arr2,x,arrans);
	int size= n+x;
	printarr(arrans,size);

}