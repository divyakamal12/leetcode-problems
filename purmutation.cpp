#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main(){
	char str1[100];
	char str2[100];
	cin>>str1;
	cin>>str2;
	int flag =0;
	int fq[256] ={0};
	if(strlen(str1) != strlen(str2))
	flag =1;
	int j =0;
	while(str1[j]){
		int val = (int)str1[j];
		//cout<<val<<"  ";
		fq[val]=fq[val]+1;
		j++;
	}

	j=0;
	while(str2[j]){
		int val = (int)str2[j];
		//cout<<val<<"  ";
		fq[val]=fq[val]-1;
		j++;
	}


	for (int i = 0; i < 256; i++)
	{if (fq[i]==1)
		{flag = 1;}
	}

	if (flag ==0)
	{cout<<"true";}
	else{cout<<"fasle";}
}