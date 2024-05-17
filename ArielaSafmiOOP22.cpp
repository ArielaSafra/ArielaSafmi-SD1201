#include <iostream>
#include <string>

class Penjualan_Kue {
    // Bagian private hanya dapat diakses oleh member functions dalam kelas ini
private:
    std::string nama;
    int banyak;
    std::string jenis;

    // Bagian public dapat diakses dari luar kelas
public:
    // Konstruktor untuk menginisialisasi objek Penjualan_kue
    Kue(std::string n, int b, std::string j) {
        nama = n;
        banyak = b;
        jenis = j; 
    }

    // Setter untuk mengatur nama
    void setNama(std::string n) {
        nama = n;
    }

    // Getter untuk mendapatkan nama
    std::string getNama() {
        return nama;
    }

    // Setter untuk mengatur banyak
    void setBanyak(int b) {
        banyak = b;
    }

    // Getter untuk mendapatkan banyak
    int getBanyak() {
        return banyak;
    }

    // Metode untuk menampilkan Penjualan_Kue
    void tampilkanInfo() {
        std::cout << "Nama: " << nama << ", Banyak: " << banyak << ",Jenis" << jenis << std::endl;
    }
};

int main() {
    
    // Membuat objek Penjualan_kue k1 
    Kue k1("Croisant", 5, "pastry"); 
    k1.kue();

    // Membuat objek Penjualan_kue k2
    Kue k2("Pretzel", 8, "roti");
    k2.kue();

    return 0;
}
