/*Being the leader*/
#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int n;
    int max=-1;
    int top;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    cout<<"Enter the elements of array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The leader elements are:"<<endl;
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]>max)
        {
           max=arr[i];
           cout<<max<<endl;
        }
    }
    return 0;
}
