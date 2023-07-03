#include <stdio.h>


int main(){
    char platno[10];
    int jenis, lama, biaya, jam, menit, sisa;
    int masuk, keluar, jmasuk, jkeluar, mmasuk, mkeluar;

    printf("==============================================\n");
    printf("\t\tWelcome To\n");
    printf("\tParking Payment Program's C\n");
    printf("\t\t  By\n");
    printf("\t  Syauqi Nur Muhammad\n");
    printf("\t  4.33.21.0.26\n");
    printf("==============================================\n");
    printf("1.Mobil\n2.Motor\nMasukkan Jenis Kendaraan Anda: ");
    scanf("%d", &jenis);

    switch (jenis)
    {
    case 1 :
        printf("=================== MOBIL ==================== \n");
        printf("\n");
        printf("\tParkir Dibawah 2 jam = Rp.5000 \n");
        printf(" Parkir Diatas 2 jam tambahan Rp.2000 per jam \n");
        printf("\n");
        printf("============================================== \n");
        printf("Masukkan Plat nomor : ");
        scanf("%s", &platno);
        printf("Masukan Jam Masuk: ");
        scanf("%i.%i", &jmasuk, &mmasuk);
        printf("Masukan Jam keluar: ");
        scanf("%i.%i", &jkeluar, &mkeluar);

        if(jkeluar < jmasuk){
            keluar = ((jkeluar + 24)* 3600) + (mkeluar * 60);
            masuk =  (jmasuk * 3600) + (mmasuk * 60);
            lama = keluar - masuk;
            jam = lama / 3600;
            sisa = lama % 3600;
            menit = sisa / 60;
        }

        else{
            keluar = (jkeluar * 3600) + (mkeluar * 60);
            masuk =  (jmasuk * 3600) + (mmasuk * 60);
            lama = keluar - masuk;
            jam = lama / 3600;
            sisa = lama % 3600;
            menit = sisa / 60;
        }

        printf("==============================================\n");
        printf(" Plat Nomor Anda : %s \n", &platno);
        printf(" Lama Parkir Anda : %d.%d Jam \n", jam, menit);

        if(jam <= 2){
            biaya = 5000;
            printf("-Biaya Parkir : Rp. %d \n", biaya);
        }
        else {
                if(menit == 0) {
                    biaya = 5000 + ((jam - 2)* 2000);
                    printf("-Biaya Parkir : Rp. %d \n", biaya);
                } else if (menit > 0) {
                    biaya = 5000 + ((jam - 2)* 2000);
                    printf("-Biaya Parkir : Rp. %d \n", biaya);
                } else {
                    printf("Invalid \n");
                }
        }
    break;
    case 2 :
        printf("=================== MOTOR ==================== \n");
        printf("\n");
        printf("\tParkir Dibawah 2 jam = Rp.3000 \n");
        printf(" Parkir Diatas 2 jam tambahan Rp.1000 per jam \n");
        printf("\n");
        printf("============================================== \n");
        printf("Masukkan Plat nomor : ");
        scanf("%s", &platno);
        printf("Masukan Jam Masuk: ");
        scanf("%i.%i", &jmasuk, &mmasuk);
        printf("Masukan Jam keluar: ");
        scanf("%i.%i", &jkeluar, &mkeluar);

        if(jkeluar < jmasuk){
            keluar = ((jkeluar + 24)* 3600) + (mkeluar * 60);
            masuk =  (jmasuk * 3600) + (mmasuk * 60);
            lama = keluar - masuk;
            jam = lama / 3600;
            sisa = lama % 3600;
            menit = sisa / 60;
        }

        else{
            keluar = (jkeluar * 3600) + (mkeluar * 60);
            masuk =  (jmasuk * 3600) + (mmasuk * 60);
            lama = keluar - masuk;
            jam = lama / 3600;
            sisa = lama % 3600;
            menit = sisa / 60;
        }

        printf("==============================================\n");
        printf(" Plat Nomor Anda : %s \n", &platno);
        printf(" Lama Parkir Anda : %d.%d Jam \n", jam, menit);

        if(jam <= 2){
            biaya = 3000;
            printf("-Biaya Parkir : Rp. %d \n", biaya);
        }
        else {
                if(menit == 0) {
                    biaya = 3000 + ((jam - 2) * 1000);
                    printf("-Biaya Parkir : Rp. %d \n", biaya);
                } else if (menit > 0) {
                    biaya = 3000 + ((jam - 2) * 1000);
                    printf("-Biaya Parkir : Rp. %d \n", biaya);
                } else {
                    printf("Invalid \n");
                }
        }
    break;
    default :
        printf("***** invalid ***** \n");
        break;
    }

    printf("-------------------------------\n");
    printf("==============================================\n");
	printf("\t\t Terima Kasih\n");
	printf("\t\t       & \n");
	printf("\t\t Sampai Jumpa \n");
	printf("==============================================\n");

    return 0;
}
