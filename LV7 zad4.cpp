
#include <iostream>

using namespace std;

int main() {
    int dan;
    cin >> dan;

    // Prvo provjeravamo je li unos izvan raspona 1-7
    if (dan < 1 || dan > 7) {
        cout << "NEISPRAVAN DAN" << endl;
    } else {
        // Namjerno izostavljamo break između case-ova kako bi se ispis nastavio do kraja tjedna
        switch (dan) {
            case 1:
                cout << "PONEDJELJAK" << endl;
            case 2:
                cout << "UTORAK" << endl;
            case 3:
                cout << "SRIJEDA" << endl;
            case 4:
                cout << "CETVRTAK" << endl;
            case 5:
                cout << "PETAK" << endl;
            case 6:
                cout << "SUBOTA" << endl;
            case 7:
                cout << "NEDJELJA" << endl;
                break; // Tek ovdje prekidamo jer je nedjelja zadnji dan
        }
    }

    return 0;
}

