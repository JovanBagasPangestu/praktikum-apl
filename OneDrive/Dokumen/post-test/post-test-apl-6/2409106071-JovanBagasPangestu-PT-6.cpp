#include <iostream>
#include <string>
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

void tambahPengeluaran(User &UserAktif) {
    if (UserAktif.panjangPengeluaran < 100) {
        cout << "Masukkan kategori pengeluaran: ";
        getline(cin, UserAktif.pengeluaran[UserAktif.panjangPengeluaran].kategori);
        cout << "Masukkan nominal pengeluaran: ";
        getline(cin, UserAktif.pengeluaran[UserAktif.panjangPengeluaran].nominal);
        cout << "Masukkan tanggal pengeluaran (tgl-bln-tahun): ";
        getline(cin, UserAktif.pengeluaran[UserAktif.panjangPengeluaran].tanggal);
        UserAktif.panjangPengeluaran++;
        cout << "Pengeluaran berhasil ditambahkan!" << endl;
    } else {
        cout << "Kapasitas penuh! Tidak bisa menambah data lagi." << endl;
    }
}

void tampilkanPengeluaran(User *UserAktif) {
    if (UserAktif->panjangPengeluaran == 0) {
        cout << "Belum ada data pengeluaran." << endl;
    } else {
        cout << "\nDaftar Pengeluaran Bulanan:" << endl;
        cout << "No. | Kategori   | Nominal  | Tanggal" << endl;
        cout << "-----------------------------------------" << endl;
        for (int i = 0; i < UserAktif->panjangPengeluaran; i++) {
            cout << i + 1 << "   | " << UserAktif->pengeluaran[i].kategori << "   | "
                 << UserAktif->pengeluaran[i].nominal << "   | "
                 << UserAktif->pengeluaran[i].tanggal << endl;
        }
    }
}

void ubahPengeluaran(User *UserAktif) {
    if (UserAktif->panjangPengeluaran == 0) {
        cout << "Belum ada data pengeluaran." << endl;
    } else {
        tampilkanPengeluaran(UserAktif);
        int index;
        cout << "Masukkan nomor pengeluaran yang ingin diubah: ";
        cin >> index;
        cin.ignore();

        if (index > 0 && index <= UserAktif->panjangPengeluaran) {
            cout << "Masukkan kategori baru: ";
            getline(cin, UserAktif->pengeluaran[index - 1].kategori);
            cout << "Masukkan nominal baru: ";
            getline(cin, UserAktif->pengeluaran[index - 1].nominal);
            cout << "Masukkan tanggal baru (tgl-bln-tahun): ";
            getline(cin, UserAktif->pengeluaran[index - 1].tanggal);
            cout << "Pengeluaran berhasil diubah!" << endl;
        } else {
            cout << "Nomor tidak valid!" << endl;
        }
    }
}

void hapusPengeluaran(User *UserAktif) {
    if (UserAktif->panjangPengeluaran == 0) {
        cout << "Belum ada data pengeluaran." << endl;
    } else {
        tampilkanPengeluaran(UserAktif);
        int index;
        cout << "Masukkan nomor pengeluaran yang ingin dihapus: ";
        cin >> index;
        cin.ignore();

        if (index > 0 && index <= UserAktif->panjangPengeluaran) {
            for (int i = index - 1; i < UserAktif->panjangPengeluaran - 1; i++) {
                UserAktif->pengeluaran[i] = UserAktif->pengeluaran[i + 1];
            }
            UserAktif->panjangPengeluaran--;
            cout << "Pengeluaran berhasil dihapus!" << endl;
        } else {
            cout << "Nomor tidak valid!" << endl;
        }
    }
}

void bubbleSortKategoriAscending(User *UserAktif) {
    for (int i = 0; i < UserAktif->panjangPengeluaran - 1; i++) {
        for (int j = 0; j < UserAktif->panjangPengeluaran - i - 1; j++) {
            if (UserAktif->pengeluaran[j].kategori > UserAktif->pengeluaran[j + 1].kategori) {
                swap(UserAktif->pengeluaran[j], UserAktif->pengeluaran[j + 1]);
            }
        }
    }
    cout << "Data berhasil diurutkan berdasarkan kategori (A-Z)." << endl;
}

void insertionSortNominalDescending(User *UserAktif) {
    for (int i = 1; i < UserAktif->panjangPengeluaran; i++) {
        Pengeluaran key = UserAktif->pengeluaran[i];
        int j = i - 1;

        while (j >= 0 && stoi(UserAktif->pengeluaran[j].nominal) < stoi(key.nominal)) {
            UserAktif->pengeluaran[j + 1] = UserAktif->pengeluaran[j];
            j--;
        }
        UserAktif->pengeluaran[j + 1] = key;
    }
    cout << "Data berhasil diurutkan berdasarkan nominal (besar ke kecil)." << endl;
}

void selectionSortTanggalAscending(User *UserAktif) {
    for (int i = 0; i < UserAktif->panjangPengeluaran - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < UserAktif->panjangPengeluaran; j++) {
            if (UserAktif->pengeluaran[j].tanggal < UserAktif->pengeluaran[min_idx].tanggal) {
                min_idx = j;
            }
        }
        swap(UserAktif->pengeluaran[i], UserAktif->pengeluaran[min_idx]);
    }
    cout << "Data berhasil diurutkan berdasarkan tanggal (awal ke akhir)." << endl;
}

void menuPengeluaran(User *UserAktif) {
    int pilihan;
    do {
        cout << "\nMenu Program" << endl;
        cout << "1. Tampilkan Info Pengeluaran" << endl;
        cout << "2. Tambah Info Pengeluaran" << endl;
        cout << "3. Ubah Info Pengeluaran" << endl;
        cout << "4. Hapus Info Pengeluaran" << endl;
        cout << "5. Keluar" << endl;
        cout << "6. Urutkan Kategori (A-Z)" << endl;
        cout << "7. Urutkan Nominal (besar ke kecil)" << endl;
        cout << "8. Urutkan Tanggal (awal ke akhir)" << endl;

        string input;
        cout << "Pilihan: ";
        getline(cin, input);

        if (input.length() == 1 && input[0] >= '1' && input[0] <= '8') {
            pilihan = input[0] - '0';
        } else {
            pilihan = -1;
        }

        switch (pilihan) {
            case 1:
                tampilkanPengeluaran(UserAktif);
                break;
            case 2:
                tambahPengeluaran(*UserAktif);
                break;
            case 3:
                ubahPengeluaran(UserAktif);
                break;
            case 4:
                hapusPengeluaran(UserAktif);
                break;
            case 5:
                cout << "Logout Berhasil!" << endl;
                break;
            case 6:
                bubbleSortKategoriAscending(UserAktif);
                break;
            case 7:
                insertionSortNominalDescending(UserAktif);
                break;
            case 8:
                selectionSortTanggalAscending(UserAktif);
                break;
            default:
                cout << "Pilihan tidak valid, silakan masukkan angka 1 sampai 8." << endl;
        }
    } while (pilihan != 5);
}

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
        string input;
        int pilihan;

        cout << "\n1. Login" << endl;
        cout << "2. Register" << endl;
        cout << "Pilihan: ";
        getline(cin, input);

        if (input.length() == 1 && (input[0] == '1' || input[0] == '2')) {
            pilihan = input[0] - '0';
        } else {
            pilihan = -1;
        }

        if (pilihan == 1) {
            string username, password;
            cout << "Masukkan username: ";
            getline(cin, username);
            cout << "Masukkan password: ";
            getline(cin, password);

            loginUserIndex = login(username, password);
            if (loginUserIndex != -1) {
                cout << "Login Berhasil!" << endl;
                cout << "Selamat datang, " << user[loginUserIndex].username << endl;
                menuPengeluaran(&user[loginUserIndex]);
                break;
            } else {
                cout << "Login Gagal! Username atau password salah." << endl;
                gagal++;
            }
        } else if (pilihan == 2) {
            string username, password;
            cout << "Masukkan username baru: ";
            getline(cin, username);
            cout << "Masukkan password baru: ";
            getline(cin, password);
            registerUser(username, password);
            cout << "Registrasi berhasil!" << endl;
        } else {
            cout << "Pilihan tidak valid, silakan masukkan angka 1 atau 2." << endl;
        }
    }

    if (gagal == max_gagal) {
        cout << "Kamu telah gagal login 3x, silakan coba lagi nanti." << endl;
    }

    return 0;
}
