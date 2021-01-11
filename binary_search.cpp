#include <bits/stdc++.h>
using namespace std;


int binarySearch(vector<int> v, int key, int start, int end){
	if(end>=start){
		int mid = start + (end - start)/2;

		if(v[mid]==key) return mid;
		else if(key<v[mid]){
			return binarySearch(v, key, start, mid-1);
		}
		else if(key>v[mid]){
			return binarySearch(v,key,mid+1,end);
		}
	}

	return -1;
}


void diceHelper(int dice, vector<int> &chosen){
	if(dice == 0){
		cout<<chosen;
	}
	else{
		for(int i = 1; i<6; i++){
			chosen.add(i);

			diceHelper(dice-1, chosen);

			chosen.remove(chosen.size()-1);
		}
	}


}


void diceroll(int dice){
	vector<int> chosen;
	diceHelper(dice, chosen);
}


int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}

