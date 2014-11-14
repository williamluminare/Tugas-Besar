#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

void menu();
void proses(int pil);
float a,b,c,d,u,v,w,x,y,z,hasil;
int i,j,k,l,m,n;
char op;


int main(void)
       {
       int pil,ulang;

       printf ("                                  Program\n");
       printf ("                          Kalkulator Multi Fungsi \n");


       menu();
       printf("\n\nMasukan Pilihan Anda : ");
       scanf("%d",&pil);
       proses(pil);

       printf ("Apakah Anda Ingin Melakukan Operasi Yang Lain ( 1=Yes / 2=No )?");
       scanf  ("%d",&ulang);

       if(ulang==1)
        {
              system("cls");
              while (ulang==1)
              {
              menu();
              printf("\n\nMasukan Pilihan Anda : ");
              scanf("%i",&pil);
              proses(pil);
              printf ("Apakah Anda Ingin Melakukan Operasi Yang Lain ( 1=Yes / 2=No )?");
              scanf  ("%i",&ulang);
              }
       }
       else
       {
              printf("Terima Kasih\n");
       }
       system ("pause");
       return 0;

}
 void menu()
 {
       printf ("\nMENU\n");
       printf ("1. Kalkulator Sederhana\n");
       printf ("2. Menghitung Luas\n");
       printf ("3. Menghitung Volume\n");
       printf ("4. Menghitung dan Menentukan Akar\n");
       printf ("5. Menghitung FPB\n");
       printf ("6. Menghitung KPK\n");
       printf ("7. Menghitung Sudut Sin,Cos & Tan\n");
       printf ("8. Menghitung Rata-Rata\n");
       printf ("9. Menghitung Simpangan Baku\n");
       printf ("10. Penjumlahan Matriks 2x2\n");
       printf ("11. Perkalian Matriks 2x2\n");
       printf ("12. Integral Fungsi Sederhana\n");
       printf ("13. Turunan Fungsi Sederhana\n");
}
void proses(int pil)
    {
    switch (pil)
       {
       case 1:{
                system("cls");
                printf("Masukkan angka pertama = ");
                scanf("%f",&x);
                printf("Pilih operasi(+,-,*,/) = ");
                scanf("%s",&op);
                printf("Masukkan angka kedua = ");
                scanf("%f",&y);

                switch (op)
                {
                case '+' : hasil = x + y; break;
                case '-' : hasil = x - y; break;
                case '*' : hasil = x * y; break;
                case '/' : hasil = x / y; break;
                default :
                printf("Operator Salah!");
                }
                printf("\nHasil dari %.2f %c %.2f adalah %.2f\n", x,op,y,hasil);
                break;
            }
       case 2:{
                 system("cls");
                 printf("\nMenghitung Luas\n\n");
                 printf("Pilihan :\n1.Persegi\n2.Lingkaran\n3.Persegi Panjang\n4.Segitiga\n5.Trapesium\n6.Jajar Genjang\n7.Layang-Layang atau Belah Ketupat\n");
                 scanf("%s",&op);

                 switch(op)
                 {
                 case '1':
                    {
                        printf ("Masukan Nilai Sisi = ");
                        scanf  ("%f",&x);
                        hasil   = x*x;
                        printf ("\nLuas Persegi dengan Sisi %.2f adalah %.2f\n\n",x,hasil);
                        break;
                    }
                 case '2':
                    {
                        printf ("Masukan Jari-Jari Lingkaran = ");
                        scanf  ("%f",&x);
                        hasil   = 3.14*pow(x,2);
                        printf ("\nLuas Lingkaran dengan Jari-Jari %.2f adalah %.2f\n\n",x,hasil);
                        break;
                    }
                 case '3':
                     {
                         printf ("Masukan Panjang = ");
                         scanf  ("%f",&x);
                         printf ("Masukan Lebar = ");
                         scanf  ("%f",&y);
                         hasil   = x*y;
                         printf ("\nLuas Persegi Panjang dengan Panjang %.2f dan Lebar %.2f adalah %.2f\n\n",x,y,hasil);
                         break;
                     }
                 case '4':
                    {
                         printf ("Masukan Alas = ");
                         scanf  ("%f",&x);
                         printf ("Masukan Tinggi = ");
                         scanf  ("%f",&y);
                         hasil   = (x*y)/2;
                         printf ("\nLuas Segitiga dengan Alas %.2f dan Tinggi %.2f adalah %.2f\n\n\n",x,y,hasil);
                         break;
                    }
                 case '5':
                    {
                        printf  ("Masukan Sisi Atas  = ");
                        scanf   ("%f",&x);
                        printf  ("Masukan Sisi Bawah = ");
                        scanf   ("%f",&y);
                        printf  ("Masukan Tinggi     = ");
                        scanf   ("%f",&z);
                        hasil   = ((x+y)*z)/2;
                        printf  ("\nLuas Trapesium dengan Sisi Atas %.2f , Sisi Bawah %.2f dan Tinggi %.2f adalah %.2f\n\n\n",x,y,z,hasil);
                        break;
                    }
                 case '6':
                    {
                        printf  ("Masukan Alas    = ");
                        scanf   ("%f",&x);
                        printf  ("Masukan Tinggi  = ");
                        scanf   ("%f",&y);
                        hasil   = x*y;
                        printf  ("\nLuas Jajar Genjang dengan Alas %.2f dan Tinggi %.2f adalah %.2f\n\n\n",x,y,hasil);
                        break;
                    }
                 case '7':
                    {
                        printf  ("Masukan Diagonal Pertama  = ");
                        scanf   ("%f",&x);
                        printf  ("Masukan Diagonal Kedua    = ");
                        scanf   ("%f",&y);
                        hasil   = (x*y)/2;
                        printf  ("\nLuas Layang-Layang atau Belah Ketupat dengan Diagonal %.2f dan %.2f adalah %.2f\n\n\n",x,y,hasil);
                        break;
                    }
                 }
                 break;
              }
       case 3:{
                 system("cls");
                 printf("\nMenghitung Volume\n\n");
                 printf("Pilihan :\n1.Kubus\n2.Balok\n3.Kerucut\n4.Tabung\n5.Bola\n");
                 scanf("%s",&op);

                 switch(op)
                 {
                 case '1':
                    {
                        printf ("Masukan Nilai Sisi = ");
                        scanf  ("%f",&x);
                        hasil   = x*x*x;
                        printf ("\nVolume Kubus dengan Sisi %.2f adalah %.2f\n\n",x,hasil);
                        break;
                    }
                 case '2':
                    {
                        printf ("Masukan Panjang = ");
                        scanf  ("%f",&x);
                        printf ("Masukan Lebar = ");
                        scanf  ("%f",&y);
                        printf ("Masukan Tinggi = ");
                        scanf  ("%f",&z);
                        hasil   = x*y*z;
                        printf ("\nVolume Balok dengan Panjang %.2f Lebar %.2f Tinggi %.2f adalah %.2f\n\n",x,y,z,hasil);
                        break;
                    }
                 case '3':
                     {
                         printf ("Masukan Jari-Jari = ");
                         scanf  ("%f",&x);
                         printf ("Masukan Tinggi = ");
                         scanf  ("%f",&y);
                         hasil   = (3.14*x*x*y)/3;
                         printf ("\nVolume Kerucut dengan Jari-Jari %.2f dan Tinggi %.2f adalah %.2f\n\n",x,y,hasil);
                         break;
                     }
                 case '4':
                    {
                         printf ("Masukan Jari-Jari = ");
                         scanf  ("%f",&x);
                         printf ("Masukan Tinggi = ");
                         scanf  ("%f",&y);
                         hasil   = 3.14*x*x*y;
                         printf ("\nVolume Tabung dengan Jari-Jari %.2f dan Tinggi %.2f adalah %.2f\n\n",x,y,hasil);
                         break;
                    }
                 case '5':
                    {
                        printf  ("Masukan Jari-Jari   = ");
                        scanf   ("%f",&x);
                        hasil   = 3.14*x*x*x;
                        printf  ("\nVolume Bola Dengan Jari-Jari %.2f adalah %.2f\n\n",x,hasil);
                        break;
                    }
                 }
                 break;
              }
       case 4:{
                system("cls");
                int a,b,c,D,x1,x2;
                printf("Menghitung dan Menentukan Akar");
                printf("Masukkan nilai a =");
                scanf("%d",&a);

                if(a<0)
                printf("Nilai a harus > 0\n");
                else
                {
                    printf("Masukkan nilai b =");
                    scanf("%d",&b);
                    printf("Masukkan nilai c =");
                    scanf("%d",&c);

                    if(a>0);
                    D = (b * b) - (4*a*c);
                    printf("Diskriminan = %d\n",D);

                    if(D>0)
                    {
                        printf("Akar Real\n");
                        x1 = (-b + sqrt(D)/(2*a));
                        printf("x1 = %d\n",x1);
                        x2 = (-b - sqrt(D)/(2*a));
                        printf("x2 = %d\n",x2);
                    }

                    else if(D==0)
                    {
                        printf("Akar Kembar\n\n");
                        x1 = (-b)/(2*a);
                        printf("x1 = %d\n",x1);
                    }
                    else if(D<0)
                    {
                        printf("Akar imajiner\n\n");
                    }
                    else
                    {
                        printf("Nilai A harus>0\n\n");
                    }
                }
                break;
            }
       case 5:{
                    system("cls");
                    printf("Menghitung FPB\n");
                    int bil_1,bil_2,a,b,x,d,kecil;
                    printf("Masukkan bilangan pertama = ");
                    scanf("%d",&bil_1);
                    printf("Masukkan bilangan kedua   = ");
                    scanf("%d",&bil_2);

                    if(bil_1>bil_2)
                                kecil=bil_2;
                        else
                                kecil=bil_1;

                    for(x=1; x<=kecil; x++)
                        {
                            a = bil_1 % x;
                            b = bil_2 % x;

                            if(a==0 && b==0)
                            {
                                d=x;
                            }
                        }
                        printf("FPB dari %d dan %d adalah %d\n\n",bil_1,bil_2,d);
                    break;
                }
       case 6:{
                    system("cls");
                    printf("Menghitung KPK\n");
                    int u,v,a,b;
                    printf("Masukan Nilai Pertama = ");
                    scanf("%d",&a);
                    printf("Masukan Nilai Kedua   = ");
                    scanf("%d",&b);
                    u=a;v=b;
                    while(u!=v)
                    {
                        if(u<v)
                        u=u+a;
                        else
                        v=v+b;
                    }
                        printf("KPK dari %d dan %d adalah %d\n\n",a,b,u);
                        break;
                }
       case 7:{
                 system("cls");
                 printf("\nMenghitung Sin,Cos,Tan\n\n");
                 printf("Pilihan Menghitung: 1=Sin, 2=Cos, 3=Tan\n");
                 scanf("%s",&op);

                 switch(op)
                 {
                 case '1':
                    {
                        printf ("Menghitung Sin\n");
                        printf ("Masukan Angka = ");
                        scanf  ("%f",&x);
                        hasil   =sin((3.14*x)/180);
                        printf ("SIN %.2f = %f\n\n",x,hasil);
                        break;
                    }
                 case '2':
                    {
                        printf ("Menghitung Cos\n");
                        printf ("Masukan Angka :");
                        scanf  ("%f",&x);
                        hasil   =cos((3.14*x)/180);
                        printf ("COS %.2f = %f\n\n\n",x,hasil);
                        break;
                    }
                 case '3':
                     {
                        printf ("Menghitung Tan\n");
                        printf ("Masukan Angka = ");
                        scanf  ("%f",&x);
                        hasil   =tan((3.14*x)/180);
                        printf ("TAN %.2f = %.2f\n\n\n",x,hasil);
                        break;
                     }
                 }
                 break;
                }
       case 8:{
                system("cls");
                float Rerata,Jumlah;
                int n;

                printf("Berapa variabel yang akan dihitung ? ");
                scanf("%d",&n);

                Jumlah = 0;
                for(x=1;x<=n;x++)
                {
                    printf("Masukkan angka = ");
                    scanf("%f",&y);
                    Jumlah = Jumlah + y;
                }

                Rerata = Jumlah / n;
                printf("Rata-Rata adalah %.2f\n",Rerata);
                break;
               }
       case 9:{
                 system("cls");
                 float Rerata,Jumlah,x,sb;
                 int i,j,n,A;

                 printf("Berapa variabel yang akan dihitung ? ");
                 scanf("%d",&n);

                 Jumlah = 0;
                 for(i=1;i<=n;i++)
                 {
                    printf("Masukkan angka = ");
                    scanf("%f",&x);
                    Jumlah = Jumlah + x;
                 }
                    Rerata = Jumlah / n;
                    Jumlah = 0;
                    for (j=0; j<n; j++)
                    {
                        A = (x - Rerata)*(x - Rerata);
                        Jumlah = Jumlah + A;
                    }
                        sb = sqrt(Jumlah/(n-1));
                        printf("Simpangan baku = %2.2f\n", sb);
                        break;
                    }
       case 10:{
                system("cls");
                int a[10][10],b[10][10],c[10][10],m,n,i,j;
                m=2;
                n=2;
                printf("Menjumlahkan Matriks 2x2\n\n");
                printf("NB : [1,1] = Kiri Atas\n     [1,2] = Kanan Atas\n     [2,1] = Kiri Bawah\n     [2,2] = Kanan Bawah\n\n");
                printf("Masukan Nilai Matriks Pertama\n");
                for(i=1;i<=m;i++)
                {
                    for(j=1;j<=n;j++)
                    {
                        printf("Masukan Nilai Matriks ke [%d][%d] = ",i,j);
                        scanf("%d",&a[i][j]);
                    }
                }

                printf("\nMasukan Nilai Matriks Kedua\n");
                for(i=1;i<=m;i++)

                {
                for(j=1;j<=n;j++)
                    {
                        printf("Masukan Nilai Matriks ke [%d][%d] = ",i,j);
                        scanf("%d",&b[i][j]);
                    }
                }
                printf("\nHasil Matriks A + B adalah \n");
                c[1][1] = a[1][1]+b[1][1];
                c[1][2] = a[1][2]+b[1][2];
                c[2][1] = a[2][1]+b[2][1];
                c[2][2] = a[2][2]+b[2][2];

                printf(" %d",c[1][1]);
                printf(" %d",c[1][2]);
                printf("\n");
                printf(" %d",c[2][1]);
                printf(" %d\n\n",c[2][2]);
                break;
                }
       case 11:{
                system("cls");
                int a[10][10],b[10][10],c[10][10],m,n,i,j;
                m=2;
                n=2;
                printf("Mengalikan Matriks 2x2\n\n");
                printf("NB : [1,1] = Kiri Atas\n     [1,2] = Kanan Atas\n     [2,1] = Kiri Bawah\n     [2,2] = Kanan Bawah\n\n");
                printf("Masukan Nilai Matriks Pertama\n");
                for(i=1;i<=m;i++)
                {
                    for(j=1;j<=n;j++)
                    {
                        printf("Masukan Nilai Matriks ke [%d][%d] = ",i,j);
                        scanf("%d",&a[i][j]);
                    }
                }

                printf("\nMasukan Nilai Matriks Kedua\n");
                for(i=1;i<=m;i++)

                {
                for(j=1;j<=n;j++)
                    {
                        printf("Masukan Nilai Matriks ke [%d][%d] = ",i,j);
                        scanf("%d",&b[i][j]);
                    }
                }
                printf("\nHasil Matriks A + B adalah \n");
                c[1][1] = ((a[1][1]*b[1][1])+(a[1][2]*b[2][1]));
                c[1][2] = ((a[1][1]*b[1][2])+(a[1][2]*b[2][2]));
                c[2][1] = ((a[2][1]*b[1][1])+(a[2][2]*b[2][1]));
                c[2][2] = ((a[2][1]*b[1][2])+(a[2][2]*b[2][2]));

                printf(" %d",c[1][1]);
                printf(" %d",c[1][2]);
                printf("\n");
                printf(" %d",c[2][1]);
                printf(" %d\n\n",c[2][2]);
                break;
                }
       case 12:{
                    system("cls");
                    printf  ("Menghitung Integral Sederhana\n\n");
                    printf  ("Bentuk Umum (ax^4)+(bx^3)+(cx^2)+(dx)+(e)\n");
                    printf  ("Masukan nilai a = ");
                    scanf   ("%f",&u);
                    printf  ("Masukan nilai b = ");
                    scanf   ("%f",&v);
                    printf  ("Masukan nilai c = ");
                    scanf   ("%f",&w);
                    printf  ("Masukan nilai d = ");
                    scanf   ("%f",&x);
                    printf  ("Masukan nilai e = ");
                    scanf   ("%f",&y);
                    printf  ("\n\nFungsinya Adalah (%.2fx^4)+(%.2fx^3)+(%.2fx^2)+(%.2fx)+(%.2f)\n\n",u,v,w,x,y);

                    a=u/5;
                    b=v/4;
                    c=w/3;
                    d=x/2;
                    printf("Integralnya adalah : (%.2fx^5)+(%.2fx^4)+(%.2fx^3)+(%.2fx^2)+(%.2fx)\n\n",a,b,c,d,y);
                    break;
                }
       case 13:{
                    system("cls");
                    printf  ("Menghitung Turunan Sederhana\n\n");
                    printf  ("Bentuk Umum (ax^4)+(bx^3)+(cx^2)+(dx)+(e)\n");
                    printf  ("Masukan nilai a = ");
                    scanf   ("%f",&u);
                    printf  ("Masukan nilai b = ");
                    scanf   ("%f",&v);
                    printf  ("Masukan nilai c = ");
                    scanf   ("%f",&w);
                    printf  ("Masukan nilai d = ");
                    scanf   ("%f",&x);
                    printf  ("Masukan nilai e = ");
                    scanf   ("%f",&y);
                    printf  ("\n\nFungsinya Adalah (%.2fx^4)+(%.2fx^3)+(%.2fx^2)+(%.2fx)+(%.2f)\n\n",u,v,w,x,y);

                    a=u*4;
                    b=v*3;
                    c=w*2;
                    printf("Turunannya adalah : (%.2fx^3)+(%.2fx^2)+(%.2fx)+(%.2fx)\n\n",a,b,c,x);
                    break;
                }
                    default :

              printf ("Anda Salah Memilih Nomor Pilihan ! (Masukan Nomor 1-13)\n\n\n");
       }
}
