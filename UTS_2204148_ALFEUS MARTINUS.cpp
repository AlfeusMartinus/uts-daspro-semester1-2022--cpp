// NAMA    : Alfeus Martinus
// NIM     : 2204148
// KELAS   : RPL-1A

#include <iostream>
#include <math.h>
using namespace std;

void menuLogin (){
    string x, y;
    string username, password;

        cout << "==============";
        cout << "PORTAL LOGIN";
        cout << "==============\n\n";

            for (int i = 2; i >= 0 ; --i)
            {   
                cout << "Masukan username anda\t\t: ";
                cin >> y;
                cout << "Masukan password anda\t\t: ";
                cin >> x;

                username = "utsdaspro";
                password = "rpl2022";

                    if (x == password && y == username)
                    {
                        cout << "SELAMAT ANDA BERHASIL LOGIN"<< endl << endl;
                        break;
                    }
                    else if (i == 0)
                    {
                        cout << "Anda tidak diperkenankan mengakses aplikasi ini!"<< endl;
                        break;
                    }
                        cout <<"Login salah! Kesempatan anda " << i << " kali lagi"<<endl;
            }
}

void nomorSatu (){
    int input, hitunggenap, hitungganjil, jumlah;

    hitunggenap = 0;
    hitungganjil = 0;
    jumlah = 0;

        cout << "Masukan bilangan bulat: ";
        cin >> input;
            while (input >= 0)
            {
                if (input >= 0)
                {
                    if (input % 2 == 0) 
                    {
                        hitunggenap++;
                        cout << "masukan bilangan bulat: ";
                    } else{
                        hitungganjil++;
                        cout << "masukan bilangan bulat: ";
                    }
                        

                    if (input > 0) 
                    {
                        jumlah++;
                    } else {
                    }
                
                    cin >> input;
                }
            }
            cout << endl << endl;
            cout << "Bilangan genap ada: " << hitunggenap << endl;
            cout << "Bilangan ganjil ada: " << hitungganjil << endl;
            cout << endl;
            cout << "Jumlah bilangan ganjil + genap: " << jumlah << endl;
}

void nomorDua (){
    int input;

        cout << "PROGRAM BERNYANYI ANAK AYAM" << endl;
        cout << "Masukan jumlah perulangan lagu: ";
        cin >> input;

            for (int i = input; i > 0; i--)
            {
                if (i == 0)
                {
                    cout << "Anak ayam turun " << i <<endl;
                    cout << "Mati satu tinggalah " << endl;
                    cout << endl;
                }
                else
                {
                    cout << "Anak ayam turun " << i <<endl;
                    cout << "Mati satu tinggalah " << i-1 << endl;
                }
            }
}

void nomorTiga (){
    float a, b, c;
    float Diskriminan, Akar1, Akar2;
    string jenis, untukFormatB, untukFormatC;

        cout << "PROGRAM MENCARI AKAR-AKAR PERSAMAAN KUADRAT" << endl;
        cout << "DENGAN FORMAT AKAR PERSAMAAN KUADRAT ---> [ax^2 + bx +c] " << endl;
        cout << endl;
        cout << "Masukan Variabel untuk a: ";
        cin >> a;
        cout << "Masukan Variabel untuk b: ";
        cin >> b;
        cout << "Masukan Variabel untuk c: ";
        cin >> c;

        Diskriminan = (b*b) - (4*a*c);
        Akar1 = (-b + sqrt(Diskriminan)) / (2*a);
        Akar2 = (-b - sqrt(Diskriminan)) / (2*a);

            // Kondisi b
            if(b < 0){
                untukFormatB = " ";
            }else{
                untukFormatB = " + ";
            }
            // Kondisi c
            if(c < 0){
                untukFormatC = " ";
            }else{
                untukFormatC = " + ";
            }
            // Jenis akar
            if (Diskriminan > 0){
                jenis = "Real dan Berbeda";
            }else if (Diskriminan = 0){
                jenis = "Real daan sama";
            }else if (Diskriminan < 0){
                jenis = "Tidak real / Imajiner";
            }

                cout << endl;
                cout << "HASIL PERSAMAAN KUADRAT SEBAGAI BERIKUT." << endl;
                cout << "Persamaan Kuadrat\t: " << a << "x^2" << untukFormatB << b << "x" << untukFormatC << c << " = 0" <<endl;
                cout << "Jenis Akar-Akar\t\t: " << jenis << endl;
                cout << "Nilai Akar 1\t\t: " << Akar1 << endl;
                cout << "Nilai Akar 2\t\t: " << Akar2 << endl;
}


int main (){
    int angka;
    char ulang;
    system ("cls");
    menuLogin ();
    system ("pause");
    do{ system ("cls");
        cout << "PROGRAM APLIKASI DARI CLIENT X\n\n" << endl;
        cout << "==========MENU==========" << endl;
        cout << "[1] PROGRAM MEMBACA JENIS BILANGAN" << endl;
        cout << "[2] PROGRAM UNTUK BERNYANYI ANAK AYAM" << endl;
        cout << "[3] PROGRAM MENGHITUNG AKAR PERSAMAAN KUADRAT" << endl;
        cout << "Masukan Angka : ";
        cin >> angka;
        cout << endl;
        system ("cls");
            switch (angka)
            {
            case 1 :
                nomorSatu();
                system ("pause");
                system ("cls");
                break;
            case 2 :
                nomorDua();
                system ("pause");
                system ("cls");
                break;
            case 3 :
                nomorTiga();
                system ("pause");
                system ("cls");
                break;
            default : 
                cout << "INPUTAN SALAH, MOHON COBA LAGI!";
                break;
            }
            cout << "Back to menu [y/n]\t:";
            cin >> ulang;
        }
    
    while (ulang == 'y');
    {
        return 0;
    }
}