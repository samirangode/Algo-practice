#include <bits/stdc++.h>
using namespace std;

void rollDice(int die);

void rollDiceHelper(vector<int> &v, int die);

void rollDice(int die){
	std::vector<int> v;
	rollDiceHelper(v,die);
}

void rollDiceHelper(std::vector<int> &v, int die){
	if(die==0){
		for(int i:v)
			cout<<i;
		cout<<"\n";
		return;
	}
	else{
		for(int i =1; i<7; i++){
			v.push_back(i);
			rollDiceHelper(v, die-1);
			v.pop_back();
		}
	}
}


int main(int argc, char const *argv[])
{
	/* code */
	int die;
	cin>>die;
	rollDice(die);

	return 0;
}