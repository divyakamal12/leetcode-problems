#include <bits/stdc++.h>
using namespace std;
int main(){
	
	char s[100];
	cin.getline(s,100);
	int fq[256] ={0};
	int i=0;
	//frequency counter
	/*while(i<strlen(s)){ 
		int val =(int) s[i];
		fq[val]= fq[val]+1;
		i++;
	}
	for (int i = 0; i < 256; i++)
	{
		if (fq[i]!=0)
		{
			cout<<(char)i; 
			if(fq[i]>1){cout<<fq[i];}
		}
	}*/
	int count ;
	while(i<strlen(s)){
		count =1;
		while(i<strlen(s)&& s[i]== s[i+1]){
			count++;
			i++;
		}
		count==1? cout<<s[i]:cout<<s[i]<<count;

		i++;
	}


}

/*
#include <bits/stdc++.h>
using namespace std;

void compress_str(string str)
{


int j=0;
    for (int i = 0; i < str.length(); i++) {

        int count = 0;
        while (i < str.length() - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
            
        count==0 ?cout<<str[i] : cout << str[i] << count;
    }
}

int main()
{
    string str = "abcdddddef";
    compress_str(str);
    return 0;
}
*/