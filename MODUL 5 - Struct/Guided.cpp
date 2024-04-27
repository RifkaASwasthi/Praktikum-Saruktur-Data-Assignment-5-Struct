#include <iostream>

using namespace std;

// Mendefinisikan struktur buku
struct buku {
    string judulBuku[5];
    string pengarang[5];
    string penerbit[5];
    int tebalHalaman[5];
    int hargaBuku[5];
};

int main() {
    // Mendeklarasikan variabel favorit dengan tipe buku
    buku favorit;

    // Mengisi data ke dalam variabel favorit
    favorit.judulBuku[0] = "The Alpha Girl's Guide";
    favorit.pengarang[0]= "Henry Manampiring";
    favorit.penerbit[0] = "Gagas Media";
    favorit.tebalHalaman[0]= 253;
    favorit.hargaBuku[0]= 79000;

    favorit.judulBuku[1] = "Berjuta Rasanya";
    favorit.pengarang[1]= "Tere Liye";
    favorit.penerbit[1] = "GraMedia";
    favorit.tebalHalaman[1]= 205;
    favorit.hargaBuku[1]= 50.000;

    favorit.judulBuku[2] = "Sepotong Hati Yang Baru";
    favorit.pengarang[2]= "Tere Liye";
    favorit.penerbit[2] = "GraMedia";
    favorit.tebalHalaman[2]= 206;
    favorit.hargaBuku[2]= 50.000;

    favorit.judulBuku[3] = "Hafalan Shalat Delisa";
    favorit.pengarang[3]= "Tere Liye";
    favorit.penerbit[3] = "GraMedia";
    favorit.tebalHalaman[3]= 266;
    favorit.hargaBuku[3]= 57.000;

    favorit.judulBuku[4] = "Moga Bunda Disayang Allah";
    favorit.pengarang[4]= "Tere Liye";
    favorit.penerbit[4] = "GraMedia";
    favorit.tebalHalaman[4]= 246;
    favorit.hargaBuku[4]= 59.000;

    // Menampilkan informasi buku favorit
    cout << "Data Buku:\n";
    for (int i = 0; i< 5; i++){
        cout << "\tBuku Favorit Saya" << i + 1 << "\n" ;
        cout << "Judul Buku : " << favorit.judulBuku[i] << "\n";
        cout << "\tPengarang : " << favorit.pengarang[i]<< "\n";
        cout << "\tPenerbit : " << favorit.penerbit[i]<<"\n";
        cout << "\tTebal Halaman: " << favorit.tebalHalaman[i] << " halaman" << "\n";
        cout << "\tHarga Buku : Rp " << favorit.hargaBuku[i] <<"\n";
    }
    
 
    return 0;
}