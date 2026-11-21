#include "AlatLaboratorium.hpp"
#include <iostream>
using namespace std;

AlatLaboratorium::AlatLaboratorium(string n, string k, int j) {
    nama = n;
    kategori = k;
    jumlah = (j < 0) ? 0 : j;
}

void AlatLaboratorium::tampilkanInfo() const {
    cout << "Nama Alat : " << nama << endl;
    cout << "Kategori  : " << kategori << endl;
    cout << "Jumlah    : " << jumlah << " unit" << endl;
}

void AlatLaboratorium::tambahJumlah(int n) {
    if (n > 0) {
        jumlah += n;
        cout << "Berhasil menambah " << n << " unit " << nama << endl;
    } else {
        cout << "Peringatan error" << endl;
        cout << "Jumlah penambahan harus lebih dari 0" << endl;
    }
}

void AlatLaboratorium::kurangiJumlah(int n) {
    if (n <= 0) {
        cout << "Error" << endl;
        cout << "Jumlah pengurangan harus lebih dari 0" << endl;
    } else if (n > jumlah) {
        cout << "Stok " << nama << " tidak mencukupi||tersedia: " << jumlah << endl;
    } else {
        jumlah -= n;
        cout << "Berhasil mengurangi " << n << " unit " << nama << "." << endl;
    }
}
