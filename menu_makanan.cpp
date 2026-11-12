#include <iostream>
using namespace std;

int main() {
    int pilihan, jumlah, harga, total;

    cout << "===== MENU MAKANAN =====" << endl;
    cout << "1. Soto  : Rp15000" << endl;
    cout << "2. Rawon : Rp20000" << endl;

    cout << "Pilih menu: ";
    cin >> pilihan;

    cout << "Jumlah pesanan: ";
    cin >> jumlah;

    if (pilihan == 1) {
        harga = 15000;
        cout << "Anda memilih Soto" << endl;
    } 
    else if (pilihan == 2) {
        harga = 20000;
        cout << "Anda memilih Rawon" << endl;
    } 
    else {
        cout << "Menu tidak tersedia!" << endl;
        return 0;
    }

    total = harga * jumlah;

    cout << "Total pembayaran: Rp" << total << endl;

    return 0;
}
