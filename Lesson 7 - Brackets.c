/* ● Brackets
Determine whether a given string of parentheses (multiple types) is properly nested. */

int solution(char *S) {
    unsigned int len = strlen(S), i;
    int top = -1;
    char stack[len];

    for (i = 0; i < len; i++) {
        if (top ==-1 && (S[i] == ')' || S[i] == '}' || S[i] == ']')) {
            return 0;
        }
        switch (S[i]) {
            case '}':
                if (stack[top]  != '{') {
                    return 0;  
                }else {
                    top--;
                }
                break;  
            case ']':
                if (stack[top]  != '[') {
                    return 0;  
                }else {
                    top--;
                }
                break;          
            case ')':
                if (stack[top]  != '(') {
                    return 0;  
                }else {
                    top--;
                }
                break;
            default:
                top++;
	            stack[top] = S[i];
        }
    }
    return top == -1;
}
