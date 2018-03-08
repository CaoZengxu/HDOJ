#include<iostream>
using namespace std;
int main() {
	int N, M;
	while (cin >> N >> M && (N != 0 || M != 0)) {
		int mt = 0;
		int start=1, end=0;
		while(end<=M&&start<=M){
			if (mt < M) {
				end++;
				mt += end;
			}
			else if (mt > M) {
				//start++;
				mt -= start++;
			}
			else {
				printf("[%d,%d]\n", start, end);
				end++;
				mt += end;
			}
		}
		cout << endl;
	}
	return 0;
}