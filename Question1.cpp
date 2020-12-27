#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;
void Get_value(vector<int> &v)
{
    int a[10];
    int i = 0;
    fstream w;
    w.open("E:\C++\C++\LythuyetOOP\Vector\INTO_question1.txt", ios::in);
    if (w.is_open())
    {
        while (!w.eof())
        {
            w >> a[i];
            i++;
        }
        for (int i = 0; i < 10; i++)
        {
            v.push_back(a[i]);
        } // luu tru gia tri vo vector
        
        cout << "Reading value in file " << endl;
        for (int i = 0; i < 10; i++)
        {
            cout << a[i] << " ";
        }
        w.close();
    }
    else
    {
        cout << "File not Found !";
    }

    ofstream r;
    r.open("E:\C++\C++\LythuyetOOP\Vector\INTO_question1_out.txt", ios::app);
    if (r.is_open())
    {
        r << "\nInput :";
        for (int i = 0; i < v.size(); i++)
        {
            r << v[i] << " ";
        }
        r.close();
    }
    else
    {
        cout << "File not found !";
    }
}

void Dellect_the3rd_element(vector<int> &v)
{
    cout << "\nDellect in value in vector v :" << endl;
    auto size = v.size() / 2;
    int k = 0;
    for (int i = 0; i < size; i++)
    {
        if (v[i] % 2 != 0)
        {
            v.erase(v.begin() + i);
        }
        k++;
        if(k == 3) break;
    }
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
}

void Sort(vector<int> &v)
{
    int a[10];
    int i = 0;
    fstream w;
    w.open("E:\C++\C++\LythuyetOOP\Vector\INTO_question1.txt", ios::in);
    if (w.is_open())
    {
        while (!w.eof())
        {
            w >> a[i];
            i++;
        }
        for (int i = 0; i < 10; i++)
        {
            v.push_back(a[i]);
        } // luu tru gia tri vo vector

        int n = sizeof(a) / sizeof(a[0]);
        sort(a, a + n, greater<int>());
        cout << "\nSort in file\n";
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        w.close();
    }
    else
    {
        cout << "File not found!";
    }

    ofstream wt;
    wt.open("E:\C++\C++\LythuyetOOP\Vector\INTO_question1_out.txt", ios::app);
    if (wt.is_open())
    {
        int n = sizeof(a) / sizeof(a[0]);
        sort(a, a + n, greater<int>());
        wt << "\nSort in file\n";
        for (int i = 0; i < n; i++)
        {
            wt << a[i] << " ";
        }
        wt.close();
    }
    else
    {
        cout << "File not found !";
    }
}

void Wrting_value(vector<int> &v)
{
    Get_value(v);
    Dellect_the3rd_element(v);
    Sort(v);
}
int main(int argc, char const *argv[])
{
    vector<int> v;
    //Get_value(v);
    //Dellect_the3rd_element(v);
    //Sort(v);
    Wrting_value(v);
}
