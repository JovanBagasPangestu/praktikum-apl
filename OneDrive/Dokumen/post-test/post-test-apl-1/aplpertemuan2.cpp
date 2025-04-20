#include <iostream>
using namespace std;

int main() {
    #define MAX_BUAH 100 // Ukuran maksimum array buah
    int panjang = 0; // Jumlah elemen saat ini
    string buah[MAX_BUAH]; // Array dengan ukuran tetap
    int pilihan, index;
    do {
        system("clear");
        cout << "Menu Program" << endl;
        cout << "1. Tampilkan Buah" << endl;
        cout << "2. Tambah Buah" << endl;
        cout << "3. Ubah Buah" << endl;
        cout << "4. Hapus Buah" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;
        
        } while (pilihan != 5);
    switch (pilihan) {
        case 1:
            // Tampilkan buah
        break;
        case 2:
            // Tambah buah
        break;
        case 3:
            // Ubah buah
        break;
        case 4:
            // Hapus buah
        break;
        case 5:
        cout << "Program selesai" << endl;
        break;
        default:
        cout << "Pilihan tidak valid" << endl;
        break;





    // int arr [3][3][3] = {
    //     {
    //         {1, 2, 3},
    //         {4, 5, 6},
    //         {7, 8, 9}
    //     },
    //     {
    //         {10, 11, 12},
    //         {13, 14, 15},
    //         {16, 17, 18}
    //     },
    //     {
    //         {19, 20, 21},
    //         {22, 23, 24},
    //         {25, 26, 27}
    //     }
    // };
    // cout << arr [0][0][1] << endl;
    // return 0;

    // string nama[4][4] = {
    //     {"angsa", "bebek", "Musang", "Kucing"},
    //     {"lebah", "kuda", "kambing", "sapi"},
    //     {"ayam", "bebek", "angsa", "burung"},
    //     {"ikan", "hiu", "paus", "lumba-lumba"}
    // };
    // // cout << nama[3][2] << endl;
    // cout << sizeof(nama)/sizeof(string) << endl;


    // // Deklarasi array dan inisialisasi elemen array
    // string nama[] = {"Haqi", "Dzaki", "Musang","Kucing", "lebah"};
    //     int panjang =sizeof(nama)/sizeof(nama[0]);
    // for (int i = 0; i < panjangArray; i++) {
    //     cout << nama[i] << endl;
    // for (int x : nama) {
    //     cout << x << endl;
    // cout << nama[-5] << endl;


    // int angka[5];
    // angka[0] = 10;
    // angka[1] = 19;
    // angka[2] = 30;
    // angka[3] = 40;
    // angka[4] = 50;

    // cout << sizeof(nama)/sizeof(nama[0]) << endl;
    // cout << sizeof(nama)/sizeof(string) << endl;
    // cout << sizeof(nama) << endl;
    return 0;
}