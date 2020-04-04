#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    struct
    {
        string nama;
        int jumlah, kode;
        long int tot_bay;

    } barang[10];

    int pilihan, i, x, y, jmldata;
    long int jmlbayar;
    char jwb;

    i = 0;
    do
    {
        i++;
        system("cls");

        cout << "      DAFTAR NAMA BARANG" << endl;
        cout << "------------------------------" << endl;
        cout << "kode   nama barang    harga" << endl;
        cout << "------------------------------" << endl;
        cout << " 1     Laptop         6.000.000" << endl;
        cout << " 2     Notebook       3.000.000" << endl;
        cout << " 3     Dekstop Pc    10.000.000" << endl;
        cout << "------------------------------" << endl;
        cout << " masukan nama pembeli = ";
        cin >> barang[i].nama;
        cout << " kode barang [1,2,3] = ";
        cin >> barang[i].kode;
        cout << "" << endl;
        if (barang[i].kode == 1)
        {
            cout << "    Nama Pembeli  : " << barang[i].nama << endl;
            cout << "    Kode Item     : 1" << endl;
            cout << "    Nama Item     : Laptop" << endl;
            cout << "    Harga Per PCs : 6.000.000" << endl;
            cout << "    Jumlah Beli   : ";
            cin >> barang[i].jumlah;
            cout << "    ====================" << endl;
            cout << "       Total      : " << barang[i].jumlah * 6000000 << endl;
            barang[i].tot_bay = barang[i].jumlah * 6000000;
            cout << "    jumlah bayar  : ";
            cin >> jmlbayar;
            if (jmlbayar >= barang[i].tot_bay)
            {
                cout << "    uang kembali  : " << jmlbayar - barang[i].tot_bay << endl;
            }
            else if (jmlbayar < barang[i].tot_bay)
            {
                cout << "\n     UANG ANDA KURANG!!!" << endl;
            }
        }
        else if (barang[i].kode == 2)
        {
            cout << "    Nama Pembeli  : " << barang[i].nama << endl;
            cout << "    Kode Item     : 2 " << endl;
            cout << "    Nama Item     : Notebook " << endl;
            cout << "    Harga Per PCs : 3.000.000" << endl;
            cout << "    Jumlah Beli   : ";
            cin >> barang[i].jumlah;
            cout << "    ====================" << endl;
            cout << "       Total      : " << barang[i].jumlah * 3000000 << endl;
            barang[i].tot_bay = barang[i].jumlah * 3000000;
            cout << "    jumlah bayar  : ";
            cin >> jmlbayar;
            if (jmlbayar >= barang[i].tot_bay)
            {
                cout << "    uang kembali  : " << jmlbayar - barang[i].tot_bay << endl;
            }
            else if (jmlbayar < barang[i].tot_bay)
            {
                cout << "\n     UANG ANDA KURANG!!!" << endl;
            }
        }
        else if (barang[i].kode == 3)
        {
            cout << "    Nama Pembeli  : " << barang[i].nama << endl;
            cout << "    Kode Item     : 3 " << endl;
            cout << "    Nama Item     : Dekstop Pc" << endl;
            cout << "    Harga Per PCs : 10.000.000" << endl;
            cout << "    Jumlah Beli   : ";
            cin >> barang[i].jumlah;
            cout << "    ====================" << endl;
            cout << "        Total     : " << barang[i].jumlah * 10000000 << endl;
            barang[i].tot_bay = barang[i].jumlah * 10000000;
            cout << "    jumlah bayar  : ";
            cin >> jmlbayar;
            if (jmlbayar >= barang[i].tot_bay)
            {
                cout << "    uang kembali  : " << jmlbayar - barang[i].tot_bay << endl;
            }
            else if (jmlbayar < barang[i].tot_bay)
            {
                cout << "\n     UANG ANDA KURANG!!!" << endl;
            }
        }
        else
        {
            cout << "        SALAH KODE!!!" << endl;
        }
        cout << "    ====================" << endl;

        do
        {
            cout << " tambah barang lagi? [y/n]= ";
            cin >> jwb;
        } while ((jwb != 'y') && (jwb != 'n'));

    } while ((jwb == 'y') || (jwb == 'Y'));
    jmldata = i;
}
