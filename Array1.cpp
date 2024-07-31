/*Left rotation by an integer number
Steps:
1.Reverse the entire array
2.Reverse the first part
3.Reverse the second part */
#include<iostream>
#include<vector>
using namespace std;
void reverseArray(vector<int>& arr,int start,int end)
{
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
vector<int> rotateLeft(int d,vector<int>arr){
    int n=arr.size();
    d=d%n;
    reverseArray(arr,0,n-1);
    reverseArray(arr,0,n-d);
    reverseArray(arr,n-d,n-1);
    return arr;
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int d = 2;
    vector<int> result = rotateLeft(d, arr);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
