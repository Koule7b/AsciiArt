#include <iostream>

using namespace std;
void vykresMece() {
    cout << "      ^" << endl;
    cout << "     ^ ^    " << endl;
    cout << "    ^   ^   " << endl;
    for (int i = 0; i < 7; i++) {
        cout << "    |   |   " << endl;
    }
    cout << "<";
    for (int k = 1; k < 12; k++) {
        cout << "-";
    }
    cout << ">";
    cout << endl;
    for (int i = 0; i < 3; i++) {
        cout << "      |     " << endl;
    }
    cout << "      O     " << endl;
}
int l;

void vykresVeze() {
    for (int i = 1; i < 9; i++) {
        if (i % 2 == 0) {
            cout << "_";
            cout << "  ";
        } else {
            cout << " ";
        }
    }
    cout << endl;
    for (int i = 0; i < 15; i++) {
        if (i % 2 == 0) {
            cout << "|";
        } else {
            cout << "_";
        }
    }
    cout << endl;
    while (l != 5) {
        for (int i = 1; i < 12; i++) {
            if (i == 5 || i == 11) {
                cout << "|";
            } else {
                cout << " ";
            }
        }
        cout << endl;
        l++;
    }
    cout << endl;
}

void vykresleniMezer(int sirka) {
    for (int i = 0; i < sirka; i++) {
        cout << " ";
    }
}

void vykresleniStreduHradu(int sirka, int i) {
    if (i % 2) {
        if (i == 23) {
            cout << "___";
        } else {
            cout << "__|";
        }
        for (int l = 0; l < sirka; l++) {
            if (l + 1 == sirka) {
                cout << "__|_";
            } else {
                cout << "___|";
            }
        }
    } else {
        for (int l = 0; l < sirka; l++) {
            cout << "___|";
        }
        cout << "___";
    }
}
void vykresleniHrad(int vyska) {
    for (int i = 0; i < vyska; i++) {
        if (i % 2 == 0) {
            cout << "|__|___|___|___|___|";
            if (i <= 2) {
                vykresleniMezer(23);
                cout << "|__|___|___|___|___|" << endl;
            } else {
                vykresleniStreduHradu(5, i);
                cout << "|__|___|___|___|___|" << endl;
            }
        } else {
            cout << "|___|___|___|___|__|";
            if (i <= 2) {
                vykresleniMezer(23);
                cout << "|___|___|___|___|__|" << endl;
            } else {
                vykresleniStreduHradu(5, i);
                cout << "|___|___|___|___|__|" << endl;
            }
        }
    }
}
int main() {
    cout << "Hello, World!" << endl;
    vykresMece();
    vykresVeze();
    vykresleniHrad(9);
    return 0;
}