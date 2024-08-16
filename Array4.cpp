/*Find the missing number*/
#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int n;
    int sum=0;
    cout<<"enter the size of the array:"<<endl;
    cin>>n;
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    int totalsum=n*(n+1)/2;
    int diff=totalsum-sum;
    cout<<"The missing number is:"<<diff<<endl;
    return 0;
}
