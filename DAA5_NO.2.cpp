#include <iostream>
using namespace std;

struct data {
	string nama[20];
} item;

int main() {
	int n, i, harga[20], jumlah[20], subtotal[20], total, diskon, bayar;
	
	cout << "\n +====================+";
	cout << "\n |   KASIR SWALAYAN   |\n";
	cout << " +====================+\n\n";
	cout << " DISKON MINIMAL BELANJA RP200.000!!";
	cout << "\n\n Banyak Transaksi: ";
	cin >> n;
	cout << endl;
	
	for (int i=0; i<n; i++) {
		cout << " Nama Item	: ";
		cin >> item.nama[i];
		cout << " Harga Item	: Rp.";
		cin >> harga[i];
		cout << " Jumlah Item	: Rp.";
		cin >> jumlah[i];
		cout << endl;
		
		subtotal[i] = harga[i] * jumlah[i];
		total = total + subtotal[i];
	}
	
	if (total >= 200000) {
		diskon = 0.15 * total;
	}
	else {
		diskon = 0;
	}
	
	cout << " ==================================" << endl;
	cout << " Jumlah Bayar	: Rp." << total << endl;
	cout << " Diskon		: Rp." << diskon << endl;
	cout << " Total Bayar	: Rp." << total-diskon << endl;
	cout << " Bayar		: Rp.";
	cin >> bayar; // Uang pembeli
	cout << " Kembali	: Rp." << (bayar-(total-diskon)) << endl;
	
	return 0;
}
