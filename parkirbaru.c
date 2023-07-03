#include <stdio.h>

typedef struct angkutan {
	int nomor[100];
	char huruf[100];
	int jm, jk, mm, mk, dm, dk;
}transportasi;

int i;
int kendaraan;
int parkir;
int hasil, harga, jam, menit, detik, sisa;

void welcome ()
{
	printf("============================================== \n");
	printf("\t\tSelamat Datang \n");
	printf("\t\t      Di \n");
	printf("\t      Parkiran Kelompok 1 \n");
	printf("============================================== \n");
}

void selesai ()
{
	printf("==============================================\n");
	printf("\t\t Terima Kasih\n");
	printf("\t\t       & \n");
	printf("\t\t Sampai Jumpa \n");
	printf("==============================================\n");
}

void info_motor()
{
	printf("=================== MOTOR ==================== \n");
	printf("\n");
	printf("\tParkir Dibawah 2 jam = Rp.1000 \n");
	printf(" Parkir Diatas 2 jam tambahan Rp.500 per jam \n");
	printf("\n");
	printf("============================================== \n");
}

void info_mobil()
{
	printf("=================== MOBIL ==================== \n");
	printf("\n");
	printf("\tParkir Dibawah 2 jam = Rp.2000 \n");
	printf(" Parkir Diatas 2 jam tambahan Rp.1000 per jam \n");
	printf("\n");
	printf("============================================== \n");
}

int hasil_motor(transportasi angkutan)
{	
	printf(" Masukkan nomor plat 		: ");
	scanf("%s", &angkutan.nomor);
	printf(" Masukkan huruf belakang plat 	: ");
	scanf("%s", &angkutan.huruf);
	printf(" Masukkan Jam Masuk 		: ");
	scanf("%i.%i.%i", &angkutan.jm, &angkutan.mm, &angkutan.dm);
	printf(" Masukkan Jam Keluar 		: ");
	scanf("%i.%i.%i", &angkutan.jk, &angkutan.mk, &angkutan.dk);
	
	parkir = ((angkutan.jk*3600) + (angkutan.mk*60) + angkutan.dk) - ((angkutan.jm*3600) + (angkutan.mm*60) + angkutan.dm);
	jam = parkir / 3600;
	sisa = parkir % 3600;
	menit = sisa / 60;
	detik = sisa % 60;
	
	printf("==============================================\n");
	printf(" Plat Nomor Anda 		: BP %s %s \n", angkutan.nomor, angkutan.huruf);
	printf(" Lama Parkir 			: %i.%i.%i Jam \n", jam, menit, detik);
	
	if(jam <= 2)
	{
		harga = 1000;
		printf("-Biaya Parkir 			: Rp. %d \n", harga);
	}else{
		if(menit == 0){
			harga = jam * 500;
			printf("-Biaya Parkir 			: Rp. %d \n", harga);
		}else if(menit > 0){
			harga = (jam + 1) * 500;
			printf("-Biaya Parkir 			: Rp. %d \n", harga);
		}else{
			printf("invalid \n");
		}
	}
	return parkir;
}

int hasil_mobil(transportasi angkutan)
{
	printf(" Masukkan nomor plat 		: ");
	scanf("%s", &angkutan.nomor);
	printf(" Masukkan huruf belakang plat 	: ");
	scanf("%s", &angkutan.huruf);
	printf(" Masukkan Jam Masuk 		: ");
	scanf("%i.%i.%i", &angkutan.jm, &angkutan.mm, &angkutan.dm);
	printf(" Masukkan Jam Keluar 		: ");
	scanf("%i.%i.%i", &angkutan.jk, &angkutan.mk, &angkutan.dk);
	
	parkir = ((angkutan.jk*3600) + (angkutan.mk*60) + angkutan.dk) - ((angkutan.jm*3600) + (angkutan.mm*60) + angkutan.dm);
	jam = parkir / 3600;
	sisa = parkir % 3600;
	menit = sisa / 60;
	detik = sisa % 60;
	
	printf("==============================================\n");
	printf(" Plat Nomor Anda 		: BP %s %s \n", angkutan.nomor, angkutan.huruf);
	printf(" Lama Parkir 			: %i.%i.%i Jam \n", jam, menit, detik);
	
	if(jam <= 2)
	{
		harga = 2000;
		printf(" Biaya Parkir 			: Rp. %d \n", harga);
	}else{
		if(menit == 0){
			harga = jam * 1000;
			printf(" Biaya Parkir 			: Rp. %d \n", harga);
		}else if(menit > 0){
			harga = (jam + 1) * 1000;
			printf(" Biaya Parkir 			: Rp. %d \n", harga);
		}else{
			printf("invalid \n");
		}
	}
	return parkir;
}

int main()
{
	transportasi angkutan;
	
	welcome();
	printf(" jenis kendaraan 		: \n");
	printf(" 1.	Motor \n");
	printf(" 2.	Mobil \n");
	printf(" Pilih Kendaraan [1/2]		: ");
	scanf("%d", &kendaraan);
	printf("\n");
	
	switch (kendaraan)
	{
		case 1 :
			for(i=1;i<=1;i++){
				info_motor();
				hasil_motor(angkutan);
				selesai();
			}
			break;
		case 2 :
			for(i=1;i<=1;i++){
				info_mobil();
				hasil_mobil(angkutan);
				selesai();
			}
			break;
		default :
			printf("***** invalid ***** \n");
	}
}
