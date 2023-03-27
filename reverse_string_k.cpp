#include <bits/stdc++.h>
using namespace std;
void reverse(char s[],int start ,int end){
	while(end>=start){
		cout<<s[end];
		end--;
	}
}
int main(){
	char s[100];
	cin.getline(s,100);
	cout<<" input value : "<<s<<endl;
	int l=0,r=0;
	while(l<strlen(s)){
		while(r<strlen(s)&&s[r]!=' '){
			r++;
		}

		//cout<<r <<" "<<l<<endl;
		reverse(s,l,r-1);
		cout<<" ";
		l = r+1;
		r=l;
	}
	//reverse(s,2,5) ;
}