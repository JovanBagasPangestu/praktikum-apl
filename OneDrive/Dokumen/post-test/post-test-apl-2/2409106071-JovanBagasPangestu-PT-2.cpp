#include <iostream>
using namespace std;

int main() {
    string username, password;
    int gagal = 0;
    int max_gagal = 3;
    int panjang = 0; 
    string pengeluaran[100][3]; 

    while (gagal < max_gagal) {
        cout << "Enter your username: " << endl; 
        getline(cin, username);
        cout << "Enter your password: " << endl; 
        getline(cin, password);
 
        if (username == "JOVAN BAGAS PANGESTU" && password == "2409106071") {
            cout << "Login Berhasil!" << endl;
            cout << "Selamat datang, " << username << endl;

            int pilihan, index;
            do {
            cout << "Menu Program" << endl;
            cout << "1. Tampilkan Info Pengeluaran" << endl;
            cout << "2. Tambah Info Pengeluaran" << endl;
            cout << "3. Ubah Info Pengeluaran" << endl;
            cout << "4. Hapus Info Pengeluaran" << endl;
            cout << "5. Keluar" << endl;
            cout << "Pilihan: ";
            cin >> pilihan;
            switch (pilihan) {
            case 1:
            // Menampilkan Info Pengeluaran
            if (panjang == 0) {
                cout << "Belum ada data pengeluaran." << endl;
            } else {
                cout << "\nDaftar Pengeluaran Bulanan:" << endl;
                cout << "No. | Kategori   | Nominal  | Tanggal" << endl;
                cout << "-----------------------------------------" << endl;
                for (int i = 0; i < panjang; i++) {
                    cout << i + 1 << "   | " << pengeluaran[i][0] << "   | " << pengeluaran[i][1] << "   | " << pengeluaran[i][2] << endl;
                }
            }
            break;

            case 2:
            // Menambah Info Pengeluaran
            if (panjang < 100) {
                cout << "Masukkan kategori pengeluaran: ";
                cin.ignore(); // Membersihkan buffer input
                getline(cin, pengeluaran[panjang][0]); // Input kategori

                cout << "Masukkan nominal pengeluaran: ";
                getline(cin, pengeluaran[panjang][1]); // Input nominal

                cout << "Masukkan tanggal pengeluaran (YYYY-MM-DD): ";
                getline(cin, pengeluaran[panjang][2]); // Input tanggal

                panjang++; // Tambah jumlah data
                cout << "Pengeluaran berhasil ditambahkan!" << endl;
            } else {
                cout << "Kapasitas penuh! Tidak bisa menambah data lagi." << endl;
            }
            break;

            case 3:
            // Ubah Info Pengeluaran
            if (panjang == 0) {
                cout << "Belum ada data pengeluaran." << endl;
            } else {
                // Tampilkan data
                cout << "\nDaftar Pengeluaran Bulanan:" << endl;
                cout << "No. | Kategori   | Nominal  | Tanggal" << endl;
                cout << "-----------------------------------------" << endl;
                for (int i = 0; i < panjang; i++) {
                    cout << i + 1 << "   | " << pengeluaran[i][0] << "   | " << pengeluaran[i][1] << "   | " << pengeluaran[i][2] << endl;
                }

                // Input nomor data yang ingin diubah
                int index;
                cout << "Masukkan nomor pengeluaran yang ingin diubah: ";
                cin >> index;

                if (index > 0 && index <= panjang) {
                    cout << "Masukkan kategori baru: ";
                    cin.ignore();
                    getline(cin, pengeluaran[index - 1][0]);

                    cout << "Masukkan nominal baru: ";
                    getline(cin, pengeluaran[index - 1][1]);

                    cout << "Masukkan tanggal baru (YYYY-MM-DD): ";
                    getline(cin, pengeluaran[index - 1][2]);

                    cout << "Pengeluaran berhasil diubah!" << endl;
                } else {
                    cout << "Nomor tidak valid!" << endl;
                }
            }
            break;

            case 4:
            // Hapus Info Pengeluaran
            if (panjang == 0) {
                cout << "Belum ada data pengeluaran." << endl;
            } else {
                // Tampilkan data
                cout << "\nDaftar Pengeluaran Bulanan:" << endl;
                cout << "No. | Kategori   | Nominal  | Tanggal" << endl;
                cout << "-----------------------------------------" << endl;
                for (int i = 0; i < panjang; i++) {
                    cout << i + 1 << "   | " << pengeluaran[i][0] << "   | " << pengeluaran[i][1] << "   | " << pengeluaran[i][2] << endl;
                }

                // Input nomor data yang ingin dihapus
                int index;
                cout << "Masukkan nomor pengeluaran yang ingin dihapus: ";
                cin >> index;

                if (index > 0 && index <= panjang) {
                    for (int i = index - 1; i < panjang - 1; i++) {
                        pengeluaran[i][0] = pengeluaran[i + 1][0]; // Geser data ke kiri
                        pengeluaran[i][1] = pengeluaran[i + 1][1];
                        pengeluaran[i][2] = pengeluaran[i + 1][2];
                    }
                    panjang--; // Kurangi jumlah data
                    cout << "Pengeluaran berhasil dihapus!" << endl;
                } else {
                    cout << "Nomor tidak valid!" << endl;
                }
            }
            break;

            case 5:
                cout << "Logout Berhasil!" << endl;
                break; 
            default:
                cout << "Pilihan tidak valid" << endl;
            }
            } while (pilihan != 5);
            break;

        } else {
            cout << "Login Gagal!, username atau password yang kamu masukkan salah" << endl;
            gagal++;
        }
    }

    if (gagal == max_gagal) {
        cout << "Kamu telah gagal login 3x, silakan coba lagi nanti" << endl;
    }

    return 0;
}