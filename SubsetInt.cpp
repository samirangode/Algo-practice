#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > subsets(vector<int> &A);
void subsetsHelper(vector<int> &A, vector<vector<int> > &chosen, vector<int> &temp);







vector<vector<int> > subsets(vector<int> &A) {

    vector<vector<int> > chosen;
    vector<int> temp;
    subsetsHelper(A, chosen, temp);
    return chosen;
    
}

void subsetsHelper(vector<int> &A, vector<vector<int> > &chosen, vector<int> &temp){
    
    if(A.empty()){
    	chosen.push_back(temp);
    	for (int i = 0; i < temp.size(); ++i)
    	{
    		cout<< temp[i];
    	}
    		/* code */
    	cout<<"\n";
    	return;    	
    }

    else{
    	int t = A[A.size()-1];
    	A.pop_back();
    	
    	//added while exploring
    	temp.push_back(t);
    	subsetsHelper(A,chosen,temp);

    	//removed while exploring
    	temp.pop_back();
    	subsetsHelper(A,chosen,temp);

    	A.push_back(t);
    }
}

int main(int argc, char const *argv[])
{
	std::vector<int> v{1,2,3};
	subsets(v);

	return 0;
}