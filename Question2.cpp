#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

template <class Type>
void Input(Type x[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap phan tu " << i + 1 << ":";
        cin >> x[i];
    }
} // khuon mau ham 

template <class Type>
void Output(Type x[], int n)
{

    for (int i = 0; i < n; i++)
    {

        cout << x[i] << " ";
    }
}

template<class T >
void Xoa_khoangtrang(T s)
{
    int n = strlen(s);

    for(int i = 0 ; i < n;i++)
    {
        if(s[i]==32 && s[i+1] == 32)
        {
            for(int j=i;j<n;j++)
            {
                s[j] = s[j+1];
                i--;
            }
        }
    }    
} // xoa khoang trang

int main(int argc, char const *argv[])
{
    char s[10];
    cout << "Moi ban nhap chuoi :"; gets(s);
    Xoa_khoangtrang(s);
    puts(s);
}
