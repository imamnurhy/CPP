#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    char kdBarang, kdTipe, merkProduk1[30], merkProduk2[30], merkProduk3[30], warna[30], kondisi[30];
    int hargaSatuan, hargaProduk1, hargaProduk2, hargaProduk3, jumlahBayar, uangKembalian;

    cout << "====================================================" << endl;
    cout << "\tProgram Penjualan Elektronik" << endl;
    cout << "====================================================" << endl
         << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "\tDaftar Barang Elektronik" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "1. Televisi" << endl;
    cout << "2. Kulkas" << endl;
    cout << "3. DVD Player" << endl;
    cout << "4. Mesin Cuci" << endl;
    cout << "5. AC" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "Input No Pilihan Barang [1-5] : ";
    cin >> kdBarang;
    cout << "----------------------------------------------------" << endl;
    cout << "" << endl;

    switch (kdBarang)
    {
    case '1':
        strcpy(merkProduk1, "LG LED MTV 24MT48A ");
        strcpy(merkProduk2, "Polytron 32T710 Black ");
        strcpy(merkProduk3, "SHARP LC-32LE260I ");
        hargaProduk1 = 2150000;
        hargaProduk2 = 2869000;
        hargaProduk3 = 2699000;
        break;
    case '2':
        strcpy(merkProduk1, "Sharp FJ-M189N-SS Silver");
        strcpy(merkProduk2, "LG GN-B202RLCL Lemari Es");
        strcpy(merkProduk3, "Samsung RT-22FARBDSA Silver");
        hargaProduk1 = 3199000;
        hargaProduk2 = 3999000;
        hargaProduk3 = 5399000;
        break;
    case '3':
        strcpy(merkProduk1, "LG DP540 Hitam Multi Playback");
        strcpy(merkProduk2, "Panasonic DMP-BDT170 Smart 3D");
        strcpy(merkProduk3, "Samsung Karaoke E360 Hitam");
        hargaProduk1 = 399000;
        hargaProduk2 = 1549000;
        hargaProduk3 = 405000;
        break;
    case '4':
        strcpy(merkProduk1, "Samsung WA80H4000SW ");
        strcpy(merkProduk2, "Sanyo ASW89XTF  ");
        strcpy(merkProduk3, "Polytron PWM9567 ");
        hargaProduk1 = 3079000;
        hargaProduk2 = 2500000;
        hargaProduk3 = 1799000;
        break;
    case '5':
        strcpy(merkProduk1, "Sharp AH-A9SCY   ");
        strcpy(merkProduk2, "Polytron PSF 3003 ");
        strcpy(merkProduk3, "Panasonic PN5RKJ R-32 ");
        hargaProduk1 = 3199000;
        hargaProduk2 = 8499000;
        hargaProduk3 = 3665000;
        break;
    default:
        strcpy(merkProduk1, "tanda salah kode");
        break;
    }

    cout << "----------------------------------------------------" << endl;
    cout << "\tMerek Elektonik" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << merkProduk1 << " : Rp. " << hargaProduk1 << endl;
    cout << merkProduk2 << " : Rp. " << hargaProduk2 << endl;
    cout << merkProduk3 << " : Rp. " << hargaProduk3 << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "Input Merek Elektronik [1-3] : ";
    cin >> kdTipe;
    cout << "----------------------------------------------------" << endl;
    cout << "" << endl;
    switch (kdTipe)
    {
    case '1':
        hargaSatuan = hargaProduk1;
        strcpy(warna, "Putih dan Silver");
        strcpy(kondisi, "Baru");
        break;
    case '2':
        hargaSatuan = hargaProduk2;
        strcpy(warna, "Putih dan Silver");
        strcpy(kondisi, "Baru");
        break;
    case '3':
        hargaSatuan = hargaProduk3;
        strcpy(warna, "Putih dan Silver");
        strcpy(kondisi, "Baru");
        break;
    default:
        strcpy(merkProduk1, "tanda salah kode");
        break;
    }
    cout << "----------------------------------------------------" << endl;
    cout << "\tResi Penjualan Produk" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "Warna Produk   : " << warna << endl;
    cout << "Kondisi Produk   : " << kondisi << endl;
    cout << "Harga Satuan   : Rp. " << hargaSatuan << endl;
    cout << "====================================================" << endl;
    cout << "Total Bayar   : Rp. ";
    cin >> jumlahBayar;
    uangKembalian = jumlahBayar - hargaSatuan;
    cout << "Kembalian   : Rp. " << uangKembalian << endl;
    cout << "====================================================" << endl;
    cout << "Terima kasih telah berbelanja di Toko Elektronik Kami" << endl;
    cout << "" << endl;

    getch();
}
