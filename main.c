#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int basamaksayisibul(int sayi){
    int basamak=0;
    if(sayi>=0){
        do{
            basamak++;
            sayi=sayi/10; // 954/10=95.4

        }while(sayi>0);
    }
    return basamak;
}
int tersecevir(int sayi){
    int sayibasamak=basamaksayisibul(sayi);
    int dizi[sayibasamak];
    int dizidoldurma=0;

    do{
        dizidoldurma++;
        dizi[dizidoldurma-1]= sayi % 10;
        sayi=sayi/10;
    }while(sayi>0);

    float sayinintersi=0;

    for(int i=0;i<sayibasamak;i++){
        sayinintersi = sayinintersi + dizi[i]*pow(10,sayibasamak-1-i);
    }
    return sayinintersi;

}
int main()
{
    setlocale(LC_ALL,"Turkish");
    int sayi;
    printf("Lütfen basamak sayýsý ve tersini bulmak istediin sayýyý giy");
    scanf("%d",&sayi);

    printf("Sayýnýn basamak sayýsý: %d\n",basamaksayisibul(sayi));
    printf("Sayýnýn tersi: %d\n",tersecevir(sayi));


    return 0;
}
