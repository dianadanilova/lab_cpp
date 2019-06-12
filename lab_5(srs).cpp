#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
 
class Fraction {
 
protected:
long x;
unsigned short y;
 
public:
    Fraction() {
        x = 0;
        y = 0;
    }
 
    void init(long f,unsigned short s) {
        x = x;
        y = y;
    }
        
    void read() {
        cout << "\nПервая часть': "; cin >> x;
        cout << "Вторая часть': "; cin >> y;
    }
 
    void display(){
        cout << x << "_" << y << endl;
    }
 
    static void Addition(Fraction a,Fraction b){
        cout << "\nПроизведение: " << a.x + b.x << "_"<< a.y + b.y << endl;
    }
 
    static void Subtraction(Fraction a,Fraction b){
        cout << "Вычитание: " << a.x - b.x << "." << a.y - b.y << endl;
    }
 
    static void Multiplication(Fraction a,Fraction b){
        cout << "Умножение: " << a.x * b.x << "_" << a.y*b.y << endl;
    }
 
    static void Equal(Fraction a,Fraction b){
        if(a.x==b.x && a.y==b.y)
            { 
                cout << "Равно" << endl;
            }        
    };
    };
 
int main()
{
    Fraction s, k, l;
    cout << "\nПервое: ";
    cout << "\nВторое: ";

    s.Addition(k,l);
    s.Subtraction(k,l);
    s.Multiplication(k,l);
    s.Equal(k,l);

    system ("pause");
    return 0;
}