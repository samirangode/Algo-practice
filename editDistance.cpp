#include <bits/stdc++.h>
using namespace std;

int minDistance(string A, string B) {
	vector<vector<int> > dp(A.size()+1,vector<int>(B.size()+1,0));
	for (int i = 0; i <=A.size(); ++i)
	{
		dp[i][0] = i;
	}
	for (int i = 0; i <=B.size(); ++i)
	{
		dp[0][i] = i;
	}
	
	for(int i=1; i<=A.size(); ++i){
		for (int j = 1; j<=B.size(); ++j)
		{
			string a = A.substr(i-1,1);
			string b = B.substr(j-1,1);
			if(a==b) dp[i][j] = dp[i-1][j-1];
			else dp[i][j] = min(min(dp[i-1][j-1], dp[i-1][j]), dp[i][j-1]) + 1; 
		}
	}
	return dp[A.size()][B.size()];	
}


int main(){
	string A;
	string B;
	cin>>A;
	cin>>B;
	cout<<minDistance(A,B)<<"\n";
	return 0;
}