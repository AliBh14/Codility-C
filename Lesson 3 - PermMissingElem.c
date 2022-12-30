/* ● PermMissingElem
Find the missing element in a given permutation. */

int compare(const void* a, const void *b);

int solution(int A[], int N) {
    unsigned int i;
    qsort(A, N, sizeof(int), compare);
    if(A[0] != 1){
        return 1;
    }
    if(A[N-1] != (N+1)){
        return (N+1);
    }
    for(i = 0; i < N; i++){
        if(A[i+1] != (A[i]+1)){
            return A[i]+1;
        }
    }
}

int compare(const void* a, const void *b){
    return(*(int*)a - *(int*)b);
}
