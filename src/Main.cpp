#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int harga, kurs, jumlahbeli, bayar, total, kembali;
    char kode;
    char lanjut;
    do
    {

        cout << "            DATA PENJUALAN ELEKTRONIK" << endl;
        cout << "                  PT.ELEKMEDIA " << endl;
        cout << "================================================" << endl;
        cout << " JENIS ELEKTRONIK " << endl;
        cout << " KODE : [P] PRINTER , [M] MODEM , [N] NOTEBOOK " << endl;
        cout << " KODE BARANG : ";
        cin >> kode;
        switch (kode)
        {
        case 'P':
            cout << 'n' << "PRINTER" << endl;
            harga = 10000;
            cout << "Masukkan Jumlah :";
            cin >> jumlahbeli;
            total = harga * jumlahbeli;
            cout << "Total harganya yaitu : Rp. " << total << endl;
            cout << "Dibayar : Rp. ";
            cin >> bayar;
            kembali = bayar - total;
            cout << "Kembali : Rp. " << kembali << endl;
            cout << "Masih ada Y/T :";
            cin >> lanjut;
            break;
        case 'M':
            cout << 'n' << "MODEM" << endl;
            harga = 10000;
            cout << "Masukkan Jumlah :";
            cin >> jumlahbeli;
            total = harga * jumlahbeli;
            cout << "Total harganya yaitu : Rp. " << total << endl;
            cout << "Dibayar : Rp. ";
            cin >> bayar;
            kembali = bayar - total;
            cout << "Kembali : Rp. " << kembali << endl;
            cout << "Masih ada Y/T :";
            cin >> lanjut;
            break;
        default:
            cout << "Kode yang anda masukkan tidak ada" << endl;
        }
    } while (lanjut /= 'Y');
    cout << "Terimah Kasih Atas Kunjungan Anda";
    return 0;
}
