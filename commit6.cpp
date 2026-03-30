#include <iostream>
using namespace std;

int kodejurusan;
string namajurusan;
string statusjurusan;

void pilihanjurusan() {
    switch (kodejurusan) {
        case 1:
            namajurusan = "Teknologi Informasi";
            break;
        case 2:
            namajurusan = "Teknik Elektro";
            break;
        case 3:
            namajurusan = "Sistem Informasi";
            break;
    }
}