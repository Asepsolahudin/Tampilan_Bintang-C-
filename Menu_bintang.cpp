#include "stdio.h"
#include "conio.h"
#include <stdlib.h>
#include "iostream.h"
int bin, bil1, bil2, bil3, menu;
void segitiga_Siku2_atas_kiri();
void segitiga_Siku2_atas_kanan();
void segitiga_Siku2_bawah_kiri();
void segitiga_Siku2_bawah_kanan();
void segitiga_Samasisi();
void main()
{
   do
   {
   	clrscr ();
   	puts ("--------------------------------------");
		puts("Program membuat tampilan bintang");
      puts ("--------------------------------------");
   	puts("Menu yang tersedia");
   	puts("1. Membuat segitiga siku2 atas kiri");
   	puts("2. Membuat segitiga siku2 atas kanan");
   	puts("3. Membuat segitiga siku2 bawah kiri");
   	puts("4. Membuat segitiga siku2 bawah kanan");
   	puts("5. Membuat segitiga sama sisi");
      puts("6. Exit");
      cout<<"Pilih menu (1/2/3/4/5/6) ? ";
      cin>>menu;
      if (menu == 1)
      {
      	clrscr ();
      	segitiga_Siku2_atas_kiri();
      }
      else if (menu == 2)
      {
      	clrscr ();
      	segitiga_Siku2_atas_kanan();
      }
      else if (menu == 3)
      {
      	clrscr ();
      	segitiga_Siku2_bawah_kiri();
      }
      else if (menu == 4)
      {
      	clrscr ();
      	segitiga_Siku2_bawah_kanan();
      }
      else if (menu == 5)
      {
      	clrscr ();
      	segitiga_Samasisi();
      }
      else if (menu > 6)
      {
      	clrscr ();
      	cout<<"Maaf menu yang anda pilih tidak tersedia";
         cout<<endl;
         system("PAUSE");
      }
      else
      {
       	clrscr ();
      	puts(" ");
   	}
   }
   while (menu != 6);
}
void segitiga_Siku2_atas_kiri()
{
	puts ("--------------------------------------");
   puts("Membuat segitiga siku2 atas kiri");
   puts ("--------------------------------------");
	cout<<"set brp jumlah tingkat bintang : ";cin>>bin;
   cout<<endl;
	for(bil1=0;bil1<bin; bil1++)
   {
   	for(bil2=1; bil2<=bin-bil1; bil2++)
      {
      	cout<<"*";
      }
         cout<<endl;
	}
   cout<<endl;
   system("PAUSE");
}
void segitiga_Siku2_atas_kanan()
{
	puts ("--------------------------------------");
	puts("Membuat segitiga siku2 atas kanan");
   puts ("--------------------------------------");
	cout<<"set brp jumlah tingkat bintang : ";cin>>bin;
   cout<<endl;
   for(bil1=0;bil1<bin; bil1++)
   {
   	if (bil1==0)
      {
   		for(bil2=1; bil2<=bin; bil2++)
      	{
   			cout<<"*";
   		}
      }
   	else
      {
   		for (bil3=1; bil3<=bil1; bil3++)
   		{
   			cout<<" ";
   		}
         for (bil3=bin-bil1; bil3>=1; bil3--)
         {
         	cout<<"*";
         }
      }
      cout<<endl;
   }
   cout<<endl;
   system("PAUSE");
}
void segitiga_Siku2_bawah_kiri()
{
   puts ("--------------------------------------");
	puts("Membuat segitiga siku2 bawah kiri");
   puts ("--------------------------------------");
	cout<<"set brp jumlah tingkat bintang : ";cin>>bin;
   cout<<endl;
	for(bil1=0;bil1<bin; bil1++)
   {
   	for(bil2=0; bil2<=bil1; bil2++)
      {
      	cout<<"*";
      }
      cout<<endl;
   }
   cout<<endl;
   system("PAUSE");
}
void segitiga_Siku2_bawah_kanan()
{
   puts ("--------------------------------------");
	puts("Membuat segitiga siku2 bawah kanan");
   puts ("--------------------------------------");
  	cout<<"set brp jumlah tingkat bintang : ";cin>>bin;
   cout<<endl;
	for(bil1=0;bil1<bin; bil1++)
   {
   	if(bil1<bin)
      {
			for(bil2=bin-bil1; bil2>1; bil2--)
         {
         	cout<<" ";
         }
         for(bil3=0; bil3<=bil1; bil3++)
         {
         	cout<<"*";
         }
      }
      cout<<endl;
   }
   cout<<endl;
   system("PAUSE");
}
void segitiga_Samasisi()
{
   puts ("--------------------------------------");
	puts("Membuat segitiga sama sisi");
   puts ("--------------------------------------");
	cout<<"set brp jumlah tingkat bintang : ";cin>>bin;
   cout<<endl;
   int r = bin;
	for(bil1=1; bil1<=r ; bil1++)
   {
   	for(bil2=1; bil2<=bin; bil2++)
      {
      	printf(" ");
      }
      for( bil3=1; bil3<= bil1; bil3++)
      {
      	printf("*");
         printf(" ");
      }
      	printf("\n");
         bin-=1;
   }
   cout<<endl;
   system("PAUSE");
}















