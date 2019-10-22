#include <stdio.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include "atm.h"
#include "cover.c"
#include "border.c"

int bankhh();

int bankhh(){
boxFill(10,1,20,3,7);
boxFill(32,1,20,3,2);
boxFill(54,1,20,3,3);
boxFill(76,1,20,3,4);
boxFill(98,1,20,3,5);
boxFill(120,1,20,3,6); 
printf("\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@   @@@@(  &@@   @@@@&  ,@@@@@@        &@@@@@&   .@@@@@*   @@@@,  @@&  *@@@   &@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@   @@@@(  &@@   @@@@&  ,@@@@@@   @@@.  &@@@@  /  %@@@@*    @@@,   @@&  *@,  ,@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@   @@@@(  &@@   @@@@&  ,@@@@@@   @@@   &@@@/  &.  @@@@*  ,  @@*  @@&  *   &@@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@          &@@          ,@@@@@@       .@@@@@  *@@  #@@@*  @   @/  @@&      @@@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@   @@@@(  &@@   @@@@&  ,@@@@@@   @@@(  .@@.        @@@*  @@.  #  @@&   &   @@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@   @@@@(  &@@   @@@@&  ,@@@@@@   @@@&   @&  ,@@@#  *@@*  @@@*    @@&  *@@   &@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@   @@@@(  &@@   @@@@&  ,@@@@@@        ,@@   &@@@@   &@*  @@@@/   @@&  *@@@   &@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n");
return 0;
}
void readPass(char *temp) {
    int key = 0, index = 0;
 
    do {
        key = getch(); 
        switch (key) {
             case 224:
                getch();
                 break;
            case '\b':
                if (index > 0) {
                    index = index - 1;
                    temp[index] = 0; 
 
                    printf("\b \b"); 
                }
                break;
            default:
                if (key > 31 && key < 127) {
                    temp[index] = key; 
                    index = index + 1; 
 
                    printf("*");
                }
        }
    } while (key != 13);
    temp[index] = '\0';
}

int main(){
	
	int fpin,pin,npin;
	char pinatmchar[200];
	char newpinchar[200];
	char npin1char[200];
	int pinatm = 0, i1, j1, len;
	int newpin = 0, i2, j2, len2;
	int npin1 = 0, i3, j3, len3;

	cover();
	system("pause");
	system("cls");
	system("COLOR 1F");
boxFill(10,1,20,3,7);
boxFill(32,1,20,3,2);
boxFill(54,1,20,3,3);
boxFill(76,1,20,3,4);
boxFill(98,1,20,3,5);
boxFill(120,1,20,3,6); 
printf("\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@   @@@@(  &@@   @@@@&  ,@@@@@@        &@@@@@&   .@@@@@*   @@@@,  @@&  *@@@   &@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@   @@@@(  &@@   @@@@&  ,@@@@@@   @@@.  &@@@@  /  %@@@@*    @@@,   @@&  *@,  ,@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@   @@@@(  &@@   @@@@&  ,@@@@@@   @@@   &@@@/  &.  @@@@*  ,  @@*  @@&  *   &@@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@          &@@          ,@@@@@@       .@@@@@  *@@  #@@@*  @   @/  @@&      @@@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@   @@@@(  &@@   @@@@&  ,@@@@@@   @@@(  .@@.        @@@*  @@.  #  @@&   &   @@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@   @@@@(  &@@   @@@@&  ,@@@@@@   @@@&   @&  ,@@@#  *@@*  @@@*    @@&  *@@   &@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@   @@@@(  &@@   @@@@&  ,@@@@@@        ,@@   &@@@@   &@*  @@@@/   @@&  *@@@   &@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");

int x2; double y2;
char salam[]=    "\n\n\t\tMasukkan Jumlah Saldo Awal yang Anda Inginkan : Rp.";



   printf("\n\n\n");
   for(x2=0; salam[x2]!=NULL; x2++)
   {
     printf("%c",salam[x2]);
     for(y2=0; y2<=9999999; y2++)
      {
      }
   }
	scanf ("%d", &saldo);
	int x1; double y1;
   char salam1[]=    "\n\n\t\tBuatlah Pin ATM Anda Terlebih Dahulu\n\t\tPin ATM : ";



   printf("\n\n\n");
   for(x1=0; salam1[x1]!=NULL; x1++)
   {
     printf("%c",salam1[x1]);
      for(y1=0; y1<=
	  
	  9999999; y1++)
      {
      }
   }
	readPass(pinatmchar);
	len = strlen(pinatmchar);
	for(i1=0; i1<len; i1++){
		pinatm = pinatm * 10 + ( pinatmchar[i1] - '0' );
	}	

	int pil1 = 1;
	int keyPressed8 = 0;

	#define MAX 2
	#define MIN 1

	while (keyPressed8 !=13){

	system ("cls");
boxFill(10,1,20,3,7);
boxFill(32,1,20,3,2);
boxFill(54,1,20,3,3);
boxFill(76,1,20,3,4);
boxFill(98,1,20,3,5);
boxFill(120,1,20,3,6); 
printf("\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@   @@@@(  &@@   @@@@&  ,@@@@@@        &@@@@@&   .@@@@@*   @@@@,  @@&  *@@@   &@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@   @@@@(  &@@   @@@@&  ,@@@@@@   @@@.  &@@@@  /  %@@@@*    @@@,   @@&  *@,  ,@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@   @@@@(  &@@   @@@@&  ,@@@@@@   @@@   &@@@/  &.  @@@@*  ,  @@*  @@&  *   &@@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@          &@@          ,@@@@@@       .@@@@@  *@@  #@@@*  @   @/  @@&      @@@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@   @@@@(  &@@   @@@@&  ,@@@@@@   @@@(  .@@.        @@@*  @@.  #  @@&   &   @@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@   @@@@(  &@@   @@@@&  ,@@@@@@   @@@&   @&  ,@@@#  *@@*  @@@*    @@&  *@@   &@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@   @@@@(  &@@   @@@@&  ,@@@@@@        ,@@   &@@@@   &@*  @@@@/   @@&  *@@@   &@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf ("\n\t\tRingkasan Informasi :");
	printf ("\n\n\t\tSaldo Awal : Rp.%d", saldo);
	printf ("\n\t\tPIN ATM : %s", pinatmchar);
	printf("\n\n\t\t***************************************************");
	printf ("\n\t\tApakah Informasi Sudah Benar ? ");
	arrowHere8 (1,pil1); printf ("ya");
	arrowHere8 (2,pil1); printf ("tidak");

	keyPressed8 = getch();

	if (keyPressed8 == 80 && pil1 != MAX ){
		pil1++;
	}
	else if (keyPressed8 == 72 && pil1 != MIN){
		pil1--;
	}
	else {
		pil1 == pil1;
	}
}
	fpin=pinatm;
	if (pil1==1){
		FILE *out=fopen("Book1msdos.csv","a");
                fprintf(out,"%d,%d,\n",fpin, saldo);
                fclose(out);
		system("cls");

		login:
		pinatm=fpin;
		system("cls");
		void loader()
		{
			int a;
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tPlease Wait Loading....\n");
			printf("\n\t\t\t\t\t\t\t");
			for (a=0; a<30; a++){
			Sleep(50);
			printf("%c", 219);
			}
		}
			system("COLOR 1F");
		{
			loader ();
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\t\t\t\tLoading Completed");
			Sleep(1000);
			system("cls");
		}
		login1:
		pinatm=fpin;
		system("cls");
boxFill(10,1,20,3,7);
boxFill(32,1,20,3,2);
boxFill(54,1,20,3,3);
boxFill(76,1,20,3,4);
boxFill(98,1,20,3,5);
boxFill(120,1,20,3,6); 
printf("\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@   @@@@(  &@@   @@@@&  ,@@@@@@        &@@@@@&   .@@@@@*   @@@@,  @@&  *@@@   &@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@   @@@@(  &@@   @@@@&  ,@@@@@@   @@@.  &@@@@  /  %@@@@*    @@@,   @@&  *@,  ,@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@   @@@@(  &@@   @@@@&  ,@@@@@@   @@@   &@@@/  &.  @@@@*  ,  @@*  @@&  *   &@@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@          &@@          ,@@@@@@       .@@@@@  *@@  #@@@*  @   @/  @@&      @@@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@   @@@@(  &@@   @@@@&  ,@@@@@@   @@@(  .@@.        @@@*  @@.  #  @@&   &   @@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@   @@@@(  &@@   @@@@&  ,@@@@@@   @@@&   @&  ,@@@#  *@@*  @@@*    @@&  *@@   &@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@   @@@@(  &@@   @@@@&  ,@@@@@@        ,@@   &@@@@   &@*  @@@@/   @@&  *@@@   &@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
		printf ("\n\n\t\tSilahkan Masukkan Pin ATM Anda :");
		readPass(newpinchar);
	
	len2 = strlen(newpinchar);
	for(i2=0; i2<len2; i2++){
		newpin = newpin * 10 + ( newpinchar[i2] - '0' );
	}
		if (newpin==pinatm){
			system ("cls");
			goto menu;
		}
		else if (i<2) {
			printf("\n\t\tPIN YANG ANDA MASUKAN SALAH!\n");
			i=i+1;
			getch();
			system("cls");
			newpin=0;
			goto login1;
		}
		else {
			printf ("Anda telah 3x salah memasukan PIN.\n");
			printf("Mohon maaf, account anda telah kami blokir.\n");
			printf("Silahkan hubungi Customer Service kami di (021)12345678.\n");
			printf("Terima Kasih.");
			return 0;
		}
	}
	else if (pil1==2){
		system("cls");
		main();
	}
	menu :

	system("cls");
	int keyPressed = 0;
	while (keyPressed !=966){

	system("cls");
boxFill(10,1,20,3,7);
boxFill(32,1,20,3,2);
boxFill(54,1,20,3,3);
boxFill(76,1,20,3,4);
boxFill(98,1,20,3,5);
boxFill(120,1,20,3,6); 
printf("\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@   @@@@(  &@@   @@@@&  ,@@@@@@        &@@@@@&   .@@@@@*   @@@@,  @@&  *@@@   &@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@   @@@@(  &@@   @@@@&  ,@@@@@@   @@@.  &@@@@  /  %@@@@*    @@@,   @@&  *@,  ,@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@   @@@@(  &@@   @@@@&  ,@@@@@@   @@@   &@@@/  &.  @@@@*  ,  @@*  @@&  *   &@@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@          &@@          ,@@@@@@       .@@@@@  *@@  #@@@*  @   @/  @@&      @@@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@   @@@@(  &@@   @@@@&  ,@@@@@@   @@@(  .@@.        @@@*  @@.  #  @@&   &   @@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@   @@@@(  &@@   @@@@&  ,@@@@@@   @@@&   @&  ,@@@#  *@@*  @@@*    @@&  *@@   &@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@   @@@@(  &@@   @@@@&  ,@@@@@@        ,@@   &@@@@   &@*  @@@@/   @@&  *@@@   &@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
printf("\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n");
	printf ("\t\t\t\t\t\t\t\t=*=*=*Menu Utama*=*=*=");
	printf ("\n\n");
	
	printf("\t\t   %s\t\t\t\t\t %s", ch_arr[0], ch_arr[3]);
	printf ("\n\n\n\n");
	printf("\t\t   %s\t\t\t\t\t %s", ch_arr[1], ch_arr[4]);
	printf ("\n\n\n\n");
	printf("\t\t   %s\t\t\t\t\t %s", ch_arr[2], ch_arr[5]);

	keyPressed = getch();

	if (keyPressed == 97){
		goto menu1;
	}
	else if (keyPressed == 98){
		goto menu2;
	}
	else if(keyPressed == 99){
		goto menu3;
	}
	else if(keyPressed == 100){
		goto menu4;
	}
	else if(keyPressed == 101){
		goto menu5;
	}
	else if(keyPressed == 102){
		goto menu6;
	}
}
		menu1:

		system ("cls");
		
		int keyPressed1 = 0;
		while (keyPressed1 !=966){

			system("cls");
			bankhh();
			printf ("\t\t\t\t\t\t\t\tTransfer Dana*=*=*=");
			printf ("\n\n(A).Transfer Dana Ke Rekening Bank HH");
			printf ("\n\n(B).Transfer Dana Ke Rekening Bank Lain");
			printf ("\n\n(C).Kembali");

			keyPressed1 = getch();

		if (keyPressed1 == 97 ){
		
			system("cls");
			bankhh();
			printf ("\t\t\t\t\t\t\t\t=*=*=*Rekening Bank HH*=*=*=");
			printf ("\n\nMasukkan Nomor Rekening Tujuan : ");
			scanf ("%d", &rekening);
			system("cls");
			bankhh();
			printf ("\t\t\t\t\t\t\t\t=*=*=*Rekening Bank HH*=*=*=");
			printf ("\n\nNominal yang akan di Transfer : ");
			scanf ("%d", &nominal);
			system("cls");

			int keyPressed2 = 0;
			while (keyPressed2 !=966){
			system("cls");
			bankhh();
			printf ("\t\t\t\t\t\t\t\t=*=*=*Rekening Bank HH*=*=*=");
			printf ("\n\nRekening Tujuan : %d ", rekening);
			printf ("\nJumlah yang akan di Transfer : Rp.%d ", nominal);
			printf("\n\n*********************************************");
			printf ("\nApakah Anda ingin melakukan Transaksi Ini?");
			printf ("\n\n(Y).ya \t\t (X).tidak");

			keyPressed2 = getch();

			if (nominal>saldo && keyPressed2 == 121){
						system("cls");
						bankhh();
						printf ("\t\t\t\t\t\t\t\t=*=*=*Rekening Bank HH*=*=*=");
						printf ("\n\nMohon Maaf Saldo yang Anda Miliki Tidak Mencukupi");
						getch();
						system("cls");
						goto menu1;
					}
			else if (nominal<50000 && keyPressed2 == 121){
						system("cls");
						bankhh();
						printf ("\t\t\t\t\t\t\t\t=*=*=*Rekening Bank HH*=*=*=");
						printf ("\n\nMohon Maaf Nominal Harus Kelipatan Rp.50000");
						getch();
						system("cls");
						goto menu1;
					}
			else if (nominal>=50000 && keyPressed2 == 121){
						system("cls");
						bankhh();
						saldo=saldo-nominal;
						time_t t;   // not a primitive datatype
						time(&t);
 								FILE *out=fopen("daftartransaksi.csv","a");
                					fprintf(out,"\n%s Melakukan Transfer ke Rekening %d Sejumlah Rp.%d,\n",ctime(&t),rekening , nominal);
                					fclose(out);

						int keyPressed3 = 0;
						while (keyPressed3 !=966){
						system("cls");
						bankhh();
						printf ("\\t\t\t\t\t\t\t\t=*=*=*Rekening Bank HH*=*=*=");
						printf("\n\nTransaksi Berhasil. Saldo Anda Sekarang : Rp.%d ", saldo);
						printf("\n\n*********************************************");
						printf ("\nApakah Anda ingin Melakukan Transfer lagi ?");
						printf ("\n\n(Y).ya \t\t (X).tidak");

						keyPressed3 = getch();

						if (keyPressed3 == 121 ){
							system("cls");
							goto menu1;
						}
						else if (keyPressed3 == 120 ){
							system("cls");
							goto menu;
						}
					}
					}
		else if(keyPressed2 == 120){
				system("cls");
				goto menu;
		}
	}
	}
					
		else if (keyPressed1 == 98 ){
			
			system("cls");
			bankhh();
			printf ("\t\t\t\t\t\t\t\t=*=*=*Rekening Bank Lain*=*=*=");
			printf ("\n\nMasukkan Nomor Rekening Tujuan : ");
			scanf ("%d", &rekening1);
			system("cls");
			bankhh();
			printf ("\t\t\t\t\t\t\t\t=*=*=*Rekening Bank Lain*=*=*=");
			printf ("\n\nNominal yang akan di Transfer : ");
			scanf ("%d", &nominal1);
			system("cls");

			int keyPressed4 = 0;
			while (keyPressed4 !=966){
			system("cls");
			bankhh();
			printf ("\t\t\t\t\t\t\t\t=*=*=*Rekening Bank Lain*=*=*=");
			printf ("\n\nRekening Tujuan : %d ", rekening1);
			printf ("\nJumlah yang akan di Transfer : Rp.%d ", nominal1);
			printf ("\nBiaya Tambahan Transfer ke Rekening Bank Lain : Rp.6000");
			printf("\n\n*********************************************");
			printf ("\nApakah Anda ingin melakukan Transaksi Ini?");
			printf ("\n\n(Y).ya \t\t (X).tidak");

			keyPressed4 = getch();

			if (nominal1>saldo && keyPressed4 == 121){
						system ("cls");
						bankhh();
						printf ("\t\t\t\t\t\t\t\t=*=*=*Rekening Bank Lain*=*=*=");
						printf ("\n\nMohon Maaf Saldo yang Anda Miliki Tidak Mencukupi");
						getch();
						system("cls");
						goto menu1;
					}
			else if (nominal1<50000 && keyPressed4 == 121){
						system ("cls");
						bankhh();
						printf ("\t\t\t\t\t\t\t\t=*=*=*Rekening Bank Lain*=*=*=");
						printf ("\n\nMohon Maaf Nominal Harus Kelipatan Rp.50000");
						getch();
						system("cls");
						goto menu1;
					}
		else if (nominal1>=50000 && keyPressed4 == 121){
						system ("cls");
						bankhh();
						saldo=saldo-nominal1-6000;
						time_t t;   // not a primitive datatype
						time(&t);
						FILE *out=fopen("daftartransaksi.csv","a");
                					fprintf(out,"\n%s Melakukan Transfer ke Bank Lain dengan No. Rekening %d Sejumlah Rp.%d,\n",ctime(&t),rekening1 , nominal);
                					fclose(out);
                					
						int keyPressed5 = 0;
						while (keyPressed5 !=966){
						system ("cls");
						bankhh();
						printf ("\t\t\t\t\t\t\t\t=*=*=*Rekening Bank Lain*=*=*=");
						printf("\n\nTransaksi Berhasil. Saldo Anda Sekarang : Rp.%d ", saldo);
						printf("\n\n*********************************************");
						printf ("\nApakah Anda ingin Melakukan Transfer lagi ?");
						printf ("\n\n(Y).ya \t\t (X).tidak");

						keyPressed5 = getch();

						if (keyPressed5 == 121 ){
							system("cls");
							goto menu1;
						}
						else if (keyPressed5 == 120 ){
							system("cls");
							goto menu;
						}
					}
					}
			
			else if(keyPressed4 == 120){
				system("cls");
				goto menu;
		}
	}
	}
		else if (keyPressed1 == 99 ){
			system ("cls");
			goto menu;
		}
}

		menu2 :

		system("cls");
		bankhh();
		printf ("\t\t\t\t\t\t\t\t=*=*=*Tarik Tunai*=*=*=");
		printf("\n\nMasukkan Jumlah Nominal yang Anda ingin Tarik : ");
		scanf ("%d", &nominal2);
		system("cls");

		int keyPressed6 = 0;
		while (keyPressed6 !=966){

		system ("cls");
		bankhh();
		printf ("\t\t\t\t\t\t\t\t=*=*=*Tarik Tunai*=*=*=");
		printf ("\n\nJumlah Penarikan : Rp.%d", nominal2);
		printf("\n\n*********************************************");
		printf ("\nApakah Anda ingin melakukan Transaksi Ini?");
		printf ("\n\n(Y).ya \t\t (X).tidak");

		keyPressed6= getch();

		if (nominal2>saldo && keyPressed6 == 121){
						system ("cls");
						bankhh();
						printf ("\t\t\t\t\t\t\t\t=*=*=*Tarik Tunai*=*=*=");
						printf ("\n\nMohon Maaf Saldo yang Anda Miliki Tidak Mencukupi");
						getch();
						system("cls");
						goto menu1;
					}
		if (nominal2<50000 && keyPressed6 == 121){
					system ("cls");
					bankhh();
					printf ("\t\t\t\t\t\t\t\t=*=*=*Tarik Tunai*=*=*=");
					printf ("\n\nMohon Maaf Nominal Harus Kelipatan Rp.50000");
					getch();
					system("cls");
					goto menu2;
				}
		else if (nominal2>=50000 && keyPressed6 == 121){
					system ("cls");
					bankhh();
					saldo=saldo-nominal2;
					time_t t;   // not a primitive datatype
					time(&t);
					FILE *out=fopen("daftartransaksi.csv","a");
                					fprintf(out,"\n%s Melakukan Penarikan Tunai Sejumlah Rp.%d,\n",ctime(&t), nominal2);
                					fclose(out);

					int keyPressed7 = 0;
					while (keyPressed7 !=966){
						
					system ("cls");
					bankhh();
					printf ("\t\t\t\t\t\t\t\t=*=*=*Tarik Tunai*=*=*=");
					printf("\n\nTransaksi Berhasil. Saldo Anda Sekarang : Rp.%d ", saldo);
					printf("\n\n*********************************************");
					printf ("\nApakah Anda ingin Melakukan Penarikan lagi ?");
					printf ("\n\n(Y).ya \t\t (X).tidak");

					keyPressed7= getch();

					if (keyPressed7 == 121 ){
						system("cls");
						goto menu2;
					}
					else if (keyPressed7 == 120 ){
						system("cls");
						goto menu;
					}
				}
				}	
			else if (keyPressed6 == 120){
				system("cls");
				goto menu;
			}
		}
		menu3 :

		system("cls");
		bankhh();
		printf ("\t\t\t\t\t\t\t\t*=*=*=*Cek Saldo*=*=*=");
		printf ("\n\nSaldo Anda Saat Ini : Rp.%d", saldo);
		printf ("\n>>>Kembali");
		getch();
		goto menu;

		menu4:

		system("cls");
		bankhh();
		printf("\t\t\t\t\t\t\t\t=*=*=*Ganti PIN*=*=*=");
		printf("\n\nSilahkan Masukkan PIN Lama Anda : ");
		scanf ("%d", &npin);
			if (npin==pinatm){
				printf ("\nSilahkan Masukkan PIN Baru Anda : ");
				scanf ("%d", &npin1);
			
				fpin=npin1;
				printf ("\n\t\tGanti PIN Berhasil. Silahkan Lakukan Login Ulang...");
				newpin=0;
				getch();
				system("cls");
				goto login;
			}
			if (j<2) {
				printf("\nPIN YANG ANDA MASUKAN SALAH!\n");
				j=j+1;
				getch();
				system("cls");
				goto menu4;
			}
			else {
				printf ("Anda telah 3x salah memasukan PIN.\n");
				printf("Mohon maaf, account anda telah kami blokir.\n");
				printf("Silahkan hubungi Customer Service kami di (021)12345678.\n");
				printf("Terima Kasih.");
				return 0;
		}

		menu5 :

		system("cls");
		bankhh();
 		printf ("\t\t\t\t\t\t\t\t=*=*=*Informasi Transaksi*=*=*=\n");
 		char buffer[1024] ;
    		char *record,*line;
    		int i=0,j=0;
    		int mat[100][100];
    		FILE *fstream = fopen("daftartransaksi.csv","r");

 		if(fstream == NULL)   {
    		printf("<<======================================================>>\n");
 			printf("Anda Belum melakukan transaksi apapun. \n kembali ke menu untuk melakukan transaksi pertama\n");
    		printf("<<======================================================>>\n\n");
    		getch();
    		goto menu;
   		}

 		while((line=fgets(buffer,sizeof(buffer),fstream))!=NULL)
    	{
  			record = strtok(line,";");
  				while(record != NULL)
   			{
    			printf("\t%s",record) ;
//here you can put the record into the array as per your requirement.
    			mat[i][j++] = atoi(record) ;
    			record = strtok(NULL,";");
  		 	}
  			++i ;
 		}
			printf("\n");
			system ("Pause");
			goto menu;


		menu6 :
		system("cls");
		bankhh();
		printf ("\t\t\t\t\t\t\t\t=*=*=*Exit*=*=*=");
		printf ("\n\nTerima Kasih telah Menggunakan ATM Kami :)");
		return 0;
}

	void arrowHere8(int realposition8, int arrowposition8){

			if (realposition8 == arrowposition8){
				printf ("\n\t\t>>>");
			}
			else {
				printf ("\n\t\t   ");
			}
	}
