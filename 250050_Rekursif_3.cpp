/*
Nama Program    : Mencetak faktorial
Nama            : Jovanic Adriel Harjanto
NPM             : 140810250050
Tanggal Buat    : 1 Oktober 2025
Deskripsi       : Mencetak nilai faktorial n menggunakan fungsi rekursif
Waktu           : 5 menit 12 detik
*/

#include <iostream>
using namespace std;

long long faktorial(int n) {
    if (n == 0) return 1;
    else if (n == 1) return 1;
    else return n * faktorial(n - 1);
}

int main() {
    int n;
    cout << "Masukkan bilangan: ";
    cin >> n;
    cout << "Faktorial dari " << n << " adalah " << faktorial(n);
    return 0;
}
