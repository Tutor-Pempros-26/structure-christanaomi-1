// 12S25041 - Christa Naomi Silalahi


#include <stdio.h>

int main() {
    int jumlah_buku;
    double harga_buku, total, potongan = 0;

    scanf("%d", &jumlah_buku);
    scanf("%lf", &harga_buku);

    total = jumlah_buku * harga_buku;

    if (total > 500000) {
        potongan = 0.15 * total;
    } else if (total >= 100000) {
        potongan = 0.10 * total;
    } else if (total > 50000) {
        potongan = 0.05 * total;
    }

    if (potongan == 0) {
        printf("---\n");
        printf("%.2lf\n", total);
    } else {
        printf("%.2lf\n", potongan);
        printf("%.2lf\n", total - potongan);
    }

    return 0;
}

