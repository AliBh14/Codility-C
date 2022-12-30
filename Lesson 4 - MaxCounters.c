/* ● MaxCounters
Calculate the values of counters after applying all alternating operations: increase counter by 1; set value of all counters to current maximum. */

struct Results solution(int N, int A[], int M) {
    struct Results result;
    unsigned int i, max = 0, current_max = 0;
    int* B;
    B = (int*)calloc(N, sizeof(int));

    for (i = 0; i < M; i++) {
        if (A[i] <= N) {
            if(B[A[i]-1] < max){
                B[A[i]-1] = max;
            }
            B[A[i]-1] += 1;
            if (current_max < B[A[i]-1]) {
                current_max = B[A[i]-1];
            }
        }else {
            max = current_max;
        }
    }

    for (i = 0; i < N; i++) {
        if (B[i] < max) {
            B[i] = max;
        }
    }
    
    result.C = B;
    result.L = N;
    return result;
}
