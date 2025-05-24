#include <stdio.h>

int main() {
    float berat, tinggi, bmi;
    char ulang;

    printf("PROGRAM KALKULATOR BMI PROMDAS\n");

    do {
        printf("\nMasukkan berat badan (kg):");
        scanf("%f", &berat);

        printf("Masukkan tinggi badan (cm):");
        scanf("%f", &tinggi);

        float tinggi_m;
        tinggi_m = tinggi / 100;
        
        bmi = berat / (tinggi_m * tinggi_m);
       
        printf("\nBMI Anda adalah: %.2f\n", bmi);

        if (bmi < 18.5) {
            printf("Kategori: Underweight\n");
            printf("Ayo semangat makan lagi, biar badannya kekar!\n");
        } 
        else if (bmi >= 18.5 && bmi < 25) {
            printf("Kategori: Normal\n");
            printf("Mantapp, BMI kamu ideal, Pertahankan terus ya!\n");
        } 
        else if (bmi >= 25 && bmi < 30) {
            printf("Kategori: Overweight\n");
            printf("Gapapa semuanya belum terlambat cees, tapi lu jangan kalap makan mulu yee, olahraga kali-kali mah!\n");
        } 
        else {
            printf("Kategori: Obesitas\n");
            printf("LAHH UDAH PARAH INI MAHH, LANGSUNG MARATHON 100 KM DAHH LU!\n");
        }

        printf("\nMau cek lagi? (y/n): ");
        scanf(" %c", &ulang);

    } while (ulang == 'y' || ulang == 'Y');

    printf("HATUR NUHUN sudah mengecek BMI anda pada program ini, Stay Healty and Stay Alive!\n");

    return 0;
}