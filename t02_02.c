// 12S25041 - Christa Naomi Silalahi


#include <stdio.h>

int main() {
    int level;
    scanf("%d", &level);

    switch(level) {
        case 1:
            printf("makanan pokok\n");
            printf("kamu perlu lauk pauk\n");
            break;
        case 2:
            printf("lauk pauk\n");
            printf("makanan pokok\n");
            printf("kamu perlu sayuran\n");
            break;
        case 3:
            printf("sayuran\n");
            printf("lauk pauk\n");
            printf("makanan pokok\n");
            printf("baik\n");
            break;
        case 4:
            printf("buah\n");
            printf("sayuran\n");
            printf("lauk pauk\n");
            printf("makanan pokok\n");
            printf("sangat baik\n");
            break;
        case 5:
            printf("susu\n");
            printf("buah\n");
            printf("sayuran\n");
            printf("lauk pauk\n");
            printf("makanan pokok\n");
            printf("sempurna\n");
            break;
        default:
            printf("Input tidak valid\n");
    }

    return 0;
}
