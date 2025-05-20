#include <iostream>
using namespace std;

class Barang {
private:
    string namaBarang;
    string kodeBarang;

public:
    // Constructor berparameter
    Barang(string nama = "", string kode = "") {
        namaBarang = nama;
        kodeBarang = kode;
    }

   
    void setBarang(string nama, string kode) {
        namaBarang = nama;
        kodeBarang = kode;
    }

    
    void tampilkanInfo() {
        cout << "Nama Barang : " << namaBarang << endl;
        cout << "Kode Barang : " << kodeBarang << endl;
    }
};

int main() {
    const int jumlahBarang = 3; 
    Barang daftarBarang[jumlahBarang];

    string nama, kode;

    
    for (int i = 0; i < jumlahBarang; i++) {
        cout << "\nBarang ke-" << i + 1 << endl;
        cout << "Masukkan Nama Barang : ";
        getline(cin, nama);
        cout << "Masukkan Kode Barang : ";
        getline(cin, kode);

        daftarBarang[i].setBarang(nama, kode);
    }

   
    cout << "\n=== Daftar Barang ===\n";
    for (int i = 0; i < jumlahBarang; i++) {
        cout << "\nBarang ke-" << i + 1 << endl;
        daftarBarang[i].tampilkanInfo();
    }

    return 0;
}