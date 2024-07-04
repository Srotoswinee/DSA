#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "apple";
    stack<char> st;
    for(int i = 0; i < str.size(); i++){
        st.push(str[i]);
    }

    string ans = "";
    while(!st.empty()){
        ans = ans + st.top();
        st.pop();
    }

    cout<<"Reverse string : "<<ans<<endl;
    return 0;
}
