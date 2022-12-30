/* ● NumberOfDiscIntersections
Compute the number of intersections in a sequence of discs. */

int cmpfunc (const void * a, const void * b);

int solution(int A[], int N) {
    int i, j, ctr = 0;
    int lefts[N], rights[N];
    for(i = 0; i < N; i++){
        lefts[i] = i - A[i];
        if(A[i] <= 2147483647-i){
            rights[i] = i + A[i];
        }else{
            rights[i] = 2147483647;
        }
    }
    qsort(lefts, N, sizeof(int), cmpfunc);
    qsort(rights, N, sizeof(int), cmpfunc);
    for(i = 0; i < N-1; i++){
        for(j = i+1; j < N; j++){
            if((lefts[j] <= rights[i])){
                ctr++;
            }else{
                break;
            }
        }
    }
    if(ctr > 10000000){
        return -1;
    }else{
        return ctr;
    }
}

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
