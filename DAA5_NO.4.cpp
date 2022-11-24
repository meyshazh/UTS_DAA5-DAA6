#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

struct data {
	string nama[30];
    string nim[9];
};

int main() {
    int n;
    data mhs;
    
    cout << endl;
    cout << " Banyak data yang akan di-input: ";
    cin >> n;
    cout << " __________________________________";
    cout << endl << endl << endl;
    
    for (int i=0; i<n; i++) {
    	
    	cout << "\t";
    	cout << "  DATA MAHASISWA ";
        cout << i+1 << " ";
        cout << endl;
        cout << "\t";
        cout << "+==================+";
        cout << endl;
        
    	cout << "Nama	: ";
    	cin >> mhs.nama[i];
	    cout << "NIM	: ";
	    cin >> mhs.nim[i];
	    cout << endl;
	}
	
	//sorting
	for (int i=1; i<n; i++) {
		for (int j=n-1; j>=i; j--) {
			if (mhs.nim[j] < mhs.nim[j-1]) {
				swap (mhs.nama[j], mhs.nama[j-1]);
				swap (mhs.nim[j], mhs.nim[j-1]);
			}
		}
	}

	system ("cls");
	for (int i=0; i<n; i++) {
	    	cout << endl;
	    	cout << "\t";
	    	cout << "  DATA MAHASISWA ";
	        cout << i+1 << " ";
	        cout << endl;
	        cout << "\t";
	        cout << "+=================+";
	        cout << endl;
	    	cout << "Nama		: " << mhs.nama[i] << endl;
		    cout << "NIM		: " << mhs.nim[i] << endl;
	}

	return 0;
}
