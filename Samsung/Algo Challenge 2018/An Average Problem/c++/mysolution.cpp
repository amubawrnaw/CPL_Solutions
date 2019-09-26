int solve(int N, int A[100000]) {
    double avg = 0;
    for(int i=0 ; i < N ; i++) avg+=A[i];
    return avg/N;
}