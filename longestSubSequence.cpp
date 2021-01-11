#include <bits/stdc++.h>
using namespace std;

int solve(string A, string B) {

    //int lenSubsequence[A.length()+1][B.length()+1] = {0};
	vector<vector<int> > lenSubsequence(A.length()+1, vector<int> (B.length()+1));
	for(int i=0;i<A.length()+1;i++){
		for (int j = 0; j < B.length()+1; ++j)
		{
			lenSubsequence[i][j]=0;
		}
	}  

    for(int i=1;i<A.length()+1; i++){
    	for(int j=1; j<B.length()+1;j++){

    		if(A[i-1]==B[j-1]){
    			lenSubsequence[i][j] = lenSubsequence[i-1][j-1]+1;
    		}
    		else{
    			lenSubsequence[i][j] = max(lenSubsequence[i-1][j],lenSubsequence[i][j-1]);
    		}

    	}
    }
    
    for(int i=0;i<A.length()+1;i++){
		for (int j = 0; j < B.length()+1; ++j)
		{
			cout<<lenSubsequence[i][j];
		}

		cout<<"\n";
	}  
    return lenSubsequence[A.length()][B.length()];	
}



int main(int argc, char const *argv[])
{
	/* code */
	string A;
	string B;
	cin>>A;
	cin>>B;
	cout<<solve(A,B);
	 
	return 0;
}