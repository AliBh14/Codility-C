/* ● OddOccurrencesInArray
Find value that occurs in odd number of elements. */

int cmpfunc (const void * a, const void * b);

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    unsigned int i;
	if(N == 1){
		return A[0];
	}
    qsort(A, N, sizeof(int), cmpfunc);
    for(i = 0; i < N; i = i+2){
        if(A[i] != A[i+1]){
            return A[i];
        }
    }
}

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
