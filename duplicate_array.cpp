/*
find duplicate in array and return the duplicate value

*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i<n;i++ ){
		cin>>arr[i];
	}
	int count = 0;
	for(int i = 0; i<n;i++){
		for(int j = i+1 ; j<n;j++ ){
			if(arr[i]==arr[j]){
				cout<<arr[i];
				count ++;
			}
		}
	}
	if(count != 0)
		cout<<endl<<count;
	else 
		cout<<"no"<<endl;

	
}