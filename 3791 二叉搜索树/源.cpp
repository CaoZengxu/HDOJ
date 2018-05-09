#include<iostream>
#include<string>
using namespace std;

void insertTree(int *tree,int node,int loc) {
	if (tree[loc] == -1) {
		tree[loc] = node;
	}else {
		if (tree[loc] < node) {
			insertTree(tree,node, 2 * loc);
		}
		else {
			insertTree(tree,node, 2 * loc+1);

		}
	}
}



int main() {
	
	int n;

	char temp[12];
	int input[12];
	int query[12];
	int treeS[1000];
	int treeQ[1000];
	
	while (cin >> n && n != 0) {

		cin >> temp;
		for (int i = 0; i < 1000; i++) {
			//treeQ[i] = -1;
			treeS[i] = -1;
		}
		int length = strlen(temp);
		for(int i = 0; i < length; i++) {
			input[i] = temp[i] - '0';
		}

		for (int i = 0; i < length; i++) {
			insertTree(treeS,input[i],1);
		}
		
		for (int i = 0; i < n; i++) {
			for (int i = 0; i < 1000; i++) {
				treeQ[i] = -1;
				//treeS[i] = -1;
			}
			cin >> temp;
			bool flag = true;
			for (int i = 0; i < strlen(temp); i++) {
				query[i] = temp[i] - '0';
			}

			for (int i = 0; i < length; i++) {
				insertTree(treeQ, query[i], 1);
			}

			for (int i = 0; i < 1000; i++) {
				if (treeS[i] != treeQ[i]) {
					flag = false;
					break;
				}
			}
			
			

			if (flag)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
	}
	

	return 0;
}