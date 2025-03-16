#include <iostream> 
using namespace std;

int main() {
    string username, password;
    int gagal = 0;
    int max_gagal = 3;

    while (gagal < max_gagal) {
        cout << "Enter your username: " << endl; 
        getline(cin, username);
        cout << "Enter your password: " << endl; 
        getline(cin, password);

        system("CLS"); 

        if (username == "JOVAN BAGAS PANGESTU" && password == "2409106071") {
            cout << "Login Berhasil!" << endl;
            cout << "Selamat datang, " << username << endl;

            // Main Menu
            int pilih;
            do {
                cout << "Menu Utama :" << endl;
                cout << "1. Konversi Mata Uang" << endl;
                cout << "2. Konversi Jarak" << endl;
                cout << "3. Konversi Waktu" << endl;
                cout << "4. Logout" << endl;
                cout << "Pilih opsi: ";
                cin >> pilih;

                system("CLS"); 

                switch (pilih) {
                    case 1: {
                        int pilih_lagi;
                        do {
                            cout << "Mata Uang" << endl;
                            cout << "1. Rupiah ke Dolar AS" << endl;
                            cout << "2. Rupiah ke Euro" << endl;
                            cout << "3. Dolar AS ke Rupiah" << endl;
                            cout << "4. Dolar AS ke Euro" << endl;
                            cout << "5. Euro ke Rupiah" << endl;
                            cout << "6. Euro ke Dolar AS" << endl;
                            cout << "7. Kembali" << endl;
                            cout << "Pilih opsi: ";
                            cin >> pilih_lagi;

                            system("CLS"); 

                            switch (pilih_lagi) {
                                case 1:
                                    cout << "Rupiah ke Dolar AS dipilih" << endl;
                                    {
                                        double conversionRate = 0.000061; 
                                        double rupiah;
                                        cout << "Masukkan jumlah Rupiah: ";
                                        cin >> rupiah;
                                        double dollar = rupiah * conversionRate;
                                        cout << rupiah << " Rupiah = " << dollar << " Dolar AS" << endl;
                                    }
                                    break;
                                case 2:
                                    cout << "Rupiah ke Euro dipilih" << endl;
                                    {
                                        double conversionRate = 0.000057; 
                                        double rupiah;
                                        cout << "Masukkan jumlah Rupiah: ";
                                        cin >> rupiah;
                                        double euro = rupiah * conversionRate;
                                        cout << rupiah << " Rupiah = " << euro << " Euro" << endl;
                                    }
                                    break;
                                case 3:
                                    cout << "Dolar AS ke Rupiah dipilih" << endl;
                                    {
                                        double conversionRate = 16290.00; 
                                        double dolar;
                                        cout << "Masukkan jumlah dollar: ";
                                        cin >> dolar;
                                        double rupiah = dolar * conversionRate;
                                        cout << dolar << " Dolar AS = " << rupiah << " Rupiah" << endl;
                                    }
                                    break;
                                case 4:
                                    cout << "Dolar AS ke Euro dipilih" << endl;
                                    {
                                        double conversionRate = 0.92; 
                                        double dolar;
                                        cout << "Masukkan jumlah dolar: ";
                                        cin >> dolar;
                                        double euro = dolar * conversionRate;
                                        cout << dolar << " Dolar AS = " << euro << " Euro" << endl;
                                    }
                                    break;
                                case 5:
                                    cout << "Euro ke Rupiah dipilih" << endl;
                                    {
                                        double conversionRate = 17645.33; 
                                        double euro;
                                        cout << "Masukkan jumlah Euro: ";
                                        cin >> euro;
                                        double rupiah = euro * conversionRate;
                                        cout << euro << " Euro = " << rupiah << " Rupiah" << endl;
                                    }
                                    break;
                                case 6:
                                    cout << "Euro ke Dolar AS dipilih" << endl;
                                    {
                                        double conversionRate = 1.08; 
                                        double euro;
                                        cout << "Masukkan jumlah Euro: ";
                                        cin >> euro;
                                        double dolar = euro * conversionRate;
                                        cout << euro << " Euro = " << dolar << " Dolar AS" << endl;
                                    }
                                    break;
                                case 7:
                                    cout << "Kembali ke menu utama" << endl;
                                    break;
                                default:
                                    cout << "Pilihan tidak valid, silakan coba lagi" << endl;
                            }
                        } while (pilih_lagi != 7);
                        break;
                    }
                    case 2: {
                        int pilih_lagi;
                        do {
                            cout << "Konversi Jarak" << endl;
                            cout << "1. Kilometer ke Meter" << endl;
                            cout << "2. Kilometer ke Centimeter" << endl;
                            cout << "3. Meter ke Kilometer" << endl;
                            cout << "4. Meter ke Centimeter" << endl;
                            cout << "5. Centimeter ke Kilometer" << endl;
                            cout << "6. Centimeter ke Meter" << endl;
                            cout << "7. Kembali" << endl;
                            cout << "Pilih opsi: ";
                            cin >> pilih_lagi;

                            system("CLS"); 

                            switch (pilih_lagi) {
                                case 1:
                                    cout << "Kilometer ke Meter dipilih" << endl;
                                    {
                                        double KonversiJarak = 1000.00; 
                                        double KM;
                                        cout << "Masukkan jumlah Kilometer: ";
                                        cin >> KM;
                                        double Meter = KM * KonversiJarak;
                                        cout << KM << " Kilometer = " << Meter << " Meter" << endl;
                                    }
                                    break;
                                case 2:
                                    cout << "Kilometer ke Centimeter dipilih" << endl;
                                    {
                                        double KonversiJarak = 100000.00; 
                                        double KM;
                                        cout << "Masukkan jumlah Kilometer: ";
                                        cin >> KM;
                                        double CM = KM * KonversiJarak;
                                        cout << KM << " Kilometer = " << CM << " Centimeter" << endl;
                                    }
                                    break;
                                case 3:
                                    cout << "Meter ke Kilometer dipilih" << endl;
                                    {
                                        double KonversiJarak = 0.001; 
                                        double M;
                                        cout << "Masukkan jumlah Meter: ";
                                        cin >> M;
                                        double KM = M * KonversiJarak;
                                        cout << M << " Meter = " << KM << " kilometer" << endl;
                                    }
                                    break;
                                case 4:
                                    cout << "Meter ke Centimeter dipilih" << endl;
                                    {
                                        double KonversiJarak = 100.00; 
                                        double M;
                                        cout << "Masukkan jumlah Meter: ";
                                        cin >> M;
                                        double CM = M * KonversiJarak;
                                        cout << M << " Meter = " << CM << " Centimeter" << endl;
                                    }
                                    break;
                                case 5:
                                    cout << "Centimeter ke Kilometer dipilih" << endl;
                                    {
                                        double KonversiJarak = 0.00001; 
                                        double CM;
                                        cout << "Masukkan jumlah Centimeter: ";
                                        cin >> CM;
                                        double KM = CM * KonversiJarak;
                                        cout << CM << " Centimeter = " << KM << " Kilometer" << endl;
                                    }
                                    break;
                                case 6:
                                    cout << "Centimeter ke Meter dipilih" << endl;
                                    {
                                        double KonversiJarak = 0.01; 
                                        double CM;
                                        cout << "Masukkan jumlah Centimeter: ";
                                        cin >> CM;
                                        double M = CM * KonversiJarak;
                                        cout << CM << " Centimeter = " << M << " Meter" << endl;
                                    }
                                    break;
                                case 7:
                                    cout << "Kembali ke menu utama" << endl;
                                    break;
                                default:
                                    cout << "Pilihan tidak valid, silakan coba lagi" << endl;
                            }
                        } while (pilih_lagi != 7);
                        break;
                    }
                    case 3: {
                        int pilih_lagi;
                        do {
                            cout << "Konversi Waktu" << endl;
                            cout << "1. Jam ke Menit" << endl;
                            cout << "2. Jam ke Detik" << endl;
                            cout << "3. Menit ke Jam" << endl;
                            cout << "4. Menit ke Detik" << endl;
                            cout << "5. Detik ke Jam" << endl;
                            cout << "6. Detik ke Menit" << endl;
                            cout << "7. Kembali" << endl;
                            cout << "Pilih opsi: ";
                            cin >> pilih_lagi;

                            system("CLS"); 

                            switch (pilih_lagi) {
                                case 1:
                                    cout << "Jam ke Menit dipilih" << endl;
                                    {   
                                        double KonversiWaktu = 60.00; 
                                        double Jam;
                                        cout << "Masukkan jumlah Jam: ";
                                        cin >> Jam;
                                        double Menit = Jam * KonversiWaktu;
                                        cout << Jam << " Jam = " << Menit << " Menit" << endl;
                                    }
                                    break;
                                case 2:
                                    cout << "Jam ke Detik dipilih" << endl;
                                    {   
                                        double KonversiWaktu = 3600.00; 
                                        double Jam;
                                        cout << "Masukkan jumlah Jam: ";
                                        cin >> Jam;
                                        double Detik = Jam * KonversiWaktu;
                                        cout << Jam << " Jam = " << Detik << " Detik" << endl;
                                    }
                                    break;
                                case 3:
                                    cout << "Menit ke Jam dipilih" << endl;
                                    {   
                                        double KonversiWaktu = 1.00 / 60.00; 
                                        double Menit;
                                        cout << "Masukkan jumlah Menit: ";
                                        cin >> Menit;
                                        double Jam = Menit * KonversiWaktu;
                                        cout << Menit << " Menit = " << Jam << " Jam" << endl;
                                    }
                                    break;
                                case 4:
                                    cout << "Menit ke Detik dipilih" << endl;
                                    {   
                                        double KonversiWaktu = 60.00; 
                                        double Menit;
                                        cout << "Masukkan jumlah Menit: ";
                                        cin >> Menit;
                                        double Detik = Menit * KonversiWaktu;
                                        cout << Menit << " Menit = " << Detik << " Detik" << endl;
                                    }
                                    break;
                                case 5:
                                    cout << "Detik ke Jam dipilih" << endl;
                                    {   
                                        double KonversiWaktu = 1.00 / 3600.00; 
                                        double Detik;
                                        cout << "Masukkan jumlah Detik: ";
                                        cin >> Detik;
                                        double Jam = Detik * KonversiWaktu;
                                        cout << Detik << " Detik = " << Jam << " Jam" << endl;
                                    }
                                    break;
                                case 6:
                                    cout << "Detik ke Menit dipilih" << endl;
                                    {   
                                        double KonversiWaktu = 1.00 / 60.00; 
                                        double Detik;
                                        cout << "Masukkan jumlah Detik: ";
                                        cin >> Detik;
                                        double Menit = Detik * KonversiWaktu;
                                        cout << Detik << " Detik = " << Menit << " Menit" << endl;
                                    }
                                    break;
                                case 7:
                                    cout << "Kembali ke menu utama" << endl;
                                    break;
                                default:
                                    cout << "Pilihan tidak valid, silakan coba lagi" << endl;
                            }
                        } while (pilih_lagi != 7);
                        break;
                    }
                    case 4:
                        cout << "Logout berhasil" << endl;
                        break;
                    default:
                        cout << "Pilihan tidak valid, silakan coba lagi" << endl;
                }
            } while (pilih != 4);

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