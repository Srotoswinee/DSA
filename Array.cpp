#include<iostream>
using namespace std;
void reverseArray(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }

}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the number of elements in the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    cout<<"Original Array:";
    printArray(arr,n);
    reverseArray(arr,n);
    cout<<"Reversed array:";
    printArray(arr,n);
    return 0;
}
