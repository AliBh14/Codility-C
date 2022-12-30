/* ● Distinct
Compute number of distinct values in an array. */

int cmpfunc (const void * a, const void * b);

int solution(int A[], int N) {
    if(N < 2){
        return N;
    }
    unsigned int i, ctr = 0;
    qsort(A, N, sizeof(int), cmpfunc);
    for(i = 0; i < N-1; i++){
        if(A[i] == A[i+1]){
            ctr++; 
        }
    }
    return N-ctr;
}

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
