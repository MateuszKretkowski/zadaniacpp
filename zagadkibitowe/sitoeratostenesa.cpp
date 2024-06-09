#include <iostream>

using namespace std;

int main() {
        int n;
        cout << "podaj liczbe n < 10000: ";
        cin >> n;
        int matrix [n/5][5];
        int counter=0;
        int count=2;
        for (int d = 0; d < n/5; d++) { 
                for (int f = 0; f < 5; f++) { 
                        matrix[d][f] = count; 
                        count++; 
                } 
        } 
        int id = 0;
        int idforwhile=id;
        int last = -1;
        bool end=false;
        int c=0;
        while (c < n && last < n) {
        cout << "id na poczatek while: " << id << endl;
                for (int d = 0; d < n/5; d++) { 
                                for (int f = 0; f < 5; f++) { 
                                        cout << "LAST PRZED ZAMIANA: " << last << endl;
                                        cout << "MATRIXDF: " << matrix[d][f] << endl;
                                        if (matrix[d][f] != 0 && id == 0 && matrix[d][f] != last && matrix[d][f] > last) {
                                                id = matrix[d][f];
                                                last = id;
                                                cout << "LAST: " << last << endl;
                                                cout << "ID: " << id << endl;
                                                break;
                                                cout << "po breaku" << endl;
                                        }
                }
                }
                         
                        cout << "po petli" << endl;
                        for (int i=0; i<n/5; i++) {
                        for (int j=0; j<5; j++) {
                                if (matrix[i][j] % id == 0 && matrix[i][j] != 0 && matrix[i][j] != id) {
                                        cout << "ustawiamy " << matrix[i][j] << "na zero" << endl;
                                        matrix[i][j] = 0;
                                } 
                        }
                        
                }
       id = 0;
       c = c+1;
        }        
       cout << "oto matrix: " << endl;
        for (int d = 0; d < n/5; d++) { 
                cout << "| ";
                for (int f = 0; f < 5; f++) { 
                        if (matrix[d][f] != 0 && matrix[d][f] < n) {
                                counter = counter+1;
                        }
                        cout << matrix[d][f] << " * "; 
                }
                cout << " |" << endl;
        }
        cout << "Oto liczba liczb pierwszych ktore sa mniejsze od n: " << counter << endl;
       
        return 0;
}
