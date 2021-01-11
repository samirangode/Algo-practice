#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void permute(string s);
void permuteString(vector<char> &v, vector<char> &result);

void permute(string s){
	vector<char> v;
	for(int i =0; i<s.length(); i++)
		v.push_back(s.at(i));

	vector<char> result;
	permuteString(v,result);

}

void permuteString(vector<char> &v, vector<char> &result){
	if(result.size()==v.size()){
		
		for(int i=0; i<result.size();i++)
			std::cout << result[i];
		cout<<"\n";
		return;
	}

	for(int i =0; i<v.size(); i++){
		result.push_back(v[i]);
		permuteString(v,result);
		result.pop_back()	;
	}

}


int main(int argc, char const *argv[])
{
	/* code */
	permute("SAM");


	return 0;
}