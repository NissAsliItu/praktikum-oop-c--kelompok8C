#ifndef ALATLAB_HPP 
#define ALATLAB_HPP 

#include <string>
using namespace std;

class AlatLabotarium{
    private:
        string nama;
        string kategori;
        int jumlah;
    
    public:
        AlatLabotarium(string n, string k, int j);
        void tampilkaninfo();
        void tambahjumblah(int n);
        void kurangijumlah(int n);

        string getnama() const{
            return nama;
        }
        string getkategori() const{
            return kategori;
        }
        int getjumlah() const{
            return jumlah;
        }
};












#endif