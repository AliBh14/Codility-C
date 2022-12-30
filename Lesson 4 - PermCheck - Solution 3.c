/* ● PermCheck
Check whether array A is a permutation. */

int cmpfunc (const void * a, const void * b);

int solution(int A[], int N) {
	unsigned int i;
    if(N == 0){
        return 0;
    }
    qsort(A, N, sizeof(int), cmpfunc);
    for (i = 0; i < N; i++) {
        if(A[i] != (i+1)){
            return 0;
        }
    }
    return 1;
}

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
