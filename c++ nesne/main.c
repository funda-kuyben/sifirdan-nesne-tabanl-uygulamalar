#include <stdio.h>
#include <stdlib.h>
struct ogrenci{
	char isim[20];
	int no;
}bir;
int main(int argc, char *argv[]) {
	FILE *f=fopen("ogrenci.txt","r");
	

	while(fread(&bir, sizeof(struct ogrenci), 1, f) == 1){
		fread (&bir,sizeof(struct ogrenci),1,f);
		puts(bir.isim);
		
	}
	return 0;
}
