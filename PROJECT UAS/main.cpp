//MUHAMMAD RHEZA PAHLEEVI

//PROJECT UAS PEMROGRAMAN TERSTRUKTUR (PETRUK)

#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

//DEKLARASI ARRAY DAN INDEX
string nama_barang [10];
int harga_barang [10];
int stok_barang [10];
int index = -1;

void view_menu(){
    cout<<"====== PENYEWAAN MOBIL ======\n";
    cout<<"1. Insert Data\n";
    cout<<"2. View Data\n";
    cout<<"3. Exit\n";
    cout<<"==============================\n";
}

void view_barang(){
    for(int i=0 ;i<=index;i++){
        cout<<"NAMA BARANG : "<<nama_barang[i]<<endl;
        cout<<"HARGA BARANG : "<<harga_barang[i]<<endl;
        cout<<"STOK BARANG : "<<stok_barang[i]<<endl;
    }
}

void tambah_barang(){
    index ++;
    cout<<"Masukkan Nama Barang : ";
    cin>>nama_barang[index];
    cout<<endl;
    cout<<"Masukkan Harga : ";
    cin>>harga_barang[index];
    cout<<endl;
    cout<<"Masukkan Stok : ";
    cin>>stok_barang[index];
    cout<<endl;
    cout<<"Barang Sudah Ditambahkan ke Toko\n";
}

void tambah_barang_static(string nama, int harga, int stok){
    index ++;
    nama_barang[index] = nama;
    harga_barang[index] = harga;
    stok_barang[index] = stok;
    
}

void data_barang_static(){
    tambah_barang_static("ODOL",5000,10);
    tambah_barang_static("SABUN",3000,5);
    tambah_barang_static("SHAMPO",18000,8);
    tambah_barang_static("DETERGEN",5000,3);
    tambah_barang_static("MINYAK",11000,9);
    tambah_barang_static("SIKAT",2500,7);

}

int search_by_name(string nama){
    int temp_index = -1;
    for (int i = 0 ; i <= index ; i++){
        if (nama == nama_barang[i]){
            temp_index = i;
        }
    }
    return temp_index;
}

void update_barang(){
    cout<<"Masukkan Nama Barang yang Ingin di Update : ";
    string nama;
    cin>>nama;
    cout<<endl;
    int temp_index = search_by_name(nama);
    cout<<"Masukkan Stok Baru : ";
    cin>>stok_barang[temp_index];
    cout<<endl;
    cout<<"Stok Sudah Di Perbarui\n";
}

int main() {
    data_barang_static();

    int pilih;
    while (pilih != 4){
        view_menu();
        cout<<"Pilih Menu Ke :  ";
        cin>>pilih;
        cout<<"=========================\n";
        switch (pilih) {
            case 1:
                cout<<"======================================\n";
                cout<<"|          List Semua Barang         |\n";
                cout<<"======================================\n";
                view_barang();
                break;
            case 2:
                cout<<"======================================\n";
                cout<<"|         Tambah Barang Masuk        |\n";
                cout<<"======================================\n";
                tambah_barang();
                break;
            case 3:
                cout<<"=====================================\n";
                cout<<"|         Update Stok Barang        |\n";
                cout<<"=====================================\n";
                update_barang();
                break;
            case 4:
                cout<<"=====================================\n";
                cout<<"|               EXIT                |\n";
                cout<<"=====================================\n";
                cout<<"---------------SELESAI---------------";
                break;
        }
    }
    return 0;
}

