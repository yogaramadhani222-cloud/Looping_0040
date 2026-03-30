#include <iostream>
using namespace std;

int kodejurusan;
string namajurusan;
string statuskuota;

void pilihanjurusan() {
    switch (kodejurusan) {
        case 1:
            namajurusan = "Teknologi Informasi";
            statuskuota = "Tersedia (15 Kursi)";
            break;
        case 2:
            namajurusan = "Teknik Elektro";
            statuskuota = "Kuota Penuh!";
            break;
        case 3:
            namajurusan = "Sistem Informasi";
            statuskuota = "Tersedia (5 Kursi)";
            break;
        default:
            namajurusan = "Tidak Diketahui";
            statuskuota = "Error";
    }
}