#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
	vector<int> a;
	int n,temp;
	cin>>n;
	for(int i = 0; i<n;i++){
		cin>>temp;
		a.push_back(temp);
	}
	for(int i = 0; i<n;i++){
		cout<<a[i];
	}
	cout<<endl;

	int i=0 ,nz = 0,nt =n-1;
	while(i<nt)
	{
	cout<<"zero "<<nz<<" two "<<nt<<" i "<< i <<" ";

		if(a[i]==0){
			swap(a[i],a[nz]);
			nz++;i++;	
		}
		else if(a[i]==1){
			i++;
		}
		else{

			swap(a[i],a[nt]);
			nt--;
			
		} 
		for(int i = 0; i<n;i++){
		cout<<a[i];
	}
	cout<<endl;
	}
	cout<<" -****-";
	cout<<endl;

	for(int i = 0; i<n;i++){
		cout<<a[i];
	}
}