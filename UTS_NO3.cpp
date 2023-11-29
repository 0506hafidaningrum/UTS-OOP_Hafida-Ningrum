#include <iostream>
#include <string>

using namespace std;

class RekeningBank {
public:
    string nama;
    string nomorRekening;
    double saldo;

    RekeningBank(string nm, string noRek, double sld) : nama(nm), nomorRekening(noRek), saldo(sld) {}

    void tambahSaldo(double jumlah) {
        saldo += jumlah;
        cout << "Saldo berhasil ditambahkan. Saldo sekarang: " << saldo << endl;
    }

    void tarikSaldo(double jumlah) {
        if (jumlah > saldo) {
            cout << "Saldo tidak mencukupi." << endl;
        } else {
            saldo -= jumlah;
            cout << "Penarikan berhasil. Saldo sekarang: " << saldo << endl;
        }
    }

    void tampilkanInformasi() {
        cout << "Informasi Rekening:" << endl
             << "Nama: " << nama << endl
             << "Nomor Rekening: " << nomorRekening << endl
             << "Saldo: " << saldo << endl;
    }
};

int main() {
    RekeningBank rekening("Hafida Ningrum", "202211012", 100000.0);

    rekening.tampilkanInformasi();

    rekening.tambahSaldo(50000.0);

    rekening.tarikSaldo(20000.0);

    rekening.tampilkanInformasi();

    return 0;
}
