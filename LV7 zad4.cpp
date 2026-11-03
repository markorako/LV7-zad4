

#include <iostream>
using namespace std;

int main()
{
    int dan;
    cin >> dan;

    if (dan < 1 || dan > 7)
    {
        cout << "NEISPRAVAN DAN";

    }
    else
    {
        switch (dan)
        {
        case 1:
            cout << "PONEDJELJAK" << endl;
            cout << "UTORAK" << endl;
            cout << "SRIJEDA" << endl;
            cout << "CETVRTAK" << endl;
            cout << "PETAK" << endl;
            cout << "SUBOTA" << endl;
            cout << "NEDJELJA" << endl;
            break;
        case 2:
            cout << "UTORAK" << endl;
            cout << "SRIJEDA" << endl;
            cout << "CETVRTAK" << endl;
            cout << "PETAK" << endl;
            cout << "SUBOTA" << endl;
            cout << "NEDJELJA" << endl;
            break;
        case 3:
            cout << "SRIJEDA" << endl;
            cout << "CETVRTAK" << endl;
            cout << "PETAK" << endl;
            cout << "SUBOTA" << endl;
            cout << "NEDJELJA" << endl;
            break;
        case 4:
            cout << "CETVRTAK" << endl;
            cout << "PETAK" << endl;
            cout << "SUBOTA" << endl;
            cout << "NEDJELJA" << endl;
            break;
        case 5:
            cout << "PETAK" << endl;
            cout << "SUBOTA" << endl;
            cout << "NEDJELJA" << endl;
            break;
        case 6:
            cout << "SUBOTA" << endl;
            cout << "NEDJELJA" << endl;
            break;
		case 7:
			cout << "NEDJELJA" << endl;
			break;




        }
    }
    return 0;
}

