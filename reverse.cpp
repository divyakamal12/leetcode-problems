#include <bits/stdc++.h>
using namespace std;
int main(){
	
	char str[500];
	char revs[500];
	cin.getline(str,500);
	//cout<<str;	
	int i =strlen(str)-1;
	
	//cout<<i;
	while(str[i]){
		cout<<str[i];
		if(str[i] ==str[0]){
			break;
		}
		i--;
	}
}