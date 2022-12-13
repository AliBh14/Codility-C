/* ● CyclicRotation
Rotate an array to the right by a given number of steps. */

struct Results solution(int A[], int N, int K) {
    struct Results result;
    unsigned int i;
    int tmp_A[N];
    if(N != 0){
	    K %= N;
    }
    for(i = 0; i < N; i++){
        tmp_A[i] = A[((i+N-K)%N)];
    }
    for(i = 0; i < N; i++){
       A[i] = tmp_A[i];
    }
    result.A = A;
    result.N = N;
    return result;
}
