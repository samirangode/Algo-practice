#include <bits/stdc++.h>
using namespace std;


vector<vector<int> > permute(vector<int> &A);
void permuteHelper(vector<int > &A, vector<int> &chosen, vector<vector<int> > &final,int j);

vector<vector<int> > permute(vector<int> &A) {
    vector<vector<int> > final;
    vector<int> chosen;
    int j = A.size();
    permuteHelper(A,chosen, final,j);
    sort(final.begin(), final.end());
    return final;
}

void permuteHelper(vector<int > &A, vector<int> &chosen, vector<vector<int> > &final, int j){
    if(j==0){
        final.push_back(chosen);
       	
       	for(int i=0; i<chosen.size();i++){
       		cout<<chosen[i];
       	 	// chosen.erase(chosen.begin() + i);
       	}
       	cout<<"\n";
        return;
    }
    else{
        for(int i=0; i<A.size(); i++){
        	if(find(chosen.begin(),chosen.end(),A[A.size()-1-i])==chosen.end()){
            int temp = A[A.size()-1-i];
            chosen.push_back(temp);
            //A.pop_back();
            //cout<<temp;
            //cout<<temp;
            permuteHelper(A,chosen, final, j-1);

            chosen.pop_back();
            //A.push_back(temp);
        	}
        }
    }
}





int main(){
	vector<vector<int> > test;
	vector<int> v{1,2,3};
	test = permute(v);
}