#include <bits/stdc++.h>
using namespace std;
void printarr(int arr[][100], int n, int m){
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j)
		{
			cout<<arr[i][j]<<" " ;
		}
		cout<<endl;
	}
}
int main(){
	int arr[100][100];
	int n,m;
	cin>>n>>m;
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j)
		{
			cin>>arr[i][j];
		}
	}		
	cout<<"orignal arr"<<endl;
	printarr(arr,n,m);

	//int transpose[100][100];
	for (int i = 0; i < n; ++i){
		for (int j = i; j < m; ++j)
		{
			int temp = arr[j][i];
			arr[j][i]=arr[i][j];
			arr[i][j] = temp;
		}
	}
	cout<<"Transpose arr"<<endl;

	printarr(arr,n,m);
	for (int j = 0; j < n; j++) {
		for (int i = 0, k = n - 1; i < k; i++, k--) {
			int temp = arr[i][j];
			arr[i][j] = arr[k][j];
			arr[k][j] = temp;
		}

	}


	cout<<"Rotate arr"<<endl;

	printarr(arr,n,m);



	
}