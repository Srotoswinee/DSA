/*#include<iostream>
using namespace std;
void findduplicates(int arr[],int len)
{
    bool duplicate=false;
    for(int i=0;i<len-1;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(arr[i]==arr[j])
                cout<<"The duplicate elements are:"<<arr[i]<<endl;
                duplicate=true;

        }
        if(!duplicate){
            cout<<"No duplicates found"<<endl;
        }
    }
}
int main()
{
    int arr[] = { 12, 11, 40, 12, 5, 6, 5, 12, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);

    findduplicates(arr, n);

    return 0;
}
*/
#include <iostream>
using namespace std;

void findDuplicates(int arr[], int len) {
    bool isPrinted[len] = {false};
    for (int i = 0; i < len - 1; i++) {
        if (isPrinted[i]) continue;
        for (int j = i + 1; j < len; j++) {
            if (arr[i] == arr[j]) {
                if (!isPrinted[i]) {
                    cout << "The duplicate element is: " << arr[i] << endl;
                    isPrinted[i] = true;
                }
                isPrinted[j] = true;
            }
        }
    }
    bool found = false;
    for (int i = 0; i < len; i++) {
        if (isPrinted[i] && arr[i] == arr[i]) {
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "No duplicates found." << endl;
    }
}

int main() {
    int arr[] = {12, 11, 40, 12, 5, 6, 5, 12, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    findDuplicates(arr, n);

    return 0;
}

