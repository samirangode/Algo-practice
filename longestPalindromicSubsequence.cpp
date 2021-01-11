#include <bits/stdc++.h>
using namespace std;

int solve(string A) {
	vector<vector<int> > lenPanlindrome(A.length(), vector<int>(A.length(),0));

/*	for (int i = 0; i < A.length()-1; ++i)
	{
		for(int j = 0; j<A.length()-1; j++){
			lenPanlindrome[i][j] = 0;
		}
	
	}
*/


	for(int j = 0; j<A.length(); j++){
		lenPanlindrome[j][j] = 1;
		if( (j<(A.length()-1)) && (A.at(j)==A.at(j+1)))
			lenPanlindrome[j][j+1] = 2;
		else if( j<(A.length()-1) && (A.at(j)!=A.at(j+1)) )
			lenPanlindrome[j][j+1] = 1;
	   
	}

//	return lenPanlindrome[A.length()-1][A.length()-1];

	for (int i = 2; i <=A.length()-1; ++i)
		for(int j = 0;j<=A.length()-1-i; j++ ){
			if(A.at(j)==A.at(j+i)){
				lenPanlindrome[j][j+i]=lenPanlindrome[j+1][j+i-1]+2;
			}
			else{
				lenPanlindrome[j][j+i] = max(lenPanlindrome[j][j+i-1], lenPanlindrome[j+1][j+i]);
			}
		}

	/*for(int i=0;i<A.length();i++){
		for(int j =0; j<A.length();j++){
			cout<<lenPanlindrome[i][j];
		}
		cout<<"\n";
	}
*/
	return lenPanlindrome[0][A.length()-1];

}

/*
bool checkPalindrome(string s){
	int length = s.length();
	for(int i =0; i<length/2;i++){
		if(s.at(i)!=s.at(length-1-i))
			return false;
	}
	return true;
}

*/


int main(){
	string a;
	cin >> a;
	int len = solve(a);
	//int len = a.length();
	cout<<len<<"\n";

}