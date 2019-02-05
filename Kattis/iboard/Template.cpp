#include <bits/stdc++.h>

using namespace std;

int
main() {
	string line;
	while (getline(cin, line)) {
		int zPressed = false;
		int oPressed = false;
		for (int i = 0; i < line.length(); i++) {
			int ch = line[i];
			int ones = 0;
			int zeroes = 0;
			for (int j = 0; j < 7; j++) {
				if ((ch & (1 << j)) == 0) zeroes++;
				else ones++;
			}
			if (zeroes % 2) zPressed = !zPressed;
			if (ones % 2) oPressed = !oPressed;
		}
		if (zPressed || oPressed) {
			printf("trapped\n");
		} else {
			printf("free\n");
		}
	}	

	return 0;
}