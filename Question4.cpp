#include<iostream>
#include<string>
using namespace std;
class Shape{
public:
    string color;
public:
    void Get_data()
    {
        cout << "Enter color :";
        cin >> color;
    }
   virtual void DisplayArea()
   {
       cout << "Color "<< color << endl;
   }
}; // class base

class Circle: public Shape{
private:
    float radius;
public:
    void Get_data()
    {
        Shape::Get_data();
        cin.ignore();
        cout << "Enter radius :"; cin >> radius;
    }
    void DisplayArea()
    {
        Shape::DisplayArea();
       cout << "Area of Cricle  " << (radius * 3.14) << endl; 
    }
};

class Rectangle: public Shape{
private:
    int with;
    int height;
public:
    void Get_data()
    {
        Shape::Get_data();
        cin.ignore();
        cout << "Enter with and height :"; cin >> with >> height;
    }
    void  DisplayArea()
    {
        Shape::DisplayArea();
        cout << "Area of rectangle " << with * height << endl;
    }
};

class ArrShape:public Circle,Rectangle
{
public:
    void Input(Circle c[],Rectangle r[],int n)
    {
        for(int i = 0 ; i < n;i++)
        {
            cout << "Circle " << i + 1 << ":"<<endl;;
            c[i].Get_data();
        }
        cout << endl;
        for(int i = 0 ; i < n;i++)
        {
            r[i].Get_data();
        }
    }

    void Output(Circle c[],Rectangle r[],int n)
    {
        cout << "\nList Shape \n";
        for(int i = 0 ; i < n;i++)
        {
            cout << "Circle " << i + 1 << ":"<<endl;
            c[i].DisplayArea();
        }
        cout << endl;
        for(int i = 0 ; i < n;i++)
        {
            cout << "Rectangle " << i + 1 << ":"<<endl;
            r[i].DisplayArea();
        }
    }

    void Change(Circle c[],Rectangle r[],int n)
    {
        for(int i = 0 ; i < n;i++)
        {
            if(c[i].color == "black" || r[i].color == "black")
            {
                c[i].color = "blue";
                r[i].color = "blue";
            }
        }


    }
};

int main(int argc, char const *argv[])
{
    Circle c[10]; Rectangle r[10]; ArrShape arr;
    int n;
    cout << "Enter number :"; cin >> n;
    arr.Input(c,r,n);
    arr.Change(c,r,n);
    arr.Output(c,r,n);
}
