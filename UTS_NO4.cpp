#include <iostream>
#include <vector>
#include <string>

using namespace std;

class MataKuliah {
    string namaMataKuliah;
    int nilai;

public:
    MataKuliah(string nama, int nilai) {
        this->namaMataKuliah = nama;
        this->nilai = nilai;
    }

    string getNamaMataKuliah() const {
        return namaMataKuliah;
    }

    int getNilai() const {
        return nilai;
    }
};

class Mahasiswa {
    string nama;
    string nomorInduk;
    vector<MataKuliah> catatanAkademik;

public:
    Mahasiswa(string nama, string nomorInduk) {
        this->nama = nama;
        this->nomorInduk = nomorInduk;
    }

    string getNama() const {
        return nama;
    }

    string getNomorInduk() const {
        return nomorInduk;
    }

    void tambahMataKuliah(string nama, int nilai) {
        MataKuliah mk(nama, nilai);
        catatanAkademik.push_back(mk);
    }

    void hapusMataKuliah(string nama) {
        for (int i = 0; i < catatanAkademik.size(); i++) {
            if (catatanAkademik[i].getNamaMataKuliah() == nama) {
                catatanAkademik.erase(catatanAkademik.begin() + i);
                break;
            }
        }
    }

    void tampilkanCatatanAkademik() const {
        cout << "Catatan Akademik " << nama << " (" << nomorInduk << "):" << endl;
        for (MataKuliah mk : catatanAkademik) {
            cout << mk.getNamaMataKuliah() << " - Nilai: " << mk.getNilai() << endl;
        }
    }

    void hitungRataRataNilai() const {
        if (catatanAkademik.empty()) {
            cout << "Belum ada mata kuliah yang diambil." << endl;
        } else {
            float totalNilai = 0;
            for (MataKuliah mk : catatanAkademik) {
                totalNilai += mk.getNilai();
            }
            float rataRata = totalNilai / catatanAkademik.size();
            cout << "Rata-rata Nilai: " << rataRata << endl;
        }
    }
};

int main() {
    Mahasiswa mhs("Hafida Ningrum", "202211012");
    mhs.tambahMataKuliah("OOP", 90);
    mhs.tambahMataKuliah("AI", 85);
    mhs.tambahMataKuliah("Basis Data", 92);
    mhs.hapusMataKuliah("Basis Data");
    mhs.tampilkanCatatanAkademik();
    mhs.hitungRataRataNilai();


    return 0;
}
