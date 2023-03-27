#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
	int n,temp;
	cin>>n;
	vector<int> arrival;
	vector<int> departure;
	for (int i = 0; i < n; ++i)
	{
		cin>>temp;
		arrival.push_back(temp);
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>temp;
		departure.push_back(temp);
	}
	sort(arrival.begin(), arrival.end());
	sort(departure.begin(), departure.end());
	int i =0, j=0;

	int maxplatform= 1,train = 0;
	while(i<n&&j<n){
		if(arrival[i]<=departure[j]){
			train++;i++;
		}
		else{
			j++;train--;
		}
		maxplatform = max(train , maxplatform );
	}

	cout<<maxplatform;

}