#include <stdio.h>
#include <stdlib.h>

    void kayitsil(int A[],int sira,int elemansayisi)
    {
        int i;
        if(sira>=elemansayisi+1)//Sira Eleman Sayisindan fazla olamaz.Olursa silecek eleman olmaz.
        {
            printf("Gecerli bir sira numarasi giriniz.");
        }
        else{
            for(i=sira-1;i<elemansayisi-1;i++)
            {
                A[i]=A[i+1];
            }
            printf("Kayit silindikten sonraki durum\n");
            for(i=0;i<elemansayisi-1;i++)
            {
                printf("%d\n",A[i]);
            }
        }
    }
int main()
{
    /*Bilgisayar tarafindan rastgele uretilen N adet sayi bir dizide tutulmaktadir.
    Dizi icerisinde istenilen bir degerin dizideki sira numarasi girilerek ilgili
    sirada bulunan dizi degerinin silinmesini saglayan C programini fonksiyon kullanarak
    yaziniz.*/
    int n,i ;
    int sirano;
    printf("Kac adet sayi uretilecek? \n");
    scanf("%d",&n);
    int dizi[n];//sayiyi aldiktan sonra tanimla.
    srand(time(0));//Rastgele sayi gelmesi icin;
    for(i=0;i<n;i++)
    {
        dizi[i]=rand()%100;//0'dan 100e kadar rastgele sayi uretiyor.
        printf("%d\n",dizi[i]);
    }
    printf("\nSilinecek degerin sira numarasini giriniz.\n");
    scanf("%d",&sirano);
    kayitsil(dizi,sirano,n);
}
