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
		
		//Swap i�lemimiz
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

�rnek: 3, 17, 86, -9, 7, -11, 38 say�lar�n� k���kten b�y��e do�ru s�ralayal�m.
� �lk ad�mda 3 say�s� en k���k say� olarak kabul edilir ve di�er elemanlar ile k�yaslama 
i�lemi yap�l�r. Di�er say�lar ile k�yasland���nda en k���k say� -11 oldu�u i�in 3 ile -11
aras�nda takas i�lemi ger�ekle�ir.
� 3, 17, 86, -9, 7, -11, 38 � �lk a�amada 3 say�s�n� se�tik
� Swap(3,-11) � -11, 17, 86, -9, 7, 3, 38
� Swap(17,-9) � -11, -9, 86, 17, 7, 3, 38
� Swap(86, 3) � -11, -9, 3, 17, 7, 86, 38
� Swap(7, 17) � -10, -9, 3, 7, 17, 86, 38
� Swap(38,86) � -10, -9, 3, 7, 17, 38, 86
� -10, -9, 3, 7, 17, 38, 86 � Normalde s�ralama tamamlanm��t� fakat 86 terimini son kez 
kontrolden ge�iriyor.


*/
