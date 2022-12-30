/* ● PassingCars
Count the number of passing cars on the road. */

int solution(int A[], int N) {
    unsigned int i, ctr = 0;
    for (i = 1; i < N; i++) {
        A[i] += A[i-1];
    }
    if(A[0] == 0){
        ctr += A[N-1];
    }
    for (i = 1; i < N; i++) {
        if(A[i] - A[i-1] == 0){
            ctr += A[N-1]-A[i];
        }
    }
    if(ctr > 1000000000){
        return -1;
    }else{
        return ctr;
    }
}