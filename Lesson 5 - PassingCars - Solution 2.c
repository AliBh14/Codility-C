/* ● PassingCars
Count the number of passing cars on the road. */

int solution(int A[], int N) {
    unsigned int i, pairs = 0, east = 0;
    for (i = 0; i < N; i++) {
        if (A[i] == 1) {
            pairs += east;
        }else {
            east++;
        }
    }
    if(pairs <= 1000000000){
        return pairs;
    }else{
        return -1;
    }
}
