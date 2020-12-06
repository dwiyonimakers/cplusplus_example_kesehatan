
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    int pilihan;
    int pilihanberat;
    int pilihankesehatan;

    char kelamin;

    float tinggi;
    float berat;
    float beratbadanp;
    float beratbadanw;
    float beratkurangp;
    float beratkurangw;
    float beratlebihp;
    float beratlebihw;

menu:
    cout << "==============================================" << endl;
    cout << "MENU : " << endl;
    cout << "=============================================" << endl;
    cout << "1. kalkulator berat badan dengan rumus barca" << endl;
    cout << "2. saran kesehatan " << endl;
    cout << "3. samapta " << endl;
    cout << "3. keluar dari program" << endl;
    cout << "=============================================" << endl;

    cout << "pilihan menu = " << endl;
    cin >> pilihan;

    system("clear");

    cout << "Pilihan yang kamu pilih : " << pilihan << endl;

    if (pilihan == 1)
    {
        cout << "input kan jenis kelamin anda [L/W] = " << endl;
        cin >> kelamin;
        //if yang berguna untuk menampilkan pilihan antara l dan p
        if (kelamin == 'L')
        {
            cout << "masukan tinggi badan kamu (cm)= " << endl;
            cin >> tinggi;
            cout << "masukkan berat badan kamu sekarang (kg) = " << endl;
            cin >> berat;

            //rumus untuk mengukur berat badan ideal pria
            beratbadanp = (tinggi - 100) - ((tinggi - 100) * 10 / 100);
            //berguna untuk menampilkan berat yang dikuragi untuk ke ideal
            beratkurangp = beratbadanp - berat;
            //berguna untuk menampilkan berat yang ditambah untuk ke ideal
            beratlebihp = berat - beratbadanp;

            cout << "berat badan ideal kamu seharusnya = " << beratbadanp << endl;
            //if yang berguna untuk menampilkan berat yang dikurang atau di tambah untuk ke ideal
            if (berat < beratbadanp)
            {
                cout << "berat badan yang harus di ditambah = " << beratlebihp << endl;
            }
            if (berat > beratbadanp)
            {
                cout << "berat badan yang harus di kurangi = " << beratkurangp << endl;
            }
        }
        if (pilihan == 'W')
        {
            cout << "tinggi badan kamu (cm) = " << endl;
            cin >> tinggi;
            cout << "masukkan berat badan kamu sekarang (kg) " << endl;
            cin >> berat;

            //rumus untuk mengukur berat badan ideal
            beratbadanw = (tinggi - 100) - ((tinggi - 100) * 15 / 100);
            //berguna untuk menampilkan berat yang dikuragi untuk ke ideal
            beratkurangw = beratbadanw - berat;
            //berguna untuk menampilkan berat yang ditambah untuk ke ideal
            beratlebihw = berat - beratbadanw;

            cout << "berat badan ideal kamu seharusnya = " << beratbadanw << endl;

            //if yang berguna untuk menampilkan berat yang dikurang atau di tambah untuk ke ideal
            if (berat < beratbadanw)
            {
                cout << "berat badan yang harus di ditambah = " << beratlebihw << endl;
            }
            if (berat > beratbadanw)
            {
                cout << "berat badan yang harus di kurangi = " << beratkurangw << endl;
            }
        }
    }
    if (pilihan == 2)
    {
        cout << "pilihan kesehatan yang di inginkan: " << endl;
        cout << "1. tentang varikokel " << endl;
        cout << "2. tentang varises " << endl;
        cout << "3. tentang gigi" << endl;
        cout << "4. tentang pernafasan" << endl;

        cout << "masukkan pilihan mu = " << endl;
        cin >> pilihankesehatan;

        if (pilihankesehatan == 1)
        {
            cout << "Walaupun diklaim tidak memiliki gejala, berikut beberapa hal yang mungkin bisa Anda rasakan, seperti:" << endl;
            cout << "1. Tiba-tiba muncul benjolan pada salah satu buah zakar." << endl;
            cout << "2. Skrotum membengkak dan terasa sakit bila ditekan." << endl;
            cout << "3. Garis pembuluh darah di bagian testis membesar." << endl;
            cout << "4. Mengalami nyeri yang timbul-hilang atau berulang." << endl;
            cout << "5. Lalu, kondisi ini pun kemungkinan menimbulkan rasa sakit, seperti:" << endl;
            cout << "6. Ketidaknyamanan dengan sakit yang tajam." << endl;
            cout << "7. Rasa sakit meningkat saat berdiri atau melakukan aktivitas fisik dalam waktu yang lama." << endl;
            cout << "8. Menjadi lebih buruk setelah melewati satu hari." << endl;
        }

        if (pilihan == 2)
        {
            cout << "tanda dan gejala varises yang umumnya dialami adalah:" << endl;
            cout << "Munculnya serabut atau garis-garis berwarna biru keunguan di permukaan kulit" << endl;
            cout << "Nyeri atau kaki terasa berat, khususnya setelah berdiri atau duduk dalam waktu yang lama" << endl;
            cout << "Vena terlihat menonjol dan membengkak sepanjang paha, mata kaki, atau lutut" << endl;
            cout << "Kulit terasa gatal, terutama di area tungkai bawah dan pergelangan kaki" << endl;
            cout << "Terjadi perubahan warna kulit, kulit jadi lebih tipis, dan terbentuk luka atau infeksi jaringan lunak di dekat mata kaki" << endl;
            cout << "Kaki atau area yang terjadi pembengkakan vena terasa berdenyut atau kram" << endl;
        }

        if (pilihan == 3)
        {
            cout << " kriteria gigi yang sehat untuk bisa lolos tes Polisi dan Polwan, meliputi: " << endl;
            cout << " Gigi berada dalam keadaan rapi sempurna atau utuh termasuk jaringannya" << endl;
            cout << " Gigi tidak goyang atau tanggal" << endl;
            cout << " Gigi tidak berlubang, terdapat plak dan karies atau karang gigi" << endl;
            cout << " Warna gigi putih kekuningan" << endl;
            cout << " Gusi berwarna merah muda, melekat erat pada tulang, tidak sakit, dan tidak mudah berdarah" << endl;
        }

        if (pilihan == 4)
        {
            cout << "Laju pernapasan normal bagi orang dewasa sehat adalah 16–20 napas per menit. " << endl;
            cout << "Meski bisa dipengaruhi oleh aktivitas maupun kondisi psikis saat menjelang pemeriksaan," << endl;
            cout << "ada kemungkinan Anda mengalami gangguan paru-paru atau jantung jika " << endl;
            cout << "pernapasan lebih dari 20 kali per menit." << endl;
        }
    }
    if (pilihan == 3)
    {
        string keluar;

        cout << "yakin ? (YA / TIDAK)= " << endl;
        cin >> keluar;
        if (keluar == 'YA')
        {
            exit(0);
        }
        if (keluar == 'TIDAK')
        {
            goto menu;
        }
        else
        {
            cout << "pilihan tidak ada" << endl;
        }
    }
    if (pilihan == 4)
    {

        int pilihansmapta;
        int jumlahharismapta;

        cout << "pilihan:" << endl;
        cout << "1. perkembangan progres smapta dalam 7 hari" << endl;
        cout << "2. saran smapta" << endl;

        cout << "pilihan anda" = << endl;
        cin >> pilihansmapta;
        if (pilihansmapta == 1)
        {
            cout << "masukkan jumlah hari latihan smapta = " << endl;
            cin >> jumlahharismapta;

            for (baris = 0; baris <= jumlahharismapta; baris++)
            {
                cout << " smapta hari ke-" << baris + 1 << endl;
                cout <<
            }
        }
    }
}
}
