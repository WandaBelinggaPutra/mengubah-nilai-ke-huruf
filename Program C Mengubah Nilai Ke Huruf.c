#include<stdio.h>
#include<conio.h>

int ubah(int nilai);
int main(void)
{
 int nilai;
 printf("PROGRAM MENGUBAH NILAI KE HURUF\n\n");
 printf("Masukan nilai antara 1 sampai 5 : ");
 scanf("%d",&nilai);
 ubah(nilai);
}
int ubah(int nilai)
{
    switch(nilai)
{
case 5 :
    printf("Nilai huruf : A");break;
case 4 :
    printf("Nilai huruf : B");break;
case 3 :
    printf("Nilai huruf : C");break;
case 2 :
    printf("Nilai huruf : D");break;
case 1 :
    printf("Nilai huruf : E");break;
default :
    printf("Kesalahan dalam memasukan angka");



}
return (nilai);
}










