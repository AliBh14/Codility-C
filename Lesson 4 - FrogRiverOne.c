/* ● FrogRiverOne
Find the earliest time when a frog can jump to the other side of a river. */

int solution(int X, int A[], int N) {
    unsigned int i, num = 0;
    int* B;
    B = (int*)calloc(X, sizeof(int));
    for(i = 0; i < N; i++){
        if(B[A[i]-1] == 0){
            num++;
            B[A[i]-1] = 1;
        }
        if(num == X){
            return i;
        }
    }
    return -1;
}
