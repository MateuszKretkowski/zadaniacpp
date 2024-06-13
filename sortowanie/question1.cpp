#include <iostream>
#include <list>
using namespace std;

void bubblesort(int nums[], int n) {

        int counter = 0;
        int temp = 0;
        for (int i=0; i< n-1; i++) {
                cout << "i wynosi: " << i << endl;
                for (int j=0; j<n-1; j++) {
                        counter+=1;
                        cout << "i: " << i << " j: " << j << endl;
                        if (nums[j]<nums[i]) {
                                temp = nums[i];
                                nums[i] = nums[j];
                                nums[j] = temp;
                        }
                }
        }
        
        for (int k=0; k<n-1; k++) {
                cout << k << ", ";
        }
        cout << endl;
        cout << "Counter: " << counter << endl;
}

int main() {
        int array[] = {1,5,4,7,2,6,3};
        int N = sizeof(array) / sizeof(array[0]);
        bubblesort(array, N);
        return 0;
}
