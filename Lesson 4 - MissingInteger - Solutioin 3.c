/* ● MissingInteger
Find the smallest positive integer that does not occur in a given sequence. */

int cmp(const void* a, const void* b);

int solution(int A[], int N) {
    unsigned int i;
    int min = 1;
    qsort(A, N, sizeof(int), cmp);
    for (i = 0; i < N; i++) {
        if (A[i] == min) {
            min++;            
        }else if (A[i] > min) {
            return min;
        }
    }
    return min;
}

int cmp(const void* a, const void* b){
    return (*(int*)a-*(int*)b);
}
