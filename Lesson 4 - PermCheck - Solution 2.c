/* ● PermCheck
Check whether array A is a permutation. */

int solution(int A[], int N) {
    unsigned int i, result = 0;
    for (i = 0; i < N; i++) {
        result ^= (i+1) ^ A[i];
    }
    return !result;
}
