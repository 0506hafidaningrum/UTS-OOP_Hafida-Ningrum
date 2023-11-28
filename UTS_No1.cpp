#include <iostream>

class PersegiPanjang {
public:
    // Setter
    void setPanjang(double p = 0.0) { panjang = p; }
    void setLebar(double l = 0.0) { lebar = l; }

    // Getter
    double getPanjang() const { return panjang; }
    double getLebar() const { return lebar; }

    // Method untuk menghitung luas persegi panjang
    double hitungLuas() const { return panjang * lebar; }

    // Method untuk menghitung keliling persegi panjang
    double hitungKeliling() const { return 2 * (panjang + lebar); }

private:
    double panjang;
    double lebar;
};

int main() {
    PersegiPanjang persegi;
    persegi.setPanjang(5.0);
    persegi.setLebar(3.0);

    std::cout << "Panjang: " << persegi.getPanjang() << std::endl;
    std::cout << "Lebar: " << persegi.getLebar() << std::endl;
    std::cout << "Luas: " << persegi.hitungLuas() << std::endl;
    std::cout << "Keliling: " << persegi.hitungKeliling() << std::endl;

    return 0;
}
