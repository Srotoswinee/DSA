#include <iostream>
#include <climits>
using namespace std;
void findMaxMin(int arr[], int size, int &max, int &min) {
    max = INT_MIN;
    min = INT_MAX;
    for(int i = 0; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }
}
int main() {
    int arr[] = {3, 5, 7, 2, 8, -1, 4, 10, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max, min;
    findMaxMin(arr, size, max, min);
    std::cout << "Maximum element: " << max << std::endl;
    std::cout << "Minimum element: " << min << std::endl;

    return 0;
}

