#include <iostream>
#include<stack>
using namespace std;

string StackBin(int n)
{
    string s;
    stack<char> st;
    while (n > 0)
    {
        st.push(n % 2+'0');
        n/=2;
    }
    
    while (!st.empty())
    {
        s = s + st.top();
        st.pop();
    }
    return s;
}

int main(int argc, char const *argv[])
{
   int n;
   cout << "Nhap thap phan :"; cin >> n;
   cout << "Chuyen sang nhi phan  " <<StackBin(n);
}
