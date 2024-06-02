#include <iostream>
#include <cmath>
using namespace std;

int main() {
        int k;
        cout << "wybierz liczbe od przedzialu 0, 20: ";    
        cin >> k;
        int j=2;
        for (int i=0; i<k; i++) {
                int iloscx = 1;
                for (int jw=j; jw>0; jw--) {
                        int iloscs = 2*k+3-iloscx;
                        int iloscsl = floor(iloscs/2);
                        int iloscsr = floor(iloscs/2);
                        
                        while(iloscsl > 0) {
                                cout << ".";
                                iloscsl = iloscsl-1;
                        }
                        int iloscxw = iloscx;
                        while(iloscxw >0) {
                                cout << "x";
                                iloscxw = iloscxw-1;
                        }
                        while(iloscsr > 0) {
                                cout << ".";
                                iloscsr = iloscsr-1; 
                        }
                        iloscx = iloscx+2;
                        iloscs = iloscs-1;
                        cout << endl;
                }
                j = j+1;

        } 
        return 0;
}
