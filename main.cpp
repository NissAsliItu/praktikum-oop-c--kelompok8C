#include <iostream>
#include <vector>
#include <string>
#include "AlatLaboratorium.hpp"

using namespace std;

int main() {
    vector<AlatLaboratorium> daftarAlat;

    daftarAlat.push_back(AlatLaboratorium("Mikroskop", "Optik", 5));
    daftarAlat.push_back(AlatLaboratorium("Tabung Reaksi", "Gelas", 20));
    daftarAlat.push_back(AlatLaboratorium("Multimeter", "Elektronik", 8));

    int pilihan;
    do {
        cout << "1. Tampilkan Daftar Semua Alat" << endl;
        cout << "2. Tambah Alat Baru" << endl;
        cout << "3. Tambah Stok Alat" << endl;
        cout << "4. Kurangi Stok Alat" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;
        cin.ignore();

        if (pilihan == 1) {
            cout << "\nDAFTAR ALAT LABORATORIUM" << endl;
            if (daftarAlat.empty()) {
                cout << "Belum ada data alat." << endl;
            } else {
                for (size_t i = 0; i < daftarAlat.size(); i++) {
                    cout << "[" << i + 1 << "] ";
                    daftarAlat[i].tampilkanInfo();
                }
            }
        } else if (pilihan == 2) {
            string nama, kategori;
            int jumlah;
            cout << "Masukkan nama alat     : ";
            getline(cin, nama);
            cout << "Masukkan kategori alat : ";
            getline(cin, kategori);
            cout << "Masukkan jumlah awal   : ";
            cin >> jumlah;

            daftarAlat.push_back(AlatLaboratorium(nama, kategori, jumlah));
            cout << "Alat baru berhasil ditambahkan!" << endl;

        } else if (pilihan == 3 || pilihan == 4) {
            if (daftarAlat.empty()) {
                cout << "Daftar alat masih kosong." << endl;
                continue;
            }

            for (size_t i = 0; i < daftarAlat.size(); i++) {
                cout << i + 1 << ". " << daftarAlat[i].getNama()
                     << " (Stok: " << daftarAlat[i].getJumlah() << ")" << endl;
            }

            int idx, jml;
            cout << "Pilih nomor alat: ";
            cin >> idx;

            if (idx < 1 || idx > (int)daftarAlat.size()) {
                cout << "Nomor alat tidak valid!" << endl;
            } else {
                cout << "Masukkan jumlah: ";
                cin >> jml;
                if (pilihan == 3) {
                    daftarAlat[idx - 1].tambahJumlah(jml);
                } else {
                    daftarAlat[idx - 1].kurangiJumlah(jml);
                }
            }
        } else if (pilihan != 0) {
            cout << "Pilihan menu tidak tersedia." << endl;
        }

    } while (pilihan != 0);

    cout << "Program selesai." << endl;
    return 0;
}
