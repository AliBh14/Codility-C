/* ● StoneWall
Cover "Manhattan skyline" using the minimum number of rectangles. */

int solution(int H[], int N) {
    unsigned int i, ctr = 0;
    int top = -1;
    int* stack;
    stack = (int*)calloc(N, sizeof(int));

    for (i = 0; i < N; i++) {
        while (H[i] < stack[top]) {
            top--;
        }
        if (top == -1 || H[i] > stack[top]) {
            top++;
            stack[top] = H[i];
            ctr++;
        }
    }
    return ctr;
}
