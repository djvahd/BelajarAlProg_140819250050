/*
Nama Program    : Mencetak pangkat
Nama            : Jovanic Adriel Harjanto
NPM             : 140810250050
Tanggal Buat    : 1 Oktober 2025
Deskripsi       : Mencetak hasil angka x pangkat n menggunakan fungsi rekursif
Waktu           : 6 menit 32 detik
*/

#include <iostream>
using namespace std;

long long pangkat(int x, int n) {
    if (n == 0) return 1;
    if (n == 1) return x;
    return x * pangkat(x, n - 1);
}

int main() {
    long long x, n;
    cout << "Masukkan angka dan pangkat: ";
    cin >> x >> n;
    cout << pangkat(x, n);
    return 0;
}
