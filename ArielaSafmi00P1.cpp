#include <iostream>
#include <string>

class Robot {
    // Bagian private hanya dapat diakses oleh member functions dalam kelas ini
private:
    std::string nama;
    int umur;
    std::string mbti;

    // Bagian public dapat diakses dari luar kelas
public:
    // Konstruktor untuk menginisialisasi objek Robot
    Robot(std::string n, int u, std::string m) {
        nama = n;
        umur = u;
        mbti = m;
    }

    // Setter untuk mengatur nama
    void setNama(std::string n) {
        nama = n;
    }

    // Getter untuk mendapatkan nama
    std::string getNama() {
        return nama;
    }

    // Setter untuk mengatur umur
    void setUmur(int u) {
        umur = u;
    }

    // Getter untuk mendapatkan umur
    int getUmur() {
        return umur;
    }
    
    // Setter untuk mengatur mbti 
    void setMbti(std::string m) {
        mbti = m;
    }

    // Getter untuk mendapatkan mbti 
    std::string getMbti() {
        return mbti; 
    }

    // Metode untuk memperkenalkan_diri 
    void tampilkanInfo() {
        std::cout << "Nama: " << nama << ", Umur: " << umur << ", mbti: " << mbti << std::endl;
    }
};

int main() {
    // Membuat objek r1
    Robot r1("alex", 20, "istp");
    

    // Menggunakan metode public untuk mengakses data private
    std::cout << "Informasi awal Mahasiswa:" << std::endl;
    r1.tampilkanInfo();

   std::cout << "Nama: " << r1.getNama() ;
   std::cout << "Umur: " << r1.getUmur() ; 
   std::cout << "Mbti: " << r1.getMbti() ; 

    return 0;
}