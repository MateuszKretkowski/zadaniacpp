#include <iostream>
#include <list>
using namespace std;

int counter = 0;
void bubblesort(int nums[], int n) {

        int temp = 0;
        for (int i=0; i< n-1; i++) {
                cout << "i wynosi: " << i << endl;
                for (int j=0; j<n-1; j++) {
                        cout << "i: " << i << " j: " << j << endl;
                                counter+=1;
                        if (nums[j]<nums[i]) {
                                temp = nums[i];
                                nums[i] = nums[j];
                                nums[j] = temp;
                        }
                }
        }
        
        cout << endl;
        cout << "Counter: " << counter << endl;
}
int counter2=0;
void change(int nums[], int p1, int p2) {
    int temp = nums[p1];
    nums[p1] = nums[p2];
    nums[p2] = temp;

        counter2 = counter2+1;
}
int dividenums(int nums[], int l, int r) {
    int pivot = nums[r];
    int i = l - 1;

    for (int j = l; j < r; j++) {
        if (nums[j] < pivot) {
                i++;
            change(nums, i, j);
        }
    }
    change(nums, i + 1, r);
    return i + 1;
}

void quicksort(int nums[], int l, int r) {
    if (l < r) {
        int pi = dividenums(nums, l, r);
        quicksort(nums, l, pi - 1);
        quicksort(nums, pi + 1, r);
    }
}


int main() {
        int array[] = {7,2,4,0,12};
        for (int i : array) {
                cout << " * " << i << endl;
        }
        int N = sizeof(array) / sizeof(array[0])-1;
        cout << "SIZE OF ARRAY: " << N << endl;
        bubblesort(array, N);
        quicksort(array, 0, N);
        cout << "Counter BubbleSort: " << counter << endl;
        cout << "Counter QuickSort: " << counter2 << endl;
        return 0;
}
