#include <iostream>

using namespace std;

int main() {
        int n;
        cout << "Podaj liczbe n: ";
        cin >> n;
        int taba[n][n];
        int tabb[n][n];
        int tabw[n][n];
        int counter = 1;
        for (int i=0; i<n; i++) {
                for (int j=0; j<n; j++) {
                        taba[i][j] = counter;
                        tabb[i][j] = counter;
                        counter = counter+1;
                }
        }
        
        for (int i=0; i<n; i++) {
                for (int j=0; j<n; j++) {
                        tabw[i][j] = taba[i][j] + tabb[i][j]; 
                }
        }
        cout << "Wynik Dodawania: " << endl;        
        for (int k=0; k<n; k++) {
                for (int l=0; l<n; l++) {
                        cout << "* " << tabw[k][l] << " *";
                }
                cout << endl;
        }
        
        int tabw2[n][n];

        for (int o=0; o<n; o++) {
                for (int p=0; p<n; p++) {
                        tabw2[o][p] = taba[o][p] * tabb[o][p];
                }
        }

        
        cout << "Wynik mnozenia: " << endl;        
        for (int k=0; k<n; k++) {
                for (int l=0; l<n; l++) {
                        cout << "* " << tabw2[k][l] << " *";
                }
                cout << endl;
        }

        return 0;
}
