#include <bits/stdc++.h>
using namespace std;

void dfs(TreeNode* A, int& max);

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };



int maxPathSum(TreeNode* A) {

	int max = -1000;
    int sum = 0;
    dfs(A,max);
    return max;
}

void dfs(TreeNode* A, int& max, int& sum){
	// stack<TreeNode*> s;
	// s.push(*A.left);
	// s.push(*A.right);

	// while(!s.empty()){
	// 	Treenode* temp =  s.top();
	// 	dfs(A, temp, sum);
	// 	if(*A.val>0){
	// 		sum += *A.val;
	// 	}
	// 	max = max(sum,max);
	// 	if(*A.val<0){
	// 		sum=0;
	// 	}
	// 	s.pop();
	// }
	sum+= *A.val;
	max = max(max, sum);
	
	if(*A.left != NULL) dfs(*A.left, max, sum);


	if(*A.right != NULL) dfs(*A.right, max, sum);

	sum -= *A.val;
	return;

	// this is wrong refer the  answer I wrote on interviewbit for the correct answer
}

int main(){

}