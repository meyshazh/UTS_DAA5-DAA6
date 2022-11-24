#include <iostream>
#include <stack>
using namespace std;

// STACK
int main() {
	stack<string> s;
	char buku[30];
	int n;
	
	cout << "\n\tTUMPUKAN BUKU\n\n";
	cout << " Masukkan banyak buku yang akan disimpan: ";
	cin >> n;
	cout << endl;
	
	for (int i=0; i<n; i++) {
		cout << " Judul Buku " << i+1 << ": ";
		cin >> buku;
		s.push(buku);
	}

	cout << "\n   Tumpukan Buku  \n";
	cout << " +===============+";
	do {
		cout << endl;
		cout << "   " << s.top();
		s.pop();
	} while (s.size() != 0);
	
	return 0;
}
