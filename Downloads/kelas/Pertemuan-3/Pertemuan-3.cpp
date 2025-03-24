#include <iostream>
using namespace std;

struct Mahasiswa{
    string nama;
    int nim;
};

int main () {
    Mahasiswa mhs [10];
    mhs[0].nama = "Jovan";
    mhs[0].nim = "123";

    mhs[1].nama = "Jevan";
    mhs[1].nim = "321";


    for (int i = 0; i < 2; i++) {
        cout << "Nama: " << mhs[i].nama << endl;
        cout << "NIM: " << mhs[i].nim << endl;
    }




    
    // struct Mahasiswa
    // {
    //     string nama;
    //     int nim;
    // };

    // typedef struct
    // {
    //     /* data */
    //     string nama;
    //     int nim;
    // } Mahasiswa;
    
    //nama struct          //deklarasi struct
    // Mahasiswa              mahasiswa


    // mahasiswa = {"jovan", 123}
    // // mahasiswa.nama = "jovan";
    // // mahasiswa.nim = 123;
    // cout << mahasiswa.nama << endl;
    // cout << mahasiswa.nim

    // struct Nilai
    // {
    //     int uts;
    //     int uaas;
    // };
    

    // struct Mahasiswa
    // {
    //     string nama;
    //     int nim;

    // };

    // struct Data
    // {
    //     string nama;
    //     int nim;
    // };

    // struct Mahasiswa
    // {
    //     Data data;
    //     Nilai nilai;
    // };

    // Mahasiswa mhs;
    // mhs          .data         .nama =          "jovan"
    // cout << mhs.data.nama << endl






    return 0
}