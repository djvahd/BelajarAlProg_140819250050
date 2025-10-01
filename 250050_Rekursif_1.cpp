/*
Nama Program    : Mengubah Desimal ke Biner
Nama            : Jovanic Adriel Harjanto
NPM             : 140810250050
Tanggal Buat    : 1 Oktober 2025
Deskripsi       : Mengubah desimal ke biner dengan fungsi rekursi
Waktu           : 8 menit 50 detik
*/

#include <iostream>
using namespace std;

void desimalKeBiner(int n) {
    if (n > 1) desimalKeBiner(n / 2);
    cout << n % 2;
}

int main() {
    int angka;
    cout << "Masukkan angka desimal: ";
    cin >> angka;

    cout << "Bentuk biner: ";
    desimalKeBiner(angka);
    cout << endl;

    return 0;
}
