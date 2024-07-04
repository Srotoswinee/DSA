#include <iostream>
#include <stack>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); // Get the size of the array

    stack<int> st;

    // Push elements of the array onto the stack
    for (int i = 0; i < n; i++) {
        st.push(arr[i]);
    }

    // Pop elements from the stack and store them back in the array to reverse it
    for (int i = 0; i < n; i++) {
        if (!st.empty()) { // Check if the stack is not empty
            arr[i] = st.top(); // Get the top element of the stack
            st.pop(); // Remove the top element from the stack
        } else {
            cout << "Error: Stack is unexpectedly empty!" << endl;
            break; // Exit the loop or handle the error appropriately
        }
    }

    // Print the reversed array
    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
