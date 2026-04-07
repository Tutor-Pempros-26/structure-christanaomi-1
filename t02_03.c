// 12S25041 - Christa Naomi Silalahi

#include <stdio.h>

int main() {
    char operator;
    int angka, hitung = 0;
    int hasil;

    scanf(" %c", &operator);

    if (operator == '+') hasil = 0;
    else if (operator == '-') hasil = 0;
    else if (operator == '*') hasil = 1;
    else {
        printf("Operator tidak valid\n");
        return 0;
    }

    while (1) {
        scanf("%d", &angka);
        hitung++;

        if (angka == -1 || hitung > 5) {
            printf("%c\n", operator);
            printf("%d\n", hasil);
            break;
        }

        printf("%c\n", operator);
        printf("%d\n", angka);

        if (operator == '+') hasil = hasil + angka;
        else if (operator == '-') hasil = hasil - angka;
        else if (operator == '*') hasil = hasil * angka;

        printf("%d\n", hasil);
    }

    return 0;
}

