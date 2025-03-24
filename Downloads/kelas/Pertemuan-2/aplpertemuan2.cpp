#include <iostream>
using namespace std;

int main() {
    int arr [3][3][3] = {
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        },
        {
            {10, 11, 12},
            {13, 14, 15},
            {16, 17, 18}
        },
        {
            {19, 20, 21},
            {22, 23, 24},
            {25, 26, 27}
        }
    };
    cout << arr [0][0][1] << endl;
    return 0;

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