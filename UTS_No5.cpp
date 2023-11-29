#include <iostream>
#include <string>

using namespace std;

class Mobil {
private:
    string nama;
    string model;
    double kecepatan;

public:
    Mobil(string nama, string model) : nama(nama), model(model), kecepatan(0) {}

    void tampilkanInfo() const {
        cout << "Mobil: " << nama << " - Model: " << model << " - Kecepatan: " << kecepatan << " km/h" << endl;
    }

    void percepat(double tambahKecepatan) {
        kecepatan += tambahKecepatan;
        cout << "Mobil dipercepat. Kecepatan sekarang: " << kecepatan << " km/h" << endl;
    }

    void perlambat(double kurangKecepatan) {
        if (kecepatan >= kurangKecepatan) {
            kecepatan -= kurangKecepatan;
            cout << "Mobil diperlambat. Kecepatan sekarang: " << kecepatan << " km/h" << endl;
        } else {
            cout << "Mobil tidak bisa berhenti lebih cepat dari ini." << endl;
        }
    }
};

int main() {
    Mobil mobil1("Mobil Sport", "Chevrolet Camaro ZL1");

    mobil1.tampilkanInfo();

    mobil1.percepat(200);
    mobil1.tampilkanInfo();

    mobil1.perlambat(20);
    mobil1.tampilkanInfo();


    return 0;
}
