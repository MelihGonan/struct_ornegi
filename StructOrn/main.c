#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Struct olusturulur ve ogrenci bilgilerinin degiskenleri tanimlanir.
struct ogrenci{         
	
	char ad[10];
	char soyad[10];
	long int OkulNo;
	char bolum[20];
	int sinif;
	char il[15];
	char ilce[15];
	char mahalle[15];
	char sokak[15];
};

int main(int argc, char *argv[]) {
	int islem;       //Dongu ve kosul kontrol icin degiskenler tanimlanir.
	int devam;
	
	//ogrenci bilgileri girilir.
	struct ogrenci ogr1={"Mirac","Yuce",1220505001,"Felsefe",3,"Trabzon","Caykara","Egridere","Findikli sokak"};
	struct ogrenci ogr2={"Necmi","Cumen",1220505002,"Hukuk",4,"Ankara","Yenimahalle","Bestepe","33.sokak"};
	struct ogrenci ogr3={"Sait","Ulusoy",1220505003,"Maliye",1,"Erzurum","Aziziye","Selcuklu","13.sokak"};
	struct ogrenci ogr4={"Emre","Yildiz",1220505004,"Tarih",2,"Sivas","Zara","Sehitler","Bayrak sokak"};
	struct ogrenci ogr5={"Ata","Abanoz",1220505005,"Mimarlik",1,"Canakkale","Ezine","Camikebir","Sel sokak"};
	
	printf("1-)%s %s \n2-)%s %s \n3-)%s %s \n4-)%s %s \n5-)%s %s",
	        ogr1.ad,ogr1.soyad,ogr2.ad,ogr2.soyad,ogr3.ad,ogr3.soyad,ogr4.ad,ogr4.soyad,ogr5.ad,ogr5.soyad);
	        
	//Istenen ogrenci bilgilerini almak icin switch-case kullanilir. islemi tekrar etmek icin do-while dongusu kullanilir.
	do{
	printf("\nbir ogrenci seciniz.\n");
	scanf("%d",&islem);
	
	switch(islem){
		
		case 1:
		printf("adi soyadi: %s %s \nokul numarasi: %d \nbolumu: %s \nsinifi: %d.sinif \nadresi: %s mahallesi %s %s/%s",
		    ogr1.ad,ogr1.soyad,ogr1.OkulNo,ogr1.bolum,ogr1.sinif,ogr1.mahalle,ogr1.sokak,ogr1.ilce,ogr1.il);
		    break;
		case 2:
			printf("\nadi soyadi: %s %s \nokul numarasi: %d \nbolumu: %s \nsinifi: %d.sinif \nadresi: %s mahallesi %s %s/%s",
		    ogr2.ad,ogr2.soyad,ogr2.OkulNo,ogr2.bolum,ogr2.sinif,ogr2.mahalle,ogr2.sokak,ogr2.ilce,ogr2.il);
		    break;
		case 3:
			printf("\nadi soyadi: %s %s \nokul numarasi: %d \nbolumu: %s \nsinifi: %d.sinif \nadresi: %s mahallesi %s %s/%s",
		    ogr3.ad,ogr3.soyad,ogr3.OkulNo,ogr3.bolum,ogr3.sinif,ogr3.mahalle,ogr3.sokak,ogr3.ilce,ogr3.il);
			break;		
		case 4:
			printf("\nadi soyadi: %s %s \nokul numarasi: %d \nbolumu: %s \nsinifi: %d.sinif \nadresi: %s mahallesi %s %s/%s",
		    ogr4.ad,ogr4.soyad,ogr4.OkulNo,ogr4.bolum,ogr4.sinif,ogr4.mahalle,ogr4.sokak,ogr4.ilce,ogr4.il);
		    break;
		case 5:
			printf("\nadi soyadi: %s %s \nokul numarasi: %d \nbolumu: %s \nsinifi: %d.sinif \nadresi: %s mahallesi %s %s/%s",
		    ogr5.ad,ogr5.soyad,ogr5.OkulNo,ogr5.bolum,ogr5.sinif,ogr5.mahalle,ogr5.sokak,ogr5.ilce,ogr5.il);
		    break;
	}
	
	printf("\n\nogrencileri gormek icin 1, programi kapatmak icin 2 yaz.\n");
	scanf("%d",&devam);
	
    } while(devam==1);
	
	return 0;
}
