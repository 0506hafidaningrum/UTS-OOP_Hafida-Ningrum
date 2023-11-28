#include <iostream>
#include <cmath>

class Tabung {
public:
    double jariJari;
    double tinggi;

public:
    // Setter
    void setJariJari(double r = 0.0) { jariJari = r; }
    void setTinggi(double h = 0.0) { tinggi = h; }

    // Getter
    double getJariJari() const { return jariJari; }
    double getTinggi() const { return tinggi; }

    // Method untuk menghitung volume tabung
    double hitungVolume() const {
        return M_PI * std::pow(jariJari, 2) * tinggi;
    }

    // Method untuk menghitung luas permukaan tabung
    double hitungLuasPermukaan() const {
        return 2 * M_PI * jariJari * (jariJari + tinggi);
    }
};

int main() {
    // Membuat objek dari kelas Tabung
    Tabung tabung;

    // Mengatur property objek
    tabung.setJariJari(2.0);
    tabung.setTinggi(2.0);

    // Menghitung dan menampilkan volume dan luas permukaan
    std::cout << "Volume tabung: " << tabung.hitungVolume() << std::endl;
    std::cout << "Luas permukaan tabung: " << tabung.hitungLuasPermukaan() << std::endl;

    return 0;
}
