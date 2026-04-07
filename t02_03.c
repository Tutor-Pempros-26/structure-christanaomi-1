// 12S25041 - Christa Naomi Silalahi

#include <stdio.h>

int main() {
    char op;
    int num, count = 0;
    int result;

    scanf(" %c", &op);

    if (op == '+') result = 0;
    else if (op == '-') result = 0;
    else if (op == '*') result = 1;
    else return 0;

    while (1) {
        if (scanf("%d", &num) != 1) break;
        if (num == -1) {
            printf("0\n");
            break;
        }
        count++;
        if (op == '+') result = result + num;
        else if (op == '-') result = result - num;
        else if (op == '*') result = result * num;
        printf("%d\n", result);
        if (count >= 5) break;
    }

    return 0;
}
