#include<stdio.h>
#include<string.h>

int main(){
	int harga, pilihan, member, nomi, kali;
	char kata[5];
	char kataku[5];
	float total;
	
	printf("Pilih menu premium\n");
	printf("1. Netflix Premium | 1 Bulan | Rp. 50.000\n");
	printf("2. Spotify Premium | 1 Bulan | Rp. 55.000\n");
	printf("3. Canva Premium   | 1 Bulan | RP. 30.000\n");
	printf("Masukkan pilihan=\n");
	scanf("%d", &pilihan);
	
	switch(pilihan){
		case 1 : 
		harga = 50000;
		printf("Apakah anda yakin untuk membeli netflix paketan 1 bulan?\n");
		scanf("%s", &kata);
		if(strcmpi(kata, "Ya") == 0){
		   	printf("Baik! Apakah anda ingin menambahkan member kedalam premium anda?\n");
			scanf("%s", &kataku);
		    	if(strcmpi(kata, "Ya") == 0){
		        	printf("Baiklah, Berapa member yang ingin anda tambah?\n");
		 	        scanf("%d", &member);
		        	kali = member * 5000;
		        	total = harga + kali;
			        printf("Baiklah kami sudah memprosses transaksi anda\n");
		        	printf("Maka total anda adalah %.3f", total / 1000);
		        }
		        else if(strcmpi(kataku, "Tidak") == 0){
		    		printf("Baik, Maka anda hanya membeli paket netflix 1 bulan dengan seharga %d", harga);
		     	}
		        else {
			        printf("Invalid Input! Tolong masukkan input yang benar!");
 	          	}
    	}
	    else if(strcmpi(kata, "Tidak") == 0){
	    	printf("Baik kami akan mencancel transaksi anda!");
		}
		else {
			printf("Input invalid, transaksi otomatis dibatalkan!");
		}
      
	    case 2 :
	    harga = 55000;
		printf("Apakah anda yakin untuk membeli spotify paketan 1 bulan?\n");
		scanf("%s", &kata);
		if(strcmpi(kata, "Ya") == 0){
		   	printf("Baik! Apakah anda ingin menambahkan member kedalam premium anda?\n");
			scanf("%s", &kataku);
		    	if(strcmpi(kata, "Ya") == 0){
		        	printf("Baiklah, Berapa member yang ingin anda tambah?\n");
		 	        scanf("%d", &member);
		        	kali = member * 5000;
		        	total = harga + kali;
			        printf("Baiklah kami sudah memprosses transaksi anda\n");
		        	printf("Maka total anda adalah %.3f", total / 1000);
		        }
		        else if(strcmpi(kataku, "Tidak") == 0){
		    		printf("Baik, Maka anda hanya membeli paket spotify 1 bulan dengan seharga %d", harga);
		     	}
		        else {
			        printf("Invalid Input! Tolong masukkan input yang benar!");
 	          	}
    	}
	    else if(strcmpi(kata, "Tidak") == 0){
	    	printf("Baik kami akan mencancel transaksi anda!");
		}
		else {
			printf("Input invalid, transaksi otomatis dibatalkan!");
		}
		
		case 3 :
		harga = 30000;
		printf("Apakah anda yakin untuk membeli canva paketan 1 bulan?\n");
		scanf("%s", &kata);
		if(strcmpi(kata, "Ya") == 0){
		   	printf("Baik! Apakah anda ingin menambahkan member kedalam premium anda?\n");
			scanf("%s", &kataku);
		    	if(strcmpi(kata, "Ya") == 0){
		        	printf("Baiklah, Berapa member yang ingin anda tambah?\n");
		 	        scanf("%d", &member);
		        	kali = member * 5000;
		        	total = harga + kali;
			        printf("Baiklah kami sudah memprosses transaksi anda\n");
		        	printf("Maka total anda adalah %.3f", total / 1000);
		        }
		        else if(strcmpi(kataku, "Tidak") == 0){
		    		printf("Baik, Maka anda hanya membeli paket canva 1 bulan dengan seharga %d", harga);
		     	}
		        else {
			        printf("Invalid Input! Tolong masukkan input yang benar!");
 	          	}
    	}
	    else if(strcmpi(kata, "Tidak") == 0){
	    	printf("Baik kami akan mencancel transaksi anda!");
		}
		else {
			printf("Input invalid, transaksi otomatis dibatalkan!");
		}
		
		default :
			printf("Input tidak valid, mohon ulangi proses transaksi!");
 	}
}
	

