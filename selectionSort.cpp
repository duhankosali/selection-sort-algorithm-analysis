#include <stdio.h>

int dizi[100];
int temp;
int minimum;

void selectionSort(int dizi[], int elemanSayisi)
{
	int i,j;
	
	for (i=0; i<elemanSayisi; i++)
	{
		minimum = i;
		for(j=i+1; j<elemanSayisi; j++)
		{
			if(dizi[j]<dizi[minimum])
			{
				minimum=j;
			}
		}
		
		//Swap iþlemimiz
		temp = dizi[i];
		dizi[i] = dizi[minimum];
		dizi[minimum] = temp;
	}
}

int main()
{
	int secim,i;
	while(1==1)
	{
		printf("\n \n\nKac adet sayi gireceksiniz: ");
		scanf("%d",&secim);
		
		for(i=0; i<secim; i++)
		{
			printf("\n Lutfen %d. sayiyi giriniz: ", i+1);
			scanf ("%d",&dizi[i]);
		}
		
		selectionSort(dizi,secim);
		
		for (i=0; i<secim; i++)
		{
			printf("%d \t", dizi[i]);
		}
	}
	
	return 0;
}


/*

Örnek: 3, 17, 86, -9, 7, -11, 38 sayýlarýný küçükten büyüðe doðru sýralayalým.
• Ýlk adýmda 3 sayýsý en küçük sayý olarak kabul edilir ve diðer elemanlar ile kýyaslama 
iþlemi yapýlýr. Diðer sayýlar ile kýyaslandýðýnda en küçük sayý -11 olduðu için 3 ile -11
arasýnda takas iþlemi gerçekleþir.
• 3, 17, 86, -9, 7, -11, 38 › Ýlk aþamada 3 sayýsýný seçtik
• Swap(3,-11) › -11, 17, 86, -9, 7, 3, 38
• Swap(17,-9) › -11, -9, 86, 17, 7, 3, 38
• Swap(86, 3) › -11, -9, 3, 17, 7, 86, 38
• Swap(7, 17) › -10, -9, 3, 7, 17, 86, 38
• Swap(38,86) › -10, -9, 3, 7, 17, 38, 86
• -10, -9, 3, 7, 17, 38, 86 › Normalde sýralama tamamlanmýþtý fakat 86 terimini son kez 
kontrolden geçiriyor.


*/
