#include <stdio.h>

int main(){
	int umur;
	int saudara;
	char darah;
	
	printf("Masukan umur anda: ");
	scanf("%d", &umur);
	printf("Umur anda adalah %d\n\n", umur);
	
	printf("Masukan jumlah saudara anda: ");
	scanf(" %c", &saudara);
	printf("Jumlah saudara anda adalah %c\n\n", saudara);
	
	printf("Masukan golongan darah anda: ");
	scanf(" %c", &darah);
	printf("Golongan darah anda adalah %c", darah);
	
	return 0;
}
