/*
Nama Program    : Membalik kalimat
Nama            : Jovanic Adriel Harjanto
NPM             : 140810250050
Tanggal Buat    : 1 Oktober 2025
Deskripsi       : Membalik kalimat yang diberikan
Waktu           : 10 menit 52 detik
*/

#include <iostream>
using namespace std;

void balik(char t[], int z) {
    cout << t[z];
    if (z != 0) balik(t, z - 1);
}

int main() {
    char t[100];
    cout << "Masukkan teks: ";
    cin.getline(t, 100);
    
    int z = 0;
    while (t[z] != '\0') {
        z++;
    }

    balik(t, z - 1);
    return 0;
}
