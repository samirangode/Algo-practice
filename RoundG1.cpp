#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int T;
	cin>>T;
	int test_cases=0;
	while(test_cases<T){
		string s;
		cin>>s;
		string kick = "kick";
		string start = "start";
		vector<int> kickPosition;
		vector<int> startPosition;
		for(int i=0; i < s.length(); i++){
			if(s.substr(i,kick.length())==kick){
				kickPosition.push_back(i);
			}
			if(s.substr(i,start.length())==start){
				startPosition.push_back(i);
			}
		}
		int answer = 0;
		for(int i = 0; i<kickPosition.size(); i++){
			int val = kickPosition[i];
			int min = 0;
			int mid = 0;
			int max = kickPosition.size() - 1;
			while(min<max){
				mid = (min + max)/2
				if(val<kickPosition[mid]){
					
				}
			} 
		}
		

		cout<<"Case #"<<test_cases+1<<": "<<answer<<"\n";

		test_cases++;
	}
	return 0;
}