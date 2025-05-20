#include <iostream>
using namespace std;

class Barang {
private:
    string namaBarang;
    string kodeBarang;

public:
    
    Barang(string nama, string kode) {
        namaBarang = nama;
        kodeBarang = kode;
    }

    
    void tampilkanInfo() {
        cout << "Nama Barang : " << namaBarang << endl;
        cout << "Kode Barang : " << kodeBarang << endl;
        
    }
};

int main() {
   
    Barang barang1("Meja", "PRD01");
    
    
    barang1.tampilkanInfo();

    return 0;
}