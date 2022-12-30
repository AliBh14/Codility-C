/* ● MaxProductOfThree
Maximize A[P] * A[Q] * A[R] for any triplet (P, Q, R). */

int cmpfunc (const void * a, const void * b);

int solution(int A[], int N) {
    qsort(A, N, sizeof(int), cmpfunc);
    if (A[0]*A[1]*A[N-1] > A[N-1]*A[N-2]*A[N-3]) {
        return A[0]*A[1]*A[N-1];
    }else {
        return A[N-1]*A[N-2]*A[N-3];
    }
}

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
