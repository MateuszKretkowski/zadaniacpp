#include <iostream>

using namespace std;

int main() {
        int n;
        cout << "podaj liczbe n < 10000: ";
        cin >> n;
        int matrix [6][5];
        int counter=0;
        int count=2;
        for (int d = 0; d < 6; d++) { 
                for (int f = 0; f < 5; f++) { 
                        matrix[d][f] = count; 
                        count++; 
                } 
        } 
        int id = 0;
        int last = -1;
        bool end=false;
        while (id > last) {
        cout << "id na poczatek while: " << id << endl;
                for (int d = 0; d < 6; d++) { 
                                for (int f = 0; f < 5; f++) { 
                                        cout << "odbywa sie!";
                                        cout << "LAST PRZED ZAMIANA: " << last << endl;
                                        if (matrix[d][f] != 0 && id == 0 && matrix[d][f] != last) {
                                                id = matrix[d][f];
                                                last = id;
                                                cout << "LAST: " << last << endl;
                                                cout << "ID: " << id << endl;
                                                break;
                                        }
                                } 
                }
                         
                        cout << "po petli" << endl;
                        for (int i=0; i<6; i++) {
                        for (int j=0; j<5; j++) {
                                if (matrix[i][j] % id == 0 && matrix[i][j] != 0 && matrix[i][j] != id) {
                                        cout << "ustawiamy " << matrix[i][j] << "na zero" << endl;
                                        matrix[i][j] = 0;
                                } 
                        }
                        
                }
       
        id = 0;
        
                        cout << "oto matrix: " << endl;
        for (int d = 0; d < 6; d++) { 
                cout << "| ";
                for (int f = 0; f < 5; f++) { 
                        if (matrix[d][f] != 0 && matrix[d][f] < n) {
                                counter = counter+1;
                        }
                        cout << matrix[d][f] << " * "; 
                        count++; 
                }
                cout << " |" << endl;
        }
        }
        cout << "Oto liczba liczb pierwszych ktore sa mniejsze od n: " << counter << endl;
       
        return 0;
}
