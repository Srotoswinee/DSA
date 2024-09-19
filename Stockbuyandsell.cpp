#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maxprofit(vector<int>&arr){
    int maxPro=0;
    int minprice=INT_MAX;
    int n=arr.size();
    for(int i=0;i<n;i++){
        minprice=min(minprice,arr[i]);
        maxPro=max(maxPro,arr[i]-minprice);
    }
    return maxPro;
}
int main(){
    vector<int>arr={1,3,5,7,8,10};
    int maxPro=maxprofit(arr);
    cout<<"The maximum profit is:"<<maxPro<<endl;
}

