#include <bits/stdc++.h>
using namespace std;

int main()
{
	/* code */
	int T;
	cin>>T;
	int test_cases=0;
	while(test_cases<T){
		int N;
		cin>>N;
		vector<int> v;
		int val=0;
		int max=0;
		int recordDays=0;
		for (int i = 0; i < N; ++i)
		{	cin>>val;
			v.push_back(val);
			/* code */
		}
		for (int i = 0; i < N; ++i)
		{
			if(v[i]>max){
				max = v[i];
				if(i==N-1){
					recordDays++;
				}
				else if(v[i]>v[i+1]){
					recordDays++;
				}
			}
			/* code */
		}

		cout<<"Case #"<<test_cases+1<<": "<<recordDays<<"\n";


		test_cases++;
	}

	return 0;
}