#ifndef ALATLABORATORIUM_HPP
#define ALATLABORATORIUM_HPP

#include <string>
using namespace std;

class AlatLaboratorium {
private:
    string nama;
    string kategori;
    int jumlah;

public:
    AlatLaboratorium(string n, string k, int j);

    void tampilkanInfo() const;
    void tambahJumlah(int n);
    void kurangiJumlah(int n);

    string getNama() const {
        return nama;
    }
    string getKategori() const {
        return kategori;
    }
    int getJumlah() const {
        return jumlah;
    }
};

#endif
