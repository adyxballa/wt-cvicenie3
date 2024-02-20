#include <stdio.h>

struct myStr{
    int mojeCislo;
    char mojZnak;
};
    void updateStr(struct myStr mojaStruktura){
    mojaStruktura.mojeCislo = 11;
    mojaStruktura.mojZnak ='c';
    }
    void lepsiUpdateStr(struct myStr *mojaStruktura){
        mojaStruktura->mojeCislo = 12;
        mojaStruktura->mojZnak ='d';
    }

int main() {

    int cislo;
    int cislo_p;



    cislo=8;
    cislo_p=&cislo;

    printf("Cislo je: %d\n", cislo);
    printf("Adresa je: %p\n", cislo_p);
    printf("Hodnota za adresou je: %d\n", cislo_p);

    struct myStr mojaStruktura;
    mojaStruktura.mojeCislo = 7;
    mojaStruktura.mojZnak = 'a';

    printf("Cislo je: %d a znak %c\n", mojaStruktura.mojeCislo, mojaStruktura.mojZnak);

    mojaStruktura.mojeCislo = 9;
    mojaStruktura.mojZnak = 'b';

    printf("Cislo je: %d a znak %c\n", mojaStruktura.mojeCislo, mojaStruktura.mojZnak);

   updateStr(mojaStruktura);
    printf("Cislo je: %d a znak %c\n", mojaStruktura.mojeCislo, mojaStruktura.mojZnak);

    lepsiUpdateStr(&mojaStruktura);
    printf("Cislo je: %d a znak %c\n", mojaStruktura.mojeCislo, mojaStruktura.mojZnak);
}
