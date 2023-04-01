/* ● Nesting
Determine whether a given string of parentheses (single type) is properly nested. */

int solution(char *S) {
    unsigned int i, len = strlen(S);
    int top = -1;

    if (len == 0) {
        return 1;
    }

    if (S[0] == ')' || S[len-1] == '(' || len%2 != 0) {
        return 0;
    }
    
    char* stack;
    stack = (char*)calloc(len, sizeof(char));

    for (i = 0; i < len; i++) {
        if (S[i] == ')') {
            if (top == -1) {
                return 0;
            }
            if (stack[top] == '(') {
                top--;
            }else if (stack[top] == ')') {
                return 0;
            }
        }else if (S[i] == '(') {
            top++;
            stack[top] = '(';
        }
    }
    return top == -1;
}
