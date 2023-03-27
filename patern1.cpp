#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int k = 1;
	for(int i = 1;i<=n;i++){
		for(int j=n-i;j>0;j--){
			cout<<".";
		}
		while(k<=(2*i-1)){
			int temp =i;
			if(temp <=2*i-2){
				cout<<temp;
				temp++;
			}
			else{
				temp--;
			}
			k++;
		}


		/*for(int j=1;j<=(2*i-1);j++){
			if(temp<=2*i-2){
				cout<<temp;
				++temp;
			}
			else{
				cout<<temp;
				--temp;
			}
		}*/
		cout<<endl;
	}
	
}