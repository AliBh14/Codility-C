/* ● GenomicRangeQuery
Find the minimal nucleotide from a range of sequence DNA. */

#include <string.h>

int char_to_num(char c);

struct Results solution(char *S, int P[], int Q[], int M) {
    struct Results result;
    unsigned int i, j;
    unsigned char tmp = 0;
    char nucleotides[] = "ACGT";
    unsigned int n = strlen(S);
    unsigned char nuc;
    int* a;
    a = (int*)calloc(n*4, sizeof(int));
    
    for(i = 0; i < 4; i++){
        for(j = 0; j < n; j++){
            switch (i){
                case 0:
                    nuc = 'A';
                    break;
                case 1:
                    nuc = 'C';
                    break;
                case 2:
                    nuc = 'G';
                    break;
                case 3:
                    nuc = 'T';
                    break;
            }
            if(j == 0){
                if(S[0] == nuc){
                    a[n*i] = 1;
                }else{
                    a[n*i] = 0;
                }
                continue;
            }
            if(S[j] == nuc){
                a[(n*i)+j] = 1;
            }
            a[(n*i)+j] += a[(n*i)+(j-1)];
        }
    }

    int* A;
    A = (int*)calloc(M, sizeof(int)); 
    for(i = 0; i < M; i++){
            if(P[i] != Q[i]){
                for(j = 0; j < 4; j++){
                    if((a[P[i]+n*j] < a[Q[i]+n*j]) || (S[P[i]] == nucleotides[j])){
                        tmp = nucleotides[j];
                        break;
                    }
                }
            }else{
                tmp = S[P[i]];
            }
        A[i] = char_to_num(tmp);
    }

    result.A = A;
    result.M = M;
    return result;
}

int char_to_num(char c){
    switch (c) {
        case 'A':
            return 1;
        case 'C':
            return 2;
        case 'G':
            return 3;
        case 'T':
            return 4;
    }
    return 0;
}
