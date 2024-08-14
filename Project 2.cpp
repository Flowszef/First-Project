#include <stdio.h>

int main(){
	int angka;
	int angka2;
	int angka33, angka23, angka44, angka24;
	
	printf("********************************************\n");
	printf("****************Calculator******************\n");
	printf("********************************************\n\n");
	
//	Pertambahan //
   	printf("1. Pertambahan\n");
    	printf("Silahkan masukkan angka= ");
    	scanf("%d %d", &angka, &angka2);
    	printf("Hasil Pertambahan adalah = %d\n\n", angka + angka2);
    	
//  Pengurangan //
   	printf("2. Pengurangan\n");
    	printf("Silahkan masukkan angka= ");
    	scanf("%d %d", &angka33, &angka23);
    	printf("Hasil Pengurangan adalah = %d\n\n", angka33 - angka23);
    	
// Modulus //
   	printf("3. Modulus\n");
    	printf("Silahkan masukkan angka= ");
    	scanf("%d %d", &angka44, &angka24);
    	printf("Hasil Modulus adalah = %d\n\n", angka44 % angka24);
    	
    	int angka55, angka54, angka66, angka64;
// Perkalian //
   	printf("4. Perkalian\n");
    	printf("Silahkan masukkan angka= ");
    	scanf("%d %d", &angka55, &angka54);
    	printf("Hasil Perkalian adalah = %d\n\n", angka55 * angka54);
    	
// Pembagian //
   	printf("5. Pembagian\n");
    	printf("Silahkan masukkan angka= ");
    	scanf("%d %d", &angka66, &angka64);
    	printf("Hasil Pembagian adalah = %d\n\n", angka66 / angka64);
    	

	return 0;
}
