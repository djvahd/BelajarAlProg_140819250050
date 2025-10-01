/*
Nama Program    : Menampilkan fibonacci
Nama            : Jovanic Adriel Harjanto
NPM             : 140810250050
Tanggal Buat    : 1 Oktober 2025
Deskripsi       : Menampilkan angka fibonacci pada urutan yang diminta
Waktu           : 9 menit 22 detik
*/

#include <iostream>
using namespace std;

long long fibo(int n) {
    if (n == 1) return 1;
    else if (n == 2) return 1;
    else return fibo(n - 1) + fibo(n - 2);
}

int main() {
    int n;
    cout << "Masukkan bilangan ke-n: ";
    cin >> n;
    cout << "Fibonacci ke-" << n << " adalah " << fibo(n);
    return 0;
}
