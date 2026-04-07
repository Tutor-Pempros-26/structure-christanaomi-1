// 12S25041 - Christa Naomi Silalahi


#include <stdio.h>

int main() {
    int jumlah;
    double harga, total, diskon = 0;

    scanf("%d", &jumlah);
    scanf("%lf", &harga);

    total = jumlah * harga;

    if (total > 500000) {
        diskon = 0.15 * total;
    } else if (total >= 100000) {
        diskon = 0.05 * total;
    } else if (total > 50000) {
        diskon = 0.05 * total;
    }

    if (diskon == 0) {
        printf("---\n");
        printf("%.2lf\n", total);
    } else {
        printf("%.2lf\n", diskon);
        printf("%.2lf\n", total - diskon);
    }

    return 0;
}


