#include <algorithm>
int solve(int N, int D[100000]) {
	std::sort(std::begin(D), std::end(D));
    return D[N/2];
}