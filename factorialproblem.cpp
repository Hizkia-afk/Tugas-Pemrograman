/*
 Penjelasan Program:
 Program ini menghitung nilai fungsi rekursif khusus berdasarkan masukan angka 'n' 
 dengan menerapkan beberapa kondisi percabangan:
  
 1. Kasus Dasar (Base Case):
    Jika nilai n kurang dari atau sama dengan 1 (n <= 1), fungsi langsung mengembalikan nilai 1.
 
 2. Kondisi Genap (Even Case):
    Jika n adalah bilangan genap (n % 2 == 0), fungsi mengembalikan hasil perkalian 
    antara (n / 2) dengan hasil pemanggilan fungsi rekursif sebelumnya yaitu fac(n - 1).
 
 3. Kondisi Ganjil (Odd Case):
    Jika n adalah bilangan ganjil (n % 2 != 0), fungsi mengembalikan hasil perkalian 
    antara n dengan hasil pemanggilan fungsi rekursif sebelumnya yaitu fac(n - 1).
 */

#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung nilai sesuai aturan di atas
int fac(int n){
    if(n <= 1){
        return 1;
    } else if(n % 2 == 0){
        return (n / 2) * fac(n - 1);
    } else {
        return n * fac(n - 1);
    }
}

int main(){
    int i;
    cout << "Masukkan angka : ";
    cin >> i;
    cout << "Hasil : " << fac(i) << endl;

    return 0;
}