#include <iostream>
#include <queue>
using namespace std;

// QUEUE
int main() {
	queue<string> q;
	string nama, nmr;
	int n;
	
	cout << "\n\tANTRIAN TELLER BANK\n\n";
	cout << " Banyaknya antrian: ";
	cin >> n;
	cout << endl;
	
	for (int i=0; i<n; i++) {
		cout << " Masukkan nama		: ";
		cin >> nama;
		cout << " Masukkan nomor antrian	: ";
		cin >> nmr;
		q.push(nama);
		(q.size() != 0);
		cout << endl;
	}
	
	cout << endl;
	cout << " Urutan Antri Teller \n";
	cout << "---------------------";
	for (int j=0; j<n; j++) {
		cout << endl;
		cout << "  " << q.front();
		q.pop();
	}
	return 0;
}
