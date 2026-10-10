#include <stdio.h>
#include <string.h>

int main() {
    char nama[100], nim[50], kelas_paralel[100], tempat_tanggal_lahir[100], alamat[100], hobby[100], no_hp[50];

    printf("Nama                  : ");
    fgets(nama, sizeof(nama), stdin);
    nama[strcspn(nama, "\n")] = 0;

    printf("NIM                   : ");
    fgets(nim, sizeof(nim), stdin);
    nim[strcspn(nim, "\n")] = 0;

    printf("Kelas Paralel         : ");
    fgets(kelas_paralel, sizeof(kelas_paralel), stdin);
    kelas_paralel[strcspn(kelas_paralel, "\n")] = 0;

    printf("Tempat/Tanggal Lahir  : ");
    fgets(tempat_tanggal_lahir, sizeof(tempat_tanggal_lahir), stdin);
    tempat_tanggal_lahir[strcspn(tempat_tanggal_lahir, "\n")] = 0;

    printf("Alamat                : ");
    fgets(alamat, sizeof(alamat), stdin);
    alamat[strcspn(alamat, "\n")] = 0;

    printf("Hobby                 : ");
    fgets(hobby, sizeof(hobby), stdin);
    hobby[strcspn(hobby, "\n")] = 0;

    printf("No. HP                : ");
    fgets(no_hp, sizeof(no_hp), stdin);
    no_hp[strcspn(no_hp, "\n")] = 0;

    printf("\n--- Output ---\n");
    printf("Nama                  : %s\n", nama);
    printf("NIM                   : %s\n", nim);
    printf("Kelas Paralel         : %s\n", kelas_paralel);
    printf("Tempat/Tanggal Lahir  : %s\n", tempat_tanggal_lahir);
    printf("Alamat                : %s\n", alamat);
    printf("Hobby                 : %s\n", hobby);
    printf("No. HP                : %s\n", no_hp);

    return 0;
}