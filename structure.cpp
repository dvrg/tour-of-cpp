#include <iostream>
using namespace std;

struct Guru
{
    string name;
    string code;
    string mapel;
    int age;
    string status;
};

void printInformation(Guru guru)
{
    cout << "Nama:   " << guru.name << '\n';
    cout << "Kode Ajar:  " << guru.code << '\n';
    cout << "Mata Pelajaran: " << guru.mapel << '\n';
    cout << "Umur: " << guru.age << " Tahun" << '\n';
    cout << "Status: " << guru.status << '\n';
    cout << "-------------------\n";
}

int main() {
    Guru anton{"Anton", "A01", "Matematika", 26, "Aktif"};
    Guru liliana{"Liliana", "A02", "Biologi", 31, "Aktif"};
    cout << "-------------------\n";
    cout << "Data Guru Saat Ini \n";
    cout << "-------------------\n";
    printInformation(anton);
    printInformation(liliana);

    return 0;
}
