#include <iostream>
#include <string>
#include <bits/stdc++.h> 
using namespace std;


int main()
{	
	ios::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	//cout<< T<< "\n";
	long long N, B;
	for( int t = 0; t<T; t++ ){
		cin >> N >> B;
	//	cout << N <<" "<< B << "\n";
		int A[N];
		for (int i = 0; i<N; i++ ){
			cin>>A[i];
		}

		sort(A,A+N);
		int sum=0;
		int houses = 0;
		for(int i = 0; i<N; i++){
			sum +=A[i];
			if(sum<=B){
				houses++;
			}
			else break;
	//		cout << sum << "\n";
		}
	cout<<"Case #"<<t+1<<": "<<houses<<"\n";	
	}
return 0;
}