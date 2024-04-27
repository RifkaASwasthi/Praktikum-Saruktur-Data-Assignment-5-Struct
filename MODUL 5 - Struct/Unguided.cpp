#include <iostream>

using namespace std;

// Mendefinisikan struktur buku
struct buku {
    string judulBuku;
    string pengarang;
    string penerbit;
    int tebalHalaman;
    int hargaBuku;
};

int main() {
    const int JUMLAH_BUKU = 5;
    buku daftar_buku[JUMLAH_BUKU];

    // Mengisi data pada array struct daftar_buku
    for (int i = 0; i < JUMLAH_BUKU; i++) {
        cout << "Masukkan judul buku " << i+1 << ": ";
        getline(cin, daftar_buku[i].judulBuku);
        cout << "Masukkan penulis buku " << i+1 << ": ";
        getline(cin, daftar_buku[i].pengarang);
        cout << "Masukkan penerbit " << i+1 << ": ";
        cin >> daftar_buku[i].penerbit;
        cout << "Masukkan tebal halaman " << i+1 << ": ";
        cin >> daftar_buku[i].tebalHalaman;
        cout << "Masukkan harga buku " << i+1 << ": ";
        cin >> daftar_buku[i].hargaBuku;

        cin.ignore();
    }
    // Menampilkan data dari array struct daftar_buku
    cout << "\nData Buku:\n";
    for (int i = 0; i < JUMLAH_BUKU; i++) {
        cout << "Buku " << i + 1 << "\n";
        cout << "Judul buku: " << daftar_buku[i].judulBuku << "\n";
        cout << "Pengarang: " << daftar_buku[i].pengarang << "\n";
        cout << "Penerbit: " << daftar_buku[i].penerbit << "\n";
        cout << "Tebal Halaman: " << daftar_buku[i].tebalHalaman << "\n\n";
        cout << "Harga: " << daftar_buku[i].hargaBuku << "\n\n";
    }

    
 
    return 0;
}