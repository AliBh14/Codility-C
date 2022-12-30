/* ● Triangle
Determine whether a triangle can be built from a given set of edges. */

int cmpfunc (const void * a, const void * b); 

int solution(int A[], int N) {
    if(N < 3){
        return 0;
    }
    unsigned int i;
    long int* B;
    B = (long int*)calloc(N, sizeof(long int));
    qsort(A, N, sizeof(int), cmpfunc);
    for (i = 0; i < N; i++) {
        B[i] = A[i];
    }
    for(i = 0; i < N-2; i++){
        if(B[i] > B[i+2] - B[i+1]){
            return 1;
        }
    }
    return 0;
}

int cmpfunc(const void* a, const void* b)
{
  int val_a = *(const int*) a;
  int val_b = *(const int*) b;
  return (val_a > val_b) - (val_a < val_b);
}
