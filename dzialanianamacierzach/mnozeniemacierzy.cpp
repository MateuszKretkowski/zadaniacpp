#include <iostream>

using namespace std;

int main() {
        int n=0;
        cout << "Podaj liczbe n: ";
        cin >> n;
        int taba[n][n];
        int tabb[n][n];
        int tabw[n][n];
        int counter=0;
        for (int d=0; d<n; d++) {
                for (int s=0; s<n; s++) {
                        taba[d][s] = counter;
                        tabb[d][s] = counter;
                        counter+=1;
                }
        }
        for (int i=0; i<n; i++) {
                for (int j=0; j<n; j++) {
                        int liczba=0;
                        liczba+=taba[i][j]*tabb[j][i];
                        tabw[i][j] = liczba;
                }
        }
        cout << "Wynik mnozenia macierzy: " << endl;
        for (int k=0; k<n; k++) {
                for (int l=0; l<n; l++) {
                        cout << " * " << tabw[k][l] << " * ";
                }
                cout << endl;
        }
        return 0;
}
