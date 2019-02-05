#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	while (scanf("%d", &n), n) {
		int arr[32];
		memset(arr, -1, sizeof arr);
		for (int i = 0; i < n; i++) {
			string cmd;
			int a;
			cin >> cmd >> a;
			if (cmd == "SET") {
				arr[a] = 1;
			} else if (cmd == "CLEAR") {
				arr[a] = 0;
			} else if (cmd == "AND") {
				int b;
				cin >> b;
				if (arr[a] == 0 || arr[b] == 0) {
					arr[a] = 0;
				} else if (arr[a] != -1 && arr[b] != -1) {
					arr[a] = arr[a] && arr[b];
				} else {
					arr[a] = -1;
				}
			} else {
				int b;
				cin >> b;
				if (arr[a] == 1 || arr[b] == 1) {
					arr[a] = 1;
				} else if (arr[a] != -1 && arr[b] != -1) {
					arr[a] = arr[a] || arr[b];
				} else {
					arr[a] = -1;
				}
			}
		}
		for (int i = 31; i >= 0; i--) {
			printf("%c", arr[i] == 1 ? '1' : (arr[i] == 0 ? '0' : '?'));		
		}
		printf("\n");
	}	
	return 0;
}