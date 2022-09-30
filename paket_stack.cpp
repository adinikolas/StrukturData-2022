#include <iostream>
#include <conio.h>

using namespace std;

typedef struct paket{
    char jenis_barang[30];
    int berat_barang;
    char kota_tujuan[30];
};

paket kirim[100];
int batas=3;

void tambahData(int x){
    if(x<=batas){
        cout << "Masukkan Jenis Barang: ";
        cin >> kirim[x].jenis_barang;
        cout << "Masukkan Berat Barang: ";
        cin >> kirim[x].berat_barang;
        cout << "Masukkan Kota Tujuan: ";
        cin >> kirim[x].kota_tujuan;
        cout << endl;
    }else{
        cout << "Sorry stack is full!" << endl << endl;
    }
}

void hapusData(int x){
    if(x>1){
        x=x-1;
        cout << "Data yang anda hapus: " << endl;
        cout << x << " " << kirim[x].jenis_barang << " " << kirim[x].berat_barang << " " << kirim[x].kota_tujuan;
        cout << endl << endl;
    }else{
        cout << "Sorry stack is empty!" << endl;
    }
    cout << endl;
    cout << "Press Any Key to Continue...";
    cout << endl << endl;
    getch();
}

void tampilkanData(int n){
    for(int i=(n-1); i>=1; i--){
        cout << i << " " << kirim[i].jenis_barang << " " << kirim[i].berat_barang << " " << kirim[i].kota_tujuan;
        cout << endl;
    }
    cout << endl;
    cout << "Press Any Key to Continue...";
    cout << endl << endl;
    getch();
}

int main(){
    int pilih;
    int datake=1;
    do{
        cout << "Menu Utama" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Hapus Data Terakhir" << endl;
        cout << "3. Tampil Data" << endl;
        cout << "9. Keluar" << endl;
        cout << "Pilihan Anda [1-9] : ";
        cin >> pilih;
        cout << endl;
        if(pilih==1){
            tambahData(datake);
            if(datake<=batas){
                datake++;
            }
        }else if(pilih==2){
            hapusData(datake);
            datake--;
        }else if(pilih==3){
            tampilkanData(datake);
        }
    }while(pilih!=9);
    return 0;
}
