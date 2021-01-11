#include <bits/stdc++.h>
using namespace std;

int numTrees(int A) {
	// dp[i] will store number of possible bsts for index i
	vector<int> dp(A+1,0);
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;
	for(int i = 3; i<=A; i++){
		for (int j = 0; j <i ; ++j)
		{
			dp[i] += dp[j]*dp[i-j-1];
		}
	}
	return dp[A];
}



int main(){
	int n;
	cin>>n;
	cout<<numTrees(n)<<"\n";
}