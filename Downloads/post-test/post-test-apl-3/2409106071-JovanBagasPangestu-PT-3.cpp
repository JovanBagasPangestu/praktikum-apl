#include <iostream>
using namespace std;

struct Pengeluaran {
    string kategori;
    string nominal;
    string tanggal;
};

struct User {
    string username;
    string password;
    Pengeluaran pengeluaran[100];
    int panjangPengeluaran;
};

User user[100];
int jumlahUser = 1; 
int max_gagal = 3;

int login(string username, string password) {
    for (int i = 0; i < jumlahUser; i++) {
        if (user[i].username == username && user[i].password == password) {
            return i;
        }
    }
    return -1;
}

int registerUser(string username, string password) {
    user[jumlahUser].username = username;
    user[jumlahUser].password = password;
    user[jumlahUser].panjangPengeluaran = 0;
    jumlahUser++;
    return jumlahUser - 1;
}

int main() {
    user[0].username = "JOVAN BAGAS PANGESTU";
    user[0].password = "2409106071";
    user[0].panjangPengeluaran = 0;

    int gagal = 0;
    int loginUserIndex = -1;

    while (gagal < max_gagal) {
        int pilihan;
        cout << "1. Login" << endl;
        cout << "2. Register" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        if (pilihan == 1) {
            string username, password;
            cout << "Masukkan username: ";
            cin.ignore();
            getline(cin, username);
            cout << "Masukkan password: ";
            getline(cin, password);

            loginUserIndex = login(username, password);
            if (loginUserIndex != -1) {
                cout << "Login Berhasil!" << endl;
                cout << "Selamat datang, " << user[loginUserIndex].username << endl;

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
                            if (user[loginUserIndex].panjangPengeluaran == 0) {
                                cout << "Belum ada data pengeluaran." << endl;
                            } else {
                                cout << "\nDaftar Pengeluaran Bulanan:" << endl;
                                cout << "No. | Kategori   | Nominal  | Tanggal" << endl;
                                cout << "-----------------------------------------" << endl;
                                for (int i = 0; i < user[loginUserIndex].panjangPengeluaran; i++) {
                                    cout << i + 1 << "   | " << user[loginUserIndex].pengeluaran[i].kategori << "   | " 
                                         << user[loginUserIndex].pengeluaran[i].nominal << "   | " 
                                         << user[loginUserIndex].pengeluaran[i].tanggal << endl;
                                }
                            }
                            break;

                        case 2:
                            // Menambah Info Pengeluaran
                            if (user[loginUserIndex].panjangPengeluaran < 100) {
                                cout << "Masukkan kategori pengeluaran: ";
                                cin.ignore();
                                getline(cin, user[loginUserIndex].pengeluaran[user[loginUserIndex].panjangPengeluaran].kategori);
                                cout << "Masukkan nominal pengeluaran: ";
                                getline(cin, user[loginUserIndex].pengeluaran[user[loginUserIndex].panjangPengeluaran].nominal);
                                cout << "Masukkan tanggal pengeluaran (tgl-bln-tahun): ";
                                getline(cin, user[loginUserIndex].pengeluaran[user[loginUserIndex].panjangPengeluaran].tanggal);
                                user[loginUserIndex].panjangPengeluaran++;
                                cout << "Pengeluaran berhasil ditambahkan!" << endl;
                            } else {
                                cout << "Kapasitas penuh! Tidak bisa menambah data lagi." << endl;
                            }
                            break;

                        case 3:
                            // Ubah Info Pengeluaran
                            if (user[loginUserIndex].panjangPengeluaran == 0) {
                                cout << "Belum ada data pengeluaran." << endl;
                            } else {
                                cout << "\nDaftar Pengeluaran Bulanan:" << endl;
                                cout << "No. | Kategori   | Nominal  | Tanggal" << endl;
                                cout << "-----------------------------------------" << endl;
                                for (int i = 0; i < user[loginUserIndex].panjangPengeluaran; i++) {
                                    cout << i + 1 << "   | " << user[loginUserIndex].pengeluaran[i].kategori << "   | " 
                                         << user[loginUserIndex].pengeluaran[i].nominal << "   | " 
                                         << user[loginUserIndex].pengeluaran[i].tanggal << endl;
                                }

                                int index;
                                cout << "Masukkan nomor pengeluaran yang ingin diubah: ";
                                cin >> index;

                                if (index > 0 && index <= user[loginUserIndex].panjangPengeluaran) {
                                    cout << "Masukkan kategori baru: ";
                                    cin.ignore();
                                    getline(cin, user[loginUserIndex].pengeluaran[index - 1].kategori);
                                    cout << "Masukkan nominal baru: ";
                                    getline(cin, user[loginUserIndex].pengeluaran[index - 1].nominal);
                                    cout << "Masukkan tanggal baru (tgl-bln-tahun): ";
                                    getline(cin, user[loginUserIndex].pengeluaran[index - 1].tanggal);
                                    cout << "Pengeluaran berhasil diubah!" << endl;
                                } else {
                                    cout << "Nomor tidak valid!" << endl;
                                }
                            }
                            break;

                        case 4:
                            // Hapus Info Pengeluaran
                            if (user[loginUserIndex].panjangPengeluaran == 0) {
                                cout << "Belum ada data pengeluaran." << endl;
                            } else {
                                cout << "\nDaftar Pengeluaran Bulanan:" << endl;
                                cout << "No. | Kategori   | Nominal  | Tanggal" << endl;
                                cout << "-----------------------------------------" << endl;
                                for (int i = 0; i < user[loginUserIndex].panjangPengeluaran; i++) {
                                    cout << i + 1 << "   | " << user[loginUserIndex].pengeluaran[i].kategori << "   | " 
                                         << user[loginUserIndex].pengeluaran[i].nominal << "   | " 
                                         << user[loginUserIndex].pengeluaran[i].tanggal << endl;
                                }

                                int index;
                                cout << "Masukkan nomor pengeluaran yang ingin dihapus: ";
                                cin >> index;

                                if (index > 0 && index <= user[loginUserIndex].panjangPengeluaran) {
                                    for (int i = index - 1; i < user[loginUserIndex].panjangPengeluaran - 1; i++) {
                                        user[loginUserIndex].pengeluaran[i] = user[loginUserIndex].pengeluaran[i + 1];
                                    }
                                    user[loginUserIndex].panjangPengeluaran--;
                                    cout << "Pengeluaran berhasil dihapus!" << endl;
                                } else {
                                    cout << "Nomor tidak valid!" << endl;
                                }
                            }
                            break;

                        case 5:
                            // Keluar
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
        } else if (pilihan == 2) {
            string username, password;
            cout << "Masukkan username baru: ";
            cin.ignore();
            getline(cin, username);
            cout << "Masukkan password baru: ";
            getline(cin, password);
            registerUser(username, password);
            cout << "Registrasi berhasil!" << endl;
        } else {
            cout << "Pilihan tidak valid" << endl;
        }
    }

    if (gagal == max_gagal) {
        cout << "Kamu telah gagal login 3x, silakan coba lagi nanti" << endl;
    }

    return 0;
}