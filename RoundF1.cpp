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
		queue<int> q;
		vector<int> v;
		queue<int> num;
		int val = 0;
		int X;
		cin>>X;	
		for (int i = 0; i < N; ++i)
		{	cin>>val;
			q.push(val);
			num.push(i+1);
			/* code */
		}
		// for (int i = 0; i < N; ++i)
		// {	cin>>val;
		// 	v.push_back(val);
		// 	/* code */
		// }
		int ele = 0;
		int peep = 0;
		int j = 0 ;
		while(!q.empty())
		{
			ele = q.front();
			q.pop();
			//cout<<ele<<" ";
			peep = num.front();
			num.pop();
			if(ele<=X) v.push_back(peep);
			else{
				q.push(ele-X);
				num.push(peep);
			}
			/* code */
			j++;
		}


		cout<<"Case #"<<test_cases+1<<": ";
		for (int i = 0; i < N; ++i)
		{
		 	cout<<v[i]<<" "; 
		 	/* code */
		} 
		cout<<"\n";
		// cout<<j<<endl;
		test_cases++;
	}
	return 0;
}