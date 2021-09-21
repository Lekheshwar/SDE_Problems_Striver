#include<bits/stdc++.h>
using namespace std;


void pre_in_post(TreeNode* root) {

	vector<int> pre, in, post;

	stack<pair<TreeNode*, int>> st;

	st.push({root, 1});
	// 1 -> Preorder, 2 -> Inorder, 3 -> Postorder

	while (!st.empty()) {
		auto curr = st.top();
		st.pop();

		if (curr.second == 1) {
			pre.push_back(curr.first -> val);
			curr.second++;
			st.push(curr);

			if (curr.first -> left) {
				st.push({curr.first -> left, 1});
			}
		}

		else if (curr.second == 2) {
			in.push_back(it.first -> val);
			curr.second++;
			st.push(curr);

			if (curr.first -> right) {
				st.push({curr.second -> second, 1});
			}
		}

		else {
			post.push_back(curr.first -> first);
		}
	}
}


int main() {

}