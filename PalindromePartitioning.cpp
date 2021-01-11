#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s);
vector<vector<string> > partition(string A);
void partitionHelper(string &A, vector<string> &chosen, vector<vector<string> > &final, int i);

bool checkPalindrome(string s){
	int length = s.length();
	for(int i =0; i<length/2;i++){
		if(s.at(i)!=s.at(length-1-i))
			return false;
	}
	return true;
}

vector<vector<string> > partition(string A){
	// vector<string> v;
	// for(int i =0; i<A.length(); i++){
	// 	string s(1,A.at(i));
	// 	v.push_back(s);
	// }
	vector<vector<string> > final;
	vector<string> chosen;
	int i = 0;
	partitionHelper(A, chosen, final, i);
	for(vector<string> s: final){
		for(string j : s){
			cout<<j<<",";
		}
		cout<<"\n";
	}
	return final;
}

void partitionHelper(string &A, vector<string> &chosen, vector<vector<string> > &final, int i){
	if(A.length()==1 || A.length()==0){
		if(A.length()==1)
			chosen.push_back(A);
		for(string s : chosen)
			if(!(checkPalindrome(s)))
				return;
	cout<<"inside base case"<<"\n";		
	final.push_back(chosen);
	return;
	}
	else{	//if(i<A.length()){
	// 		string str = A.substr(0,i+1);
	// 		A.erase(0,i+1);
	// 		cout<<i<<"\n";
	// 		chosen.push_back(str);
	// 		partitionHelper(A,chosen,final, i);
	// 		for(string s: chosen){
	// 			cout<<"after separation"<<" "<<s;
	// 		}
	// 		cout<<i<<"\n";
	// 		chosen.pop_back();
	// 		string B = str + A;
	// 		//A= str + A;
	// 		partitionHelper(B,chosen,final,i+1);
	// 		for(string s: chosen){
	// 			cout<<"after joining"<<" "<<s;
	// 		}
	// 		cout<<i<<"\n";

	// 		//A = str + A;
	// 		}




			/* code */
		
		
	}


}



int main(int argc, char const *argv[])
{
	/* code */
	string s;
	cin>>s;
	partition(s);

	//cout<<true<<endl;
	// cout<<false<<endl;
	
	return 0;
}