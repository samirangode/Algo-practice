#include <iostream>
#include <string>
#include <bits/stdc++.h> 
using namespace std;


boolean subsetSum(int input[], int total, int N){
	bool T[N+1][N+1];
	for (int i = 0; i <= input.length; i++) {
            T[i][0] = true;
    }

    for (int i = 1; i <= N+1; i++) {
            for (int j = 1; j <= N+1; j++) {
                if (j - input[i - 1] >= 0) {
                    T[i][j] = T[i - 1][j] || T[i - 1][j - input[i - 1]];
                } else {
                    T[i][j] = T[i-1][j];
                }
            }
        }
}




int main()
{	
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	long long N;
	for(int t = 0; t<T; t++){
		cin>>N;
		int A[N];
		int B[N];
		int min 100;
		for(int i = 0; i<N; i++) {
			cin>>A[i];
			if(A[i]<min){
				min = A[i];
			}
		}
		if(min<0){
			for(int i=0; i< N){
			A[i] += (-1*min);
			}
		}

		bool T[N+1][N+1];
		for (int i = 0; i <= input.length; i++) {
            T[i][0] = true;
    	}

    	for (int i = 1; i <= N+1; i++) {
            for (int j = 1; j <= N+1; j++) {
                if (j - input[i - 1] >= 0) {
                    T[i][j] = T[i - 1][j] || T[i - 1][j - input[i - 1]];
                } else {
                    T[i][j] = T[i-1][j];
                }
            }
        }

        int j = 0;
        for(j = 0; j<N+1; j++){
        	if()
        }

	}

return 0;
}
