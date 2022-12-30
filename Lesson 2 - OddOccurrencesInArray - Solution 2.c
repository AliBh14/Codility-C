/* ● OddOccurrencesInArray
Find value that occurs in odd number of elements. */

int solution(int A[], int N) {
    unsigned int i, odd_occ = 0;
    for (i = 0; i < N; i++) {
        odd_occ ^= A[i];
    }
    return odd_occ;
}
