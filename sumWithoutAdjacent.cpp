#include <bits/stdc++.h>
using namespace std;

int adjacent(vector<vector<int> > &A) {

    int inclusive=0;
    int exclusive=0;
    int maxVal=0;
    for (int j = 0; j < A[0].size(); ++j)
    {
     	maxVal = max(A[0][j],A[1][j]);
     	//cout<<"maxVal: "<<maxVal<<"\n";
     	int temp = inclusive;
     	inclusive = max(incl,exclusive + maxVal);
     	exclusive = temp;
     	//int ans = max(inclusive, exclusive);
     	//cout<<"ans: "<<ans<<"\n";
    }

    return max(inclusive, exclusive);


}

int main(){
	vector<vector<int> > v{	{1}, 
							{2}    };
	vector<vector<int> > vect{	{1, 2, 3, 4},
            					{2, 3, 4, 5} };

    cout<<adjacent(vect)<<"\n";
}