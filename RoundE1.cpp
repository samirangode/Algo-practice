#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int T;
	cin>>T;
	int test_cases=0;
	while(test_cases<T){
		int N;
		cin>>N;
		vector<int> v;
		int val = 0;
		for (int i = 0; i < N; ++i)
		{	cin>>val;
			v.push_back(val);
			/* code */
		}
		int maxLen = 0;
		int len = 0;
		int d = 0;
		for(int i = 0; i < N; ++i){
			if(i == 0) continue;
			if(i == 1){ 
				d = v[1] - v[0];
				continue;
			}
			int newD = v[i] - v[i-1];
			if(newD == d){
				if(len<3) len = 3;
				else len++;
				maxLen = max(len, maxLen);
			}
			else{
				d = newD;
				len = 0;
			}
		}
		if(N==2) {cout<<"Case #"<<test_cases+1<<": "<<2<<"\n"; test_cases ++; continue;}
		if(N<2) {cout<<"Case #"<<test_cases+1<<": "<<0<<"\n"; test_cases ++; continue;}
		if(maxLen>2)
			cout<<"Case #"<<test_cases+1<<": "<<maxLen<<"\n";
		else
			cout<<"Case #"<<test_cases+1<<": "<<2<<"\n";

		test_cases++;
	}
	return 0;
}