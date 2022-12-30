/* ● CountDiv
Compute number of integers divisible by k in range [a..b]. */

int solution(int A, int B, int K) {
    if(A%K != 0) A += (K - A%K);
    B -= B%K;
    return (B-A)/K + 1; 
}
