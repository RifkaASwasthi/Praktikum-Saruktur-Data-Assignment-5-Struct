# <h1 align="center">Laporan Praktikum Modul Struct</h1>
<p align="center">Rifka Annisa Swasthi</p>

## Dasar Teori
Srtuktur data adalah langkah-langkah yang dipilih dalam penyusunan intruksi algortima agar mendapatkan hasil yang seefisian mungkin. Bberapa algortima unhm termasuk algorima pencarian, algoritma pengurutan dan algorima grafik. Struktur Dasar Algorima dibagi menjadi 3 yaitu sequeantial, branching dan looping.

1. Algorima Sekueansial 

Algorima ini menggunakan tahapan atau sequeantial yang dilakukan berurutan sesuai urutan dari penulisnya.

2. Algoritma Percabangan 

Algoritma uni digunakan ketika suatu kondisi fumana kerika itu ada satu atau beberapa aksi denfan pilihan yang kenih dari satu atau banyak.

3. Algoritma Pengulangan

Algortima ini menlakukan perulangan terus menerus sehingga didapatkan hasil yang diinginkan [1]

Pemilihan struktur data yang tepat dapat sangat pentig dalam pengembangan perangkat lunak, contoh dari struktur data umum meliputi array, linked list, stack, queue, tree, graph, hash table.

Pemahaman algoritma dan struktur data memiliki peran yang sangat penting dalam pengembangan perangkat lunak karena dapat mengefisiensikan kinerja.skalabilitas, pemecahan masalah, pengembangan perangkat lunak yang baik, peningkatan kemampuan pemrograman. [2]




## Guided 

### 1. Buatlah sebuah struktur dengan nama buku yang berisi judul_buku,pengarang, penerbit, tebal_halaman, harga_buku. Isi dengan nilai kemudian tampilkan.

```C++
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
    // Mendeklarasikan variabel favorit dengan tipe buku
    buku favorit;

    // Mengisi data ke dalam variabel favorit
    favorit.judulBuku = "The Alpha Girl's Guide";
    favorit.pengarang = "Henry Manampiring";
    favorit.penerbit = "Gagas Media";
    favorit.tebalHalaman = 253;
    favorit.hargaBuku = 79000;

    // Menampilkan informasi buku favorit
    cout << "\tBuku Favorit Saya" << endl;
    cout << "\tJudul Buku : " << favorit.judulBuku << endl;
    cout << "\tPengarang : " << favorit.pengarang << endl;
    cout << "\tPenerbit : " << favorit.penerbit << endl;
    cout << "\tTebal Halaman: " << favorit.tebalHalaman << " halaman" << endl;
    cout << "\tHarga Buku : Rp " << favorit.hargaBuku << endl;
 
    return 0;
}

```
Kode di atas digunakan untuk mendefinisikan sebuah struktur bernama buku yang berisi judulbuku, pengarang, penerbit, tebalhalaman, dan harga buku, kemudina mendeklarasikan variabel favorit dengan tipe data buku untuk menyimpan informasi tentang buku favorit. 

### 2. Buatlah sebuah struktur dengan skema seperti dibawah, isi dengan nilai kemudian jalankan.


```C++
#include <iostream>
using namespace std;

struct hewan {
    string namaHewan;
    string jenisKelamin;
    string caraBerkembangbiak;
    string alatPernafasan;
    string tempatHidup;
    bool Karnivora;
};

struct hewanDarat {
    int jumlahKaki;
    bool menyusui;
    string suara;
};

struct hewanLaut {
    string bentukSirip;
    string bentukPertahananDiri;
};

int main() {
    hewanDarat kelinci; // Menggunakan tipe data hewanDarat untuk kelinci
    kelinci.jumlahKaki = 4;
    kelinci.menyusui = true;
    kelinci.suara = "Citcit";

    hewanLaut ikan; // Menggunakan tipe data hewanLaut untuk ikan
    ikan.bentukSirip = "Sirip ekor";
    ikan.bentukPertahananDiri = "Sisik";

    hewan serigala; // Tetap menggunakan tipe data hewan untuk serigala
    serigala.namaHewan = "Serigala";
    serigala.jenisKelamin = "Jantan";
    serigala.caraBerkembangbiak = "Melahirkan";
    serigala.alatPernafasan = "Paru-paru";
    serigala.tempatHidup = "Hutan terbuka";
    serigala.Karnivora = true;

    cout << "\t\tHewan" << endl;
    cout << "\t" << serigala.namaHewan << endl;
    cout << "\tJenis kelamin : " << serigala.jenisKelamin << endl;
    cout << "\tCara berkembangbiak : " << serigala.caraBerkembangbiak << endl;
    cout << "\tAlat pernafasan : " << serigala.alatPernafasan << endl;
    cout << "\tTempat hidup : " << serigala.tempatHidup << endl;
    cout << "\tKarnivora : " << (serigala.Karnivora ? "Yes" : "No") << endl << endl;

    cout << "\t\tHewan Darat" << endl;
    cout << "\tKelinci" << endl;
    cout << "\tJumlah kaki : " << kelinci.jumlahKaki << endl;
    cout << "\tMenyusui : " << (kelinci.menyusui ? "Yes" : "No") << endl;
    cout << "\tSuara : " << kelinci.suara << endl << endl;

    cout << "\t\tHewan Laut" << endl;
    cout << "\tIkan" << endl;
    cout << "\tBentuk sirip : " << ikan.bentukSirip << endl;
    cout << "\tBentuk pertahanan diri: " << ikan.bentukPertahananDiri << endl;

    return 0;
}

```
Kode di atas digunakan untuk mendefinisikan beberapa struktur data yang merepresentasikan informasi tentang hewan, dengan menggunakan 2 struct untuk mendefinisikan hewan laut dan hewan darat. Fungsi main untuk mendeklarasikan dan diisi dengan data yang sesuai dan ditampikan dengan fungsi cout.

## Unguided 

### 1. Modifikasi tugas guided pertama, sehingga setiap item yang terdapat pada struct buku berupa array yang berukuran 5, isi dengan data kemudian tampilkan.

```C++
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
```
#### Output:
![Screenshot 2024-04-27 200739](https://github.com/RifkaASwasthi/Praktikum-Saruktur-Data-Assignment-5-Struct/assets/162097297/d2d9bfe7-6e2c-4d96-a42e-dc3d5cf1bdd9)

Kode di atas digunakan untuk menyinpan informasi tentang bebrapa buku favorit, mendeklarasikanstruct buku dengan setiap array memiliki ukuran 5 untuk menyimpan data buku berjumlah 5. dalam fungsi main variabel favorit dan tipe buku dideklarasikan. data setiap buku diisi menggunakan indeks pada array yang sesuai [0] untuk judul pertama dst. menggunakan perulangan for untuk menampilan informasi setiap buku favorit, judul, pangarang, penerbit, tebal halaman, harga buku. 

#### Full code Screenshot:
![Screenshot 2024-04-27 200803](https://github.com/RifkaASwasthi/Praktikum-Saruktur-Data-Assignment-5-Struct/assets/162097297/999f00ed-f829-4934-b642-d822b80e5313)


### 2. Apa yang terjadi jika deklarasi variabel struct yang dibuat pada tugas guided I, berjenis Array. Bagaimana cara mengisi data dan menampilkannya ?

```C++
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
```
#### Output:

![Screenshot 2024-04-27 222854](https://github.com/RifkaASwasthi/Praktikum-Saruktur-Data-Assignment-5-Struct/assets/162097297/b147ece7-43cc-4502-990a-8ec81cd84504)


Kode di atas digunakan untuk menyimpan informasi tentang beberapa isi bukumenggunakan struct buku yang berisi judul buku, pengarang, penerbit, tebal halaman, dan harga buku. dalam variabel jumlah buku digunkan untuk menentukan jumlah buku yang akan dimasukkan menggunakan perulangan for untuk meminta pengguna memasukkan judul, pengarang, penerbit, tebal haaman dan harga buku untuk setiap buku, setelah data dimasukkan, program kemudian menampilkan data dari setiap buku yang telah dimasukkan mengguanakan perulangan for kedua.

#### Full code Screenshot:
![Screenshot 2024-04-27 223017](https://github.com/RifkaASwasthi/Praktikum-Saruktur-Data-Assignment-5-Struct/assets/162097297/7dfa3295-5506-4473-8385-8754ab5d41b7)



## Kesimpulan
Struct adalah struktur data yang digunakan untuk mengelompokkan bebrapa tipe data yang berbrda ke dalam satu kesatuan yang kmemungkinkan kita membuat tipe data baru yang memiliki fungsi berbeda. penggunaan struct membantu dalam mengorganisir dan memenejemn data-data yang terkait dengan algoritma, sehingga kode menjadi lebih terstruktur dan mudah dimengerti. Struct digunakan untuk mengefisiensikan waktu karena kita membuat program baru yang pasti memiliki kompleksivitas waktu paling cepat.

## Referensi
[1] Binus . 2024 , Struktur Data Algortima: Prinsip, Struktur, dan Cara Penyajian, Malang, BINUS.

[2] Ichantri Bagas Asmara. 2023, Pengenalan Algoritma dan Struktur data dalaam Pemrograman, Jakarta:Universitas Komputer Indonesia, Medium.
