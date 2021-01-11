#include <bits/stdc++.h>
using namespace std;


void sublists(std::vector<string> &v);
void sublistsHelper(std::vector<string> &v, std::vector<string> &chosen);


void sublists(vector<string> &v){
	std::vector<string> chosen;
	sublistsHelper(v,chosen);
}

void sublistsHelper(std::vector<string> &v, std::vector<string> &chosen){
	if(v.isEmpty()){
		for(int i=0; i<chosen.size();i++)
			std::cout << result[i];
		cout<<"\n";
		return;
	}
	else{
			string str = v[v.size()-1]
			v.pop_back();

			//choosin "Sarah", so "Jane" and "Perry" still to be chosen
			chosen.push_back(str);
			sublistsHelper(v,chosen);

			chosen.pop_back();
			sublistsHelper(v, chosen);

			v.push_back(str);
		
	}

}





int main(){

}