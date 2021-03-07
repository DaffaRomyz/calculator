#include <stdio.h>
// DAFFA ROMYZ AUFA 16520068


// Tugas 2 Programming
// Program Kalkulator
// program kalkulator yang mampu menghitung penjumlahan, pengurangan, perkalian, pembagian,
// perpangkatan (pangkat>1), dan integral tentu menggunakan pendekatan riemann metode trapesium.


// Prototype program
float f (float x)
// fungsi x untuk integral. fungsi x^2 sebagai test case
{
// Kamus Lokal
// float x

// Algoritma
return(x*x);}  // MASUKAN FUNGSI YANG AKAN DI-INTEGRALKAN KESINI


float plus (float x, float y)
// fungsi penjumlahan//
{
// KAMUS LOKAL//
//float x,y

// ALGORITMA
return(x+y);}


float minus (float x, float y)
// fungsi pengurangan//
{
// KAMUS LOKAL//
//float x,y

// ALGORITMA
return(x-y);}


float times (float x, float y)
// fungsi perkalian//
{
// KAMUS LOKAL//
//float x,y

// ALGORITMA
return(x*y);}


float divide (float x, float y)
// fungsi pembagian//
{
// KAMUS LOKAL//
//float x,y

// ALGORITMA
return(x/y);}


float power (float x, float y)
// fungsi pangkat//
{
// KAMUS LOKAL//
//float x,y
float z;
int i;

// ALGORITMA
z = 1;
if (x == 0 && y == 0) {
    printf("tidak terdefinisi");
}
else {
    for (i = 0; i < y ;i = i + 1) {
        z = z * x ;}}
return(z);}


float integral (float a, float b, int n)
// fungsi integral//
{
// KAMUS LOKAL//
//float x,y
//int n
float dx,x,t;
int i;

// ALGORITMA
t = 0;
if (a <= b) {dx = (b-a) / n;}
else {dx = (a-b) / n;}

if (dx >=0) {dx = dx;}
else {dx = -1 * dx;}

for (i = 1; i < n; i = i + 1) {
    x = i * dx + a;
    t = t + f(x);
}
return((dx/2) * (f(a) + f(b) + 2 * t));}



// KAMUS
// x, y, i : int
// year : array of int



// Algoritma
int main () {
    int o;
    float a;
    float b;
    float c;
    int i;
    printf("Masukan operasi yang akan dilakukan\n");
    printf("1 untuk penjumlahan\n");
    printf("2 untuk pengurangan\n");
    printf("3 untuk perkalian\n");
    printf("4 untuk pembagian\n");
    printf("5 untuk perpangkatan\n");
    printf("6 untuk integral\n");
    scanf("%d",&o);
    if (o == 1) {
        printf("Masukan a : \n");
        scanf("%f",&a);
        printf("Masukan b : \n");
        scanf("%f",&b);
        c = plus(a,b);
        printf("Hasil a + b : %.2f", c);}
    else if (o == 2) {
        printf("Masukan a : \n");
        scanf("%f",&a);
        printf("Masukan b : \n");
        scanf("%f",&b);
        c = minus(a,b);
        printf("Hasil a - b : %.2f", c);}
    else if (o == 3) {
        printf("Masukan a : \n");
        scanf("%f",&a);
        printf("Masukan b : \n");
        scanf("%f",&b);
        c = times(a,b);
        printf("Hasil a * b : %.2f", c);}
    else if (o == 4) {
        printf("Masukan a : \n");
        scanf("%f",&a);
        printf("Masukan b : \n");
        scanf("%f",&b);
        c = divide(a,b);
        printf("Hasil a / b : %.2f", c);}
    else if (o == 5) {
        printf("Masukan a : \n");
        scanf("%f",&a);
        printf("Masukan b : \n");
        scanf("%f",&b);
        c = power(a,b);
        printf("Hasil a ^ b: %.2f", c);}
    else if (o == 6) {
        float inte;
        printf("Masukan batas bawah : \n");
        scanf("%f",&a);
        printf("Masukan batas atas : \n");
        scanf("%f",&b);
        printf("Masukan jumlah trapesium : \n");
        scanf("%f",&c);
        inte = integral(a,b,c);
        printf("Hasil integral: %f", inte);}
}