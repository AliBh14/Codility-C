/* ● TapeEquilibrium
Minimize the value |(A[0] + ... + A[P-1]) - (A[P] + ... + A[N-1])|. */

int solution(int A[], int N) {
    unsigned int i;
    unsigned int min_diff = 2147483647;
    int sum[N], tmp = 0;
    if(N == 0){
        return 0;
    }
    if(N == 1){
        return abs(A[0]);
    }
    if(N == 2){
        return abs(A[1]-A[0]);
    }
    for(i = 0; i < N; i++){
        tmp += A[i];
        sum[i] = tmp;
    }
    for(i = 0; i < N-1; i++){
        if(min_diff > abs(sum[i] - (sum[N-1]-sum[i]))){
            min_diff = abs(sum[i] - (sum[N-1]-sum[i]));
        }
    }
    return min_diff;
}
