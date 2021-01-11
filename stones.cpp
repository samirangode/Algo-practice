//#include <string>
#include <bits/stdc++.h> 
using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	int n;
	string str ="";
	int count = 0;
	cin >> n;
	cin>>str;
	//cout<<str[0]<<"\n";
	stack<char> check;
	for(int i=0;i<str.length();i++){
		check.push(str.at(i));
	}
	stack<char> check2;
	check2.push(check.top());
	check.pop();
	while(!check.empty()){
		if(check2.top()==check.top()){
			check.pop();
			count++;
		}
		else if(check2.top()!=check.top()){
			check2.push(check.top());
			check.pop();
		}
	}
	cout<<count;
 
	return 0;
}