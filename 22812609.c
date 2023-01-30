#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int o_n_kare(int * arr, int size){
    int number_of_sub_array = 0;
        int i, j;
        for(i=0; i< size -1;i++)
            for(j=size-1;j>i;j--)
            {
                if(arr[i] == 1 && arr[j] == 9)
                    number_of_sub_array++;

            }

        return number_of_sub_array;
}
int o_n(int * arr, int size){
    int number_of_sub_array = 0;
    int number_of_one = 0;
    int i;
    for(i=0; i< size -1;i++){
        if(arr[i] == 1)
            number_of_one++;
        else if(arr[i] == 9){
            number_of_sub_array += number_of_one;
        }
    }

    return number_of_sub_array;
}

int main(void)
{
	// MAIN FONKSİYONU DEĞİŞTİRİLMEYECEKTİR
	int size, i, *arr;
	int sonuc_n, sonuc_n_kare;
	scanf("%d",&size);
	arr = (int*)malloc(size * sizeof(int));
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	// O(n-kare) algoritmanın çalışması
	clock_t basla_kare = clock();
	sonuc_n_kare = o_n_kare(arr, size);
	clock_t bitir_kare = clock();
	double zaman_n_kare = (double)(bitir_kare - basla_kare) / CLOCKS_PER_SEC;
	//printf("O-n-kare Zaman: %f \n",zaman_n_kare);
	printf("O-n-kare Sonuc: %d \n",sonuc_n_kare);
	// O(n) algoritmanın çalışması
	clock_t basla_n = clock();
	sonuc_n = o_n(arr, size);
	clock_t bitir_n = clock();
	double zaman_n = (double)(bitir_n - basla_n) / CLOCKS_PER_SEC;
	//printf("O-n Zaman: %f \n", zaman_n);
	printf("O-n Sonuc: %d \n", sonuc_n);
	// EGER O-n yeterince hızlı ise burada DOGRU! sonucu üretilir
	if((zaman_n_kare>=zaman_n)&&(sonuc_n_kare==sonuc_n))
		printf("DOGRU!");
	else
		printf("YANLIS!");
	

}
