/* ● BinaryGap
Find longest sequence of zeros in binary representation of an integer. */

int solution(int N) {
    signed int i, max_length = 0;
    signed int tmp_pos1 = -1, pos1 = 32;
    for(i = 0; i < 32; i++){
        if(((N >> i) & 1) == 1){
            tmp_pos1 = i;
                if(max_length < (tmp_pos1 - pos1 - 1)){
                    max_length = tmp_pos1 - pos1 - 1;
                }
            pos1 = tmp_pos1;  
        }      
    }
    return max_length;
}
