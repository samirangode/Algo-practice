#include <iostream>
#include <string>
#include <bits/stdc++.h> 
using namespace std;

int check(int i, int arr[], int K, int N ){
	// return -1 when it is not a countdown array 
	// if it is, return the new i
	for(int j=1; j<=K && i<N; j++){
		if(arr[i] == K){
			i++; K--;
		}
		else return -1;
		//cout<<"check loop j="<<j<<"\n";
		
	}
	return i; 
}


int main()
{	
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	long long N, K;
	for( int t = 0; t<T; t++ ){
		cin >> N >> K;
		//cout<< N << "\n";
		//cout<< K << "\n";
		int A[N];
		for (int i = 0; i<N; i++ ){
			cin >> A[i];
		}
		/*for(int i = 0; i<N; i++ ){
			cout << A[i] <<"\n";
		}*/
		int count = 0;
		int ans =-1;
		for(int i = 0; i<N; i++){
			if(A[i]==K){
			 ans = check(i, A, K, N);
			}
			//cout<<count<<"\n";
			//cout<<"count loop i = "<< i <<"\n";
			if(ans != -1 ){
				count++;
				//i= ans;
			}
			ans =-1;

		}
		cout<<"Case #"<<t+1<<": "<<count<<"\n";
	
	}

return 0;
}