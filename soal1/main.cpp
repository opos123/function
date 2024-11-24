#include <iostream>

void tambahkali(int t, int k, int a, int n) {
    std::cout << "Masukan Nilai N : " << std::endl;
    std::cin >>n;

    for (int i = 1; i <= n; i++) {
        std::cout << "Masukan Angka ke " << i << std::endl;
        std::cin >> a;

        t += a;
        k *= a;
    }
    std::cout << "Total Jumlah = " << t << std::endl;
    std::cout << "Total Kali = " << k << std::endl;

}

int main() {
    int tambah = 0 , kali = 1, angka = 0, nilai = 0;
    tambahkali(tambah, kali, angka, nilai);

    return 0;
}



