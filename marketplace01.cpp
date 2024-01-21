#include <iostream>
using namespace std;

int main()
{
    int a, n, harga = 0, uang = 0, kembalian = 0;
    string password, id;
    char pilihan;
menu:
    cout << "=================================================\n";
    cout << "= = = = = = = = = W E L C O M E = = = = = = = = =\n";
    cout << "                        TO                       \n";
    cout << "= = = = = = = L A P A K   J A J A N = = = = = = =\n";
    cout << "=================================================\n\n";
    cout << "1. __________________CREATE AKUN_________________ \n";
    cout << "2. _________MASUK KE AKUN YANG SUDAH ADA_________ \n";
    cout << "Pilihan Anda: ";
    cin >> a;

    if (a == 1)
    {
        cout << "Masukkan Id Anda : ";
        cin >> id;
        cout << "Masukkan Password Anda : ";
        cin >> password;
    }

    system("cls");
listitem:
    cout << "==================================================\n";
    cout << "= = = = = = = = = = PILIH MENU = = = = = = = = = =\n";
    cout << "==================================================\n";
    cout << "1.MINUMAN\n";
    cout << "2.MAKANAN\n";
    cout << "Pilihan Anda : \n";
    cin >> a;
    system("cls");

    if (a == 1)
    {
        cout << "-----------------------\n";
        cout << "--DAFTAR MENU MINUMAN--\n";
        cout << "  -------------------  \n";
        cout << "1.Mizone\n";
        cout << "2.Ultra Milk\n";
        cout << "3.Aqua\n";
        cout << "4.Teh Kotak\n";
        cout << "5.UHT Cimory\n";
        cout << "Pilihan Anda : \n";
        cin >> a;
        system("cls");

        // menu pertama
        if (a == 1)
        {
            cout << "------>>=VARiAN MIZONE=<<-----\n";
            cout << "------------------------------\n";
            cout << "1.Mizone Apple Guava (Rp.5000)\n";
            cout << "2.Mizone Orange Lime (Rp.5000)\n";
            cin >> a;
            if (a == 1)
            {
                cout << "---------------------\n";
                cout << "Jumlah yang di pesan?\n";
                cout << "---------------------\n";
                cin >> n;

                n = n * 5000;
                harga += n;

                cout << "Apakah anda ingin memesan lagi? [Y/N]";
                cin >> pilihan;
                if (pilihan == 'y' || pilihan == 'Y')
                {
                    goto listitem;
                    system("cls");
                }
                else
                {
                }
            }
            else if (a == 2)
            {
                cout << "---------------------\n";
                cout << "Jumlah yang di pesan?\n";
                cout << "---------------------\n";
                cin >> n;

                n = n * 5000;
                harga += n;

                cout << "Apakah anda ingin memesan lagi? [Y/N]";
                cin >> pilihan;
                if (pilihan == 'y' || pilihan == 'Y')
                {
                    goto listitem;
                    system("cls");
                }
                else
                {
                }
            }
        }

        // menu kedua
        else if (a == 2)
        {
            cout << "->>=VARIAN SUSU ULTRA MILK=<<-\n";
            cout << "------------------------------\n";
            cout << "1.Rasa Coklat (Rp.4500)\n";
            cout << "2.Rasa Strawberry (Rp.4500)\n";
            cout << "3.Rasa Full Cream (Rp.4500)\n";
            cin >> a;
            if (a == 1)
            {
                cout << "---------------------\n";
                cout << "Jumlah yang di pesan?\n";
                cout << "---------------------\n";
                cin >> n;

                n = n * 4500;
                harga += n;

                cout << "Apakah anda ingin memesan lagi? [Y/N]";
                cin >> pilihan;
                if (pilihan == 'y' || pilihan == 'Y')
                {
                    goto listitem;
                    system("cls");
                }
                else
                {
                }
            }
            else if (a == 2)
            {
                cout << "---------------------\n";
                cout << "Jumlah yang di pesan?\n";
                cout << "---------------------\n";
                cin >> n;

                n = n * 4500;
                harga += n;

                cout << "Apakah anda ingin memesan lagi [Y/N]";
                cin >> pilihan;
                if (pilihan == 'y' || pilihan == 'Y')
                {
                    goto listitem;
                    system("cls");
                }
                else
                {
                }
            }
            else if (a == 3)
            {
                cout << "---------------------\n";
                cout << "Jumlah yang di pesan?\n";
                cout << "---------------------\n";
                cin >> n;

                n = n * 4500;
                harga += n;

                cout << "Apakah anda ingin memesan lagi [Y/N]";
                cin >> pilihan;
                if (pilihan == 'y' || pilihan == 'Y')
                {
                    goto listitem;
                    system("cls");
                }
                else
                {
                }
            }
        }

        // menu ketiga
        else if (a == 3)
        {
            cout << "->>=VARIAN AQUA=<<-\n";
            cout << "-------------------\n";
            cout << "1.330 ml (Rp.1700)\n";
            cout << "2.600 ml (Rp.2300)\n";
            cout << "3.1500 ml (Rp.4300)\n";
            cout << "Pilihan Anda : ";
            cin >> a;
            if (a == 1)
            {
                cout << "---------------------\n";
                cout << "Jumlah yang di pesan?\n";
                cout << "---------------------\n";
                cin >> n;

                n = n * 1700;
                harga += n;

                cout << "Apakah anda ingin memesan lagi? [Y/N]";
                cin >> pilihan;
                if (pilihan == 'y' || pilihan == 'Y')
                {
                    goto listitem;
                    system("cls");
                }
                else
                {
                }
            }
            else if (a == 2)
            {
                cout << "---------------------\n";
                cout << "Jumlah yang di pesan?\n";
                cout << "---------------------\n";
                cin >> n;

                n = n * 2300;
                harga += n;

                cout << "Apakah anda ingin memesan lagi ? [Y/N]";
                cin >> pilihan;
                if (pilihan == 'y' || pilihan == 'Y')
                {
                    goto listitem;
                    system("cls");
                }
                else
                {
                }
            }
            else if (a == 3)
            {
                cout << "---------------------\n";
                cout << "Jumlah yang di pesan?\n";
                cout << "---------------------\n";
                cin >> n;

                n = n * 4300;
                harga += n;

                cout << "Apakah anda ingin memesan lagi ? [Y/]";
                cin >> pilihan;
                if (pilihan == 'y' || pilihan == 'Y')
                {
                    goto listitem;
                    system("cls");
                }
                else
                {
                }
            }
        }

        // menu keempat
        else if (a == 4)
        {
            cout << "->>=VARIAN TEH KOTAK=<<-\n";
            cout << "------------------------\n";
            cout << "1.Rasa Apel (Rp.3250)\n";
            cout << "2.Rasa Teh Melati (Rp.3250)\n";

            cin >> a;
            if (a == 1)
            {
                cout << "---------------------\n";
                cout << "Jumlah yang di pesan?\n";
                cout << "---------------------\n";
                cin >> n;

                n = n * 3250;
                harga += n;

                cout << "Apakah anda ingin memesan lagi? [Y/N]";
                cin >> pilihan;
                if (pilihan == 'y' || pilihan == 'Y')
                {
                    goto listitem;
                    system("cls");
                }
                else
                {
                }
            }
            else if (a == 2)
            {
                cout << "---------------------\n";
                cout << "Jumlah yang di pesan?\n";
                cout << "---------------------\n";
                cin >> n;

                n = n * 3250;
                harga += n;

                cout << "Apakah anda ingin memesan lagi? [Y/N]";
                cin >> pilihan;
                if (pilihan == 'y' || pilihan == 'Y')
                {
                    goto listitem;
                    system("cls");
                }
                else
                {
                }
            }
        }

        // menu kelima
        else if (a == 5)
        {
            cout << "->>=VARIAN SUSU CIMORY=<<-\n";
            cout << "--------------------------\n";
            cout << "1.Rasa Coklat (Rp.5100)\n";
            cout << "2.Rasa Almond (Rp.5100)\n";
            cout << "3.Rasa Strawberry (Rp.5100)\n";
            cin >> a;
            if (a == 1)
            {
                cout << "---------------------\n";
                cout << "Jumlah yang di pesan?\n";
                cout << "---------------------\n";
                cin >> n;

                n = n * 5100;
                harga += n;

                cout << "Apakah anda ingin memesan lagi? [Y/N]";
                cin >> pilihan;
                if (pilihan == 'y' || pilihan == 'Y')
                {
                    goto listitem;
                    system("cls");
                }
                else
                {
                }
            }
            else if (a == 2)
            {
                cout << "---------------------\n";
                cout << "Jumlah yang di pesan?\n";
                cout << "---------------------\n";
                cin >> n;

                n = n * 5100;
                harga += n;

                cout << "Apakah anda ingin memesan lagi? [Y/N]";
                cin >> pilihan;
                if (pilihan == 'y' || pilihan == 'Y')
                {
                    goto listitem;
                    system("cls");
                }
                else
                {
                }
            }
            else if (a == 3)
            {
                cout << "---------------------\n";
                cout << "Jumlah yang di pesan?\n";
                cout << "---------------------\n";
                cin >> n;

                n = n * 5100;
                harga += n;

                cout << "Apakah anda ingin memesan lagi? [Y/N]";
                cin >> pilihan;
                if (pilihan == 'y' || pilihan == 'Y')
                {
                    goto listitem;
                    system("cls");
                }
                else
                {
                }
            }
        }

    pembayaran1:
        cout << "STRUK BELANJA DI TOKO KAMI\n";
        cout << "-----------------------------\n";
        cout << "Total Pembayaran    =" << harga << endl;
        cout << "-----------------------------\n";
        cout << "Masukan Jumlah Uang = ";
        cin >> uang;
        if (uang >= harga)
        {
           kembalian = uang - harga;
            cout << "Kembalian           = " << kembalian << endl;
            cout << "-----------------------------\n";
            cout << "====== TERIMAKASIH KAK ======" << endl;
            cout << "SUDAH BERBELANJA DI TOKO KAMI";
        }
        else if (uang < harga)
        {
            cout << " MAAF UANG ANDA TIDAK CUKUP " << endl;
            cin.ignore();
            cout << "TEKAN ENTER UNTUK KEMBALI KE MENU PEMBAYARAN\n";
            cin.get();
            system("cls");
            goto pembayaran1;
        }
    }
    else if (a == 2)
    {
        cout << "-----------------------\n";
        cout << "--DAFTAR MENU MAKANAN--\n";
        cout << "  -------------------  \n";
        cout << "1.Cemilan\n";
        cout << "2.Makanan Berat\n";
        cout << "pilihan anda : \n";
        cin >> a;
        system("cls");

        // menu makanan pertama
        if (a == 1)
        {
            cout << "->>=CEMILAN=<<-\n";
            cout << "---------------\n";
            cout << "1.Cireng 500 gram (Rp.20000)\n";
            cout << "2.Basreng 250 gram (Rp.17000)\n";
            cout << "3.Stik Balado 400 gram (Rp.15000)\n";
            cin >> a;
            if (a == 1)
            {
                cout << "---------------------\n";
                cout << "Jumlah yang di pesan?\n";
                cout << "---------------------\n";
                cin >> n;

                n = n * 20000;
                harga += n;

                cout << "Apakah anda ingin memesan lagi? [Y/N]";
                cin >> pilihan;
                if (pilihan == 'y' || pilihan == 'Y')
                {
                    goto listitem;
                    system("cls");
                }
                else
                {
                }
            }
            else if (a == 2)
            {
                cout << "---------------------\n";
                cout << "Jumlah yang di pesan?\n";
                cout << "---------------------\n";
                cin >> n;

                n = n * 17000;
                harga += n;

                cout << "Apakah anda ingin memesan lagi? [Y/N]";
                cin >> pilihan;
                if (pilihan == 'y' || pilihan == 'Y')
                {
                    goto listitem;
                    system("cls");
                }
                else
                {
                }
            }
            else if (a == 3)
            {
                cout << "---------------------\n";
                cout << "Jumlah yang di pesan?\n";
                cout << "---------------------\n";
                cin >> n;

                n = n * 15000;
                harga += n;

                cout << "Apakah anda ingin memesan lagi? [Y/N]";
                cin >> pilihan;
                if (pilihan == 'y' || pilihan == 'Y')
                {
                    goto listitem;
                    system("cls");
                }
                else
                {
                }
            }
        }

        // menu pilihan kedua
        if (a == 2)
        {
            cout << "->>=MAKANAN BERAT=<<-\n";
            cout << "---------------------\n";
            cout << "1.Abon Ayam 100 gram (Rp.15000)\n";
            cout << "2.Nugget 450 gram (Rp.38500)\n";
            cout << "3.Sarden 155 gram (Rp.9000)\n";
            cout << "4.Bakso Aci per bungkus (Rp.10800)\n";
            cin >> a;
            if (a == 1)
            {
                cout << "---------------------\n";
                cout << "Jumlah yang di pesan?\n";
                cout << "---------------------\n";
                cin >> n;

                n = n * 15000;
                harga += n;

                cout << "Apakah anda ingin memesan lagi? [Y/N]";
                cin >> pilihan;
                if (pilihan == 'y' || pilihan == 'Y')
                {
                    goto listitem;
                    system("cls");
                }
                else
                {
                }
            }
            else if (a == 2)
            {
                cout << "---------------------\n";
                cout << "Jumlah yang di pesan?\n";
                cout << "---------------------\n";
                cin >> n;

                n = n * 38500;
                harga += n;

                cout << "Apakah anda ingin memesan lagi? [Y/N]";
                cin >> pilihan;
                if (pilihan == 'y' || pilihan == 'Y')
                {
                    goto listitem;
                    system("cls");
                }
                else
                {
                }
            }
            else if (a == 3)
            {
                cout << "---------------------\n";
                cout << "Jumlah yang di pesan?\n";
                cout << "---------------------\n";
                cin >> n;

                n = n * 9000;
                harga += n;

                cout << "Apakah anda ingin memesan lagi? [Y/N]";
                cin >> pilihan;
                if (pilihan == 'y' || pilihan == 'Y')
                {
                    goto listitem;
                    system("cls");
                }
                else
                {
                }
            }
            else if (a == 4)
            {
                cout << "---------------------\n";
                cout << "Jumlah yang di pesan?\n";
                cout << "---------------------\n";
                cin >> n;

                n = n * 10800;
                harga += n;

                cout << "Apakah anda ingin memesan lagi? [Y/N]";
                cin >> pilihan;
                if (pilihan == 'y' || pilihan == 'Y')
                {
                    goto listitem;
                    system("cls");
                }
                else
                {
                }
            }
        }
        
    pembayaran2:
        cout << "STRUK BELANJA DI TOKO KAMI\n";
        cout << "-----------------------------\n";
        cout << "Total Pembayaran    =" << harga << endl;
        cout << "-----------------------------\n";
        cout << "Masukan Jumlah Uang = ";
        cin >> uang;
        if (uang >= harga)
        {
           kembalian = uang - harga;
            cout << "Kembalian           = " << kembalian << endl;
            cout << "-----------------------------\n";
            cout << "====== TERIMAKASIH KAK ======" << endl;
            cout << "SUDAH BERBELANJA DI TOKO KAMI";
        }
        else if (uang < harga)
        {
            cout << "MAAF UANG ANDA TIDAK CUKUP" << endl;
            cin.ignore();
            cout << "TEKAN ENTER UNTUK KEMBALI KE MENU PEMBAYARAN\n";
            cin.get();
            system("cls");
            goto pembayaran2;
        }
    }

    return 0;
}
