/* ● MissingInteger
Find the smallest positive integer that does not occur in a given sequence. */

int cmp(const void* a, const void* b);

int solution(int A[], int N) {
    unsigned int i, start_index = 0;
	if(N == 1){
        if (A[0] == 1) {
            return 2;
        }else {
            return 1;
        }
    }
    qsort(A, N, sizeof(int), cmp);
    if(A[N-1] < 1){
        return 1;
    }
    for(i = 0; i < N; i++){
        if(A[i] > 0){
            start_index = i;
            break;
        }
    }
    if(A[start_index] > 1){
        return 1;
    }
    for(i = start_index; i < N; i++){
        if(A[i] == A[i+1] || A[i+1]-A[i] == 1){
            continue;
        }else if(A[i+1] > A[i]+1 || i == N-1){
            return A[i]+1;
        }
    }
    return -1;
}

int cmp(const void* a, const void* b){
    return (*(int*)a-*(int*)b);
}
