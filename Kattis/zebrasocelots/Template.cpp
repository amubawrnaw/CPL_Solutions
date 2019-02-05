#include<stdio.h>

using namespace std;

long long pow(int base, int exp) {
	long long prod = 1;
	for (int i = 0; i < exp; i++) {
		prod *= base;
	}
	return prod;
}

int
main() {
	int t;
	scanf("%d", &t);
	long long ans = 0;
	for (int i = 0; i < t; i++) {
		getchar();
		char ch;
		scanf("%c", &ch);
		if (ch == 'O') {
			ans += pow(2, t - i - 1); 
		}
	}
	printf("%lld\n", ans);

	return 0;

}