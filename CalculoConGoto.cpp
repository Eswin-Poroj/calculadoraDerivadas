#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <locale.h>
#include <cmath>
#include <conio.h>

using namespace std;

void gotoxy(int x, int y){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}

void derivadaConstante(double k) {
    double derivada = 0.0;
    gotoxy(30,6);cout << "La derivada de la constante f(x) = " << k <<" es: " << derivada << endl;
    gotoxy(30,7);cout << "NOTA: La derivada de una constante es igual a CERO" << endl;
}

double derivadaPotencia(double x) {
    double n;
    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
        return 1;
    }

    gotoxy(30,6);cout<<"Ingrese el valor de la potencia f(x) = X^n : ";
    gotoxy(30,7);cin>>n;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
        return 1;
    }

    double derivada = n * x;

    gotoxy(30,8);cout<<"La derivada de f(x) = "<<x<<"x^"<<n<<" es: "<<derivada<<"x^"<<n-1<<endl;
    
    gotoxy(10,9);cout<<"NOTA: La derivada de una potencia es igual al exponente multiplicado " << endl;
	gotoxy(10,10);cout << "por la base elevada a la potencia menos uno"<< endl;
    
    return 0;
}

double derivadoRaiz(double n){
    int x, m; 

    if (cin.fail()) {
        cout << "Debe ingresar un numero" << endl;
        return 1;
    }

    gotoxy(30,6);cout<<"Ingrese el valor del radicando n (R)/X^m :";
    gotoxy(30,7);cin>>x;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
        return 1;
    }
    
    gotoxy(30,8);cout<<"Ingrese el valor de la potencia n (R)/x^M :";
    gotoxy(30,9);cin>>m;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
        return 1;
    }
    
    gotoxy(30,10);cout<<"Paso 1: "<<n<<"x^ "<<x<<"/"<<m<<endl;
    gotoxy(30,11);cout<<"Paso 2: "<<n<<"*"<<x<<"/"<<n<<" x^ "<<x<<"/"<<m<<endl;
    gotoxy(30,12);cout<<"Paso 3: "<<n*x<<"/"<<m<<" "<<"x^ "<<x<<"/"<<m<<endl;
    gotoxy(30,13);cout<<"Paso 4: "<<x<<"/"<<m<<"-"<<1<<"/"<<1<<endl;
    gotoxy(30,14);cout<<"Paso 5: "<<x*1<<"-"<<m*1<<"/"<<m<<"="<<endl;
    gotoxy(30,15);cout<<"Paso 6: "<<x*1-m*1<<endl;
    
    gotoxy(30,16);cout<<"RESPUESTA: "<<n*x<<"/"<<m<<" (R)/"<<"X "<<x*1-m*1<<endl;
    return 0;
}

double derivadaSumaResta(double g) {
    double g1, g2, g3, h, h1, h2, h3;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
        return 1;
    }
    
	gotoxy(30,7);cout<<"Ingrese el valor de la primera potencia f(x) = g(x) :";
    gotoxy(30,8);cin>>g1;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
        return 1;
    }

    gotoxy(30,9);cout<<"Ingrese el segundo valor f(x) = g(x) :";
    gotoxy(30,10);cin>>g2;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
        return 1;
    }
    
    gotoxy(30,11);cout<<"Ingrese el valor de la segunda potencia f(x) = g(x) :";
    gotoxy(30,12);cin>>g3;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
        return 1;
    }
    
    gotoxy(30,13);cout<<"Ingrese el primer valor f(x) = h(x) :";
    gotoxy(30,14);cin>>h;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
        return 1;
    }
    
    gotoxy(30,15);cout<<"Ingrese el valor de la primera potencia f(x) = h(x) :";
    gotoxy(30,16);cin>>h1;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
        return 1;
    }
    
    gotoxy(30,17);cout<<"Ingrese el segundo valor f(x) = h(x) :";
    gotoxy(30,18);cin>>h2;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
        return 1;
    }
    
    gotoxy(30,19);cout<<"Ingrese el valor de la segunda potencia f(x) = h(x) :";
    gotoxy(30,20);cin>>h3;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
        return 1;
    }
    
    double derivada1 = g * g1;
    double derivada2 = g3 * g2;
    double derivada3 = h * h1;
    double derivada4 = h2 * h3;
    
    cout<<endl<<endl;
    gotoxy(30,21);cout<<"La operacion ingresada es: "<<"F(x)= "<<g<<"x^"<<g1<<" + "<<g2<<"x^"<<g3<<" "<<h<<"x^"<<h1<<" + "<<h2<<"x^"<<h3<<endl;
    
    gotoxy(30,22);cout<<"LA OPERACION ES LA SIGUIENTE"<<endl;

    gotoxy(30,23);cout<<"F(x)= "<<g1<<"("<<g<<"x^"<<g1<<"-"<<1<<")"<<" + "<<g3<<"("<<g2<<"x^"<<g3<<"-"<<1<<")"<<" "<<-h1<<"("<<-h<<"x^"<<h1<<"-"<<1<<")"<<" + "<<h3<<"("<<h2<<"x^"<<h3<<"-"<<1<<")"<<endl;
    gotoxy(30,24);cout<<"F(x)= "<<derivada1<<"x^"<<g1-1<<" + "<<derivada2<<"x^"<<g3-1<<" "<<derivada3<<"x^"<<h1-1<<" "<<h3*h2<<"x^"<<endl;

    return 0;
}

double raCocien(double g){
    double g1, g2, g3, h, h1, h2, h3;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
        return 1;
    }
    
	gotoxy(30,7);cout<<"Ingrese el valor de la primera potencia f(x) = g(x) :";
    gotoxy(30,8);cin>>g1;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
        return 1;
    }

    gotoxy(30,9);cout<<"Ingrese el segundo valor f(x) = g(x) :";
    gotoxy(30,10);cin>>g2;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
        return 1;
    }
    
    gotoxy(30,11);cout<<"Ingrese el valor de la segunda potencia f(x) = g(x) :";
    gotoxy(30,12);cin>>g3;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
        return 1;
    }
    
    gotoxy(30,13);cout<<"Ingrese el primer valor f(x) = h(x) :";
    gotoxy(30,14);cin>>h;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
        return 1;
    }
    
    gotoxy(30,15);cout<<"Ingrese el valor de la primera potencia f(x) = h(x) :";
    gotoxy(30,16);cin>>h1;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
        return 1;
    }
    
    gotoxy(30,17);cout<<"Ingrese el segundo valor f(x) = h(x) :";
    gotoxy(30,18);cin>>h2;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
        return 1;
    }
    
    gotoxy(30,19);cout<<"Ingrese el valor de la segunda potencia f(x) = h(x) :";
    gotoxy(30,20);cin>>h3;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
        return 1;
    }

    double derivada1 = g * g1;
    double derivada2 = g2 * g3;
    double derivada3 = h * h1;
    double derivada4 = h2 * h3;
    double oper1 = g * h;
    double oper2 = g1 * h1;
    double oper3 = g2 * h1;
    
    gotoxy(30,21);cout<<"La operacion ingresada es: "<<g<<"x^"<<g1<<" "<<g2<<"x^"<<g3<<"/"<<h<<"x^"<<h1<<" "<<h2<<"x^"<<h3<<endl;
    
    gotoxy(30,22);cout<<"La derivada del primer dato g(x)= "<<"("<<g<<"x^"<<g1<<" "<<g2<<"x^"<<g3<<")"<<" "<<" es: "<<derivada1<<"x^"<<g1-1<<" "<<derivada2<<"x^"<<g3-1<<endl;
    
    gotoxy(30,23);cout<<"La derivada del segundo dato h(x)= "<<"("<<h<<"x^"<<h1<<" "<<h2<<"x^"<<h3<<")"<<" "<<" es: "<<derivada3<<"x^"<<h1-1<<" "<<derivada4<<"x^"<<h3-1<<endl<<endl;
    
    gotoxy(30,24);cout<<"LA OPERACION ES LA SIGUIENTE"<<endl;
    gotoxy(30,25);cout<<-oper1<<"x^"<<oper2<<" "<<oper3<<"x^"<<g3*h3<<"/"<<h<<"x^"<<h1*h1<<" "<<h2<<"x^"<<h3*h3<<endl;
    gotoxy(30,26);cout<<h<<"x^"<<g1<<"("<<-oper1<<"x^"<<g1<<" "<<oper3<<"x^"<<g3*h3<<")"<<"/"<<h<<"x^"<<h1*h1<<" "<<h2<<"x^"<<h3*h3<<endl;
    gotoxy(30,27);cout<<-g<<"x^"<<oper2-1<<" "<<oper3<<"x^"<<g3*h3<<"/"<<h<<"x^"<<h1*h1-1<<endl;
    gotoxy(30,28);cout<<"("<<h<<"x^"<<oper2<<")"<<"("<<g<<")"<<" "<<"("<<g<<"x^"<<g1<<" "<<g2<<"x^"<<g3<<")"<<"("<<oper1<<"x^"<<g1<<")"<<"/"<<"["<<h<<"x^"<<h1<<"]"<<"^"<<h1<<endl;
    gotoxy(30,29);cout<<h*g<<"x^"<<oper2<<" "<<"("<<oper1*g<<"x^"<<g1+g1<<" "<<g2*oper1<<"x^"<<g1<<")"<<"/"<<h1*h1<<endl;
    gotoxy(30,30);cout<<derivada3<<"x^"<<oper2<<" "<<oper1*g<<"x^"<<oper2<<" "<<g2*oper1<<"x^"<<g1<<"/"<<h<<"x^"<<h1*h1<<endl;
    
    return 0;
}

double raProducto(double g) {
    double g1, g2, g3, h, h1, h2, h3;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
        return 1;
    }
    
	gotoxy(30,7);cout<<"Ingrese el valor de la primera potencia f(x) = g(x) :";
    gotoxy(30,8);cin>>g1;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
        return 1;
    }

    gotoxy(30,9);cout<<"Ingrese el segundo valor f(x) = g(x) :";
    gotoxy(30,10);cin>>g2;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
        return 1;
    }
    
    gotoxy(30,11);cout<<"Ingrese el valor de la segunda potencia f(x) = g(x) :";
    gotoxy(30,12);cin>>g3;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
        return 1;
    }
    
    gotoxy(30,13);cout<<"Ingrese el primer valor f(x) = h(x) :";
    gotoxy(30,14);cin>>h;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
        return 1;
    }
    
    gotoxy(30,15);cout<<"Ingrese el valor de la primera potencia f(x) = h(x) :";
    gotoxy(30,16);cin>>h1;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
        return 1;
    }
    
    gotoxy(30,17);cout<<"Ingrese el segundo valor f(x) = h(x) :";
    gotoxy(30,18);cin>>h2;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
        return 1;
    }
    
    gotoxy(30,19);cout<<"Ingrese el valor de la segunda potencia f(x) = h(x) :";
    gotoxy(30,20);cin>>h3;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
        return 1;
    }
    system("cls");

    double derivada1 = g * g1;
    double derivada2 = g2 * g3;
    double derivada3 = h * h1;
    double derivada4 = h2 * h3;
    
    if (h3 == 0)
    {
        gotoxy(30,3);cout<<"Los datos ingresados son: "<<endl;    
        gotoxy(30,4);cout<<"La operacion ingresada es: "<<"("<<g<<"x^"<<g1<<g2<<"x^"<<g3<<")"<<"("<<h<<"x^"<<h1<<" "<<h2<<")"<<endl;
    
        gotoxy(30,6);cout<<"La derivada del primer dato g(x)= "<<"("<<g<<"x^"<<g1<<" "<<g2<<"x^"<<g3<<")"<<" "<<" es: "<<derivada1<<"x^"<<g1-1<<derivada2<<"x^"<<g3-1<<endl;

        gotoxy(30,8);cout<<"La derivada del segundo dato h(x)= "<<"("<<h<<"x^"<<h1<<" "<<h2<<"x^"<<h3<<")"<<" "<<" es: "<<derivada3<<"x^"<<h1-1<<" "<<derivada4<<endl;
    
        gotoxy(30,10);cout<<"LA OPERACION ES LA SIGUIENTE"<<endl;
        gotoxy(30,11);cout<<"("<<g<<"x^"<<g1<<g2<<"x^"<<g3<<")"<<"("<<derivada3<<")"<<"+"<<"("<<h<<"x^"<<h1<<" "<<h2<<")"<<"("<<derivada1<<"x^"<<g1-1<<derivada2<<"x^"<<g3-1<<")"<<endl;
        gotoxy(30,12);cout<<g*derivada3<<"x^"<<g1<<" "<<g2*derivada3<<"x^"<<g3<<"+"<<"("<<h*derivada1<<"x^"<<g1<<" "<<""<<h2*derivada1<<h*derivada2<<"x^"<<h1<<h2*derivada2<<")"<<endl;
        gotoxy(30,13);cout<<g*derivada3+h*derivada1<<"x^"<<g1<<" "<<g2*derivada3+h2*derivada1+h*derivada2<<"x^"<<g3<<" "<<h2*derivada2<<endl;
    } else {
        gotoxy(30,3);cout<<"Los datos ingresados son: "<<endl;    
        gotoxy(30,4);cout<<"La operacion ingresada es: "<<"("<<g<<"x^"<<g1<<g2<<"x^"<<g3<<")"<<"("<<h<<"x^"<<h1<<" "<<h2<<"x^"<<h3<<")"<<endl;

        gotoxy(30,6);cout<<"La derivada del primer dato g(x)= "<<"("<<g<<"x^"<<g1<<" "<<g2<<"x^"<<g3<<")"<<" "<<" es: "<<derivada1<<"x^"<<g1-1<<derivada2<<"x^"<<g3-1<<endl;

        gotoxy(30,8);cout<<"La derivada del segundo dato h(x)= "<<"("<<h<<"x^"<<h1<<" "<<h2<<"x^"<<h3<<")"<<" "<<" es: "<<derivada3<<"x^"<<h1-1<<" "<<derivada4<<"x^"<<h3-1<<endl;

        gotoxy(30,10);cout<<"LA OPERACION ES LA SIGUIENTE"<<endl;
        gotoxy(30,11);cout<<"("<<g<<"x^"<<g1<<g2<<"x^"<<g3<<")"<<"("<<derivada3<<")"<<"+"<<"("<<h<<"x^"<<h1<<" "<<h2<<"x^"<<h3<<")"<<"("<<derivada1<<"x^"<<g1-1<<derivada2<<"x^"<<g3-1<<")"<<endl;
        gotoxy(30,12);cout<<g*derivada3<<"x^"<<g1<<" "<<g2*derivada3<<"x^"<<g3<<"+"<<"("<<h*derivada1<<"x^"<<g1<<" "<<""<<h2*derivada1<<"x^"<<h3<<h*derivada2<<"x^"<<h1<<h2*derivada2<<"x^"<<h3<<")"<<endl;
        gotoxy(30,13);cout<<g*derivada3+h*derivada1<<"x^"<<g1<<" "<<g2*derivada3+h2*derivada1+h*derivada2<<"x^"<<g3<<" "<<h2*derivada2<<"x^"<<h3<<endl;
    }
    
    return 0;
}

double derivadaDeFuncionSuma(double m, double b){
	system("cls");
	gotoxy(30,4);cout << "El resultado de la derivada es: " << endl;
    gotoxy(30,6);cout << "f'(x) = Lim (h=>0) "<< m << "(x+h) - " << b << "- ( "<<  m << "x - " << b << " ) / h" << endl;
    gotoxy(30,7);cout << "f'(x) = Lim (h=>0) " << m << "x + " << m << "h - " << b << " - " << m << "x + " << b << " / h" << endl;
    gotoxy(30,8);cout << "f'(x) = Lim (h=>0) " << m << "h / h" << endl;
    gotoxy(30,9);cout << "f'(x) = " << m << endl;
    return 0;
}

double derivadaDeXalCuadrado(double x){
	system("cls");
	gotoxy(30,4);cout << "El resultado de la derivada es: " << endl;
    gotoxy(30,6);cout << "f'(x) = Lim ( =>0 ) " << "(" << x <<"+h)^2 - " << x << "^2 / h" << endl;
    gotoxy(30,7);cout << "f'(x) = Lim ( =>0 ) " << x << "^2 + 2 * " << x << "h + h^2 - " << x << "^2 / h" << endl;
	gotoxy(30,8);cout << "f'(x) = Lim ( =>0 ) " << "h(2" << x << " + h) / h" << endl;
    gotoxy(30,9);cout << "f'(x) = Lim ( =>0 ) " << "2 * " << x << " + " << 0 << endl;
    gotoxy(30,10);cout << "f'(x) = " << 2*x << endl;
    return 0;
}

double derivadaDeAxAlN(double a, double n){
	system("cls");
	gotoxy(30,4);cout << "El resultado de la derivada es: " << endl;
    gotoxy(30,6);cout << "f'(x) = Lim ( => 0) " << a << "(x+h)^" << n << " - " << a << "x^" << n << " / h" << endl;
    gotoxy(30,7);cout << "f'(x) = Lim ( => 0) " << a << "(x^" << n << " + x*h + h^" << n << ") - " << a << "x^" << n << " / h" << endl;
    gotoxy(30,8);cout << "f'(x) = Lim ( => 0)" << a << "x^" << n << " + " << a*a << "x*h + " << a << "h^" << n << ") - " << a << "x^" << n << " / h" << endl;
    gotoxy(30,9);cout << "f'(x) = Lim ( => 0) h(" << a*a << "x + " << a << "h^) / h" << endl; 
    gotoxy(30,10);cout << "f'(x) = " << a*n << "x^" << n-1 << " + " << a << " * " << 0 << endl;
    gotoxy(30,11);cout << "f'(x) = " << a*n << "x^" << n-1 << endl;
    return 0;
}

double derivadaDeXalCuadradoMenosAXmenosB(double a, double b){
	system("cls");
	gotoxy(30,4);cout << "El resultado de la derivada es: " << endl;
    gotoxy(30,6);cout << "f'(x) = Lim (h=>0) (x + h)^2 - " << a << "(x + h) - " << b << " - (x^2 - " << a << "x - " << b << ") / h" << endl;
    gotoxy(30,7);cout << "f'(x) = Lim (h=>0) x^2 + 2xh + h^2 - " << a << "x - " << a << "h - " << b << " - x^2 + " << a << "x - " << b << ") / h" << endl;
    gotoxy(30,8);cout << "f'(x) = Lim (h>=0) 2xh + h^2 - " << a << " / h" << endl;
    gotoxy(30,9);cout << "f'(x) = Lim (h=>0) h(2x + h - " << a << ") / h" << endl;
    gotoxy(30,10);cout << "f'(x) = 2x + 0 - " << a << endl;
    gotoxy(30,11);cout << "f'(x) = 2x - " << a << endl;
    return 0;
}

double derivadaDeXalCuadradoMenosAXmasB(double a, double b){
	system("cls");
	gotoxy(30,4);cout << "El resultado de la derivada es: " << endl;
    gotoxy(30,6);cout << "f'(x) = Lim (h=>0) (x + h)^2 - " << a << "(x + h) + " << b << " - (x^2 - " << a << "x - " << b << ") / h" << endl;
    gotoxy(30,7);cout << "f'(x) = Lim (h=>0) x^2 + 2xh + h^2 - " << a << "x - " << a << "h + " << b << " - x^2 + " << a << "x - " << b << ") / h" << endl;
    gotoxy(30,8);cout << "f'(x) = Lim (h>=0) 2xh + h^2 - " << a << " / h" << endl;
    gotoxy(30,9);cout << "f'(x) = Lim (h=>0) h(2x + h - " << a << ") / h" << endl;
    gotoxy(30,10);cout << "f'(x) = 2x + 0 - " << a << endl;
    gotoxy(30,11);cout << "f'(x) = 2x - " << a << endl;
    return 0;
}

double derivadaDeAXalCuadradoMenosDosXmenosC(double a, double b, double c){
	system("cls");
    gotoxy(35,4);cout << "FUNCION DE f(x+h)" << endl;
    gotoxy(30,6);cout << "El resultado de la derivada es: " << endl;
	gotoxy(30,7);cout << "f(x+h) = " << a << "(x + h)^2 - " << b << "(x + h) - " << c << endl;
    gotoxy(30,8);cout << "f(x+h) = " << a << "(x^2 + 2xk + b^2) - " << b << "(x + h) - " << c << endl;
    gotoxy(30,9);cout << "f(x+h) = " << a << "x^2 + " << a*2 << "xh + " << a << "h^2 - " << b  << "x - " << b << "h - " << c << endl << endl ;
    gotoxy(30,11);cout << "FORMULA POR DEFINICION"<< endl;
    gotoxy(30,13);cout << "f'(x) = Lim (h=>0) " << a << "x^2 + " << a*2 << "xh + " << a << "h^2 - " << b  << "x - " << b << "h - " << c << " - (" <<
            a << "x^2 - " << b << "x - " << c << ") / h"<< endl;
    gotoxy(30,14);cout << "f'(x) = Lim (h=>0) " << a << "x^2 + " << a*2 << "xh + " << a << "h^2 - " << b  << "x - " << b << "h - " << c << " - " <<
            a << "x^2 + " << b << "x + " << c << ") / h"<< endl;
    gotoxy(30,15);cout << "f'(X) = Lim (h=>0) " << a*2 << "xh + " << a << "h^2 -" << b << "h / h" << endl;
    gotoxy(30,16);cout << "f'(x) = Lim (h=>0) h(" << a*2 << "x + " << a << "h - " << b << ") / h " << endl; 
    gotoxy(30,17);cout << "f'(x) = Lim (h=>0) (" << a*2 << "x + " << a << "h - " << b << ")" << endl;
    gotoxy(30,18);cout << "f'(x) = " << a*2 << "x + 0 - " << b << endl;
    gotoxy(30,19);cout << "f'(x) = " << a*2 << "x - " << b << endl;
    return 0;
}

double derivadaDeAXalCuadradoMasDosXmasC(double a, double b, double c){
	system("cls");
    gotoxy(35,4);cout << "FUNCION DE f(x+h)" << endl;
    gotoxy(30,6);cout << "El resultado de la derivada es: " << endl;
    gotoxy(30,7);cout << "f(x+h) = " << a << "(x + h)^2 + " << b << "(x + h) + " << c << endl;
    gotoxy(30,8);cout << "f(x+h) = " << a << "(x^2 + 2xk + b^2) + " << b << "(x + h) + " << c << endl;
    gotoxy(30,9);cout << "f(x+h) = " << a << "x^2 + " << a*2 << "xh + " << a << "h^2 + " << b  << "x + " << b << "h + " << c << endl << endl ;
    gotoxy(30,11);cout << "FORMULA POR DEFINICION"<< endl;
    gotoxy(30,13);cout << "f'(x) = Lim (h=>0) " << a << "x^2 + " << a*2 << "xh + " << a << "h^2 + " << b  << "x + " << b << "h + " << c << " - (" <<
            a << "x^2 + " << b << "x + " << c << ") / h"<< endl;
    gotoxy(30,14);cout << "f'(x) = Lim (h=>0) " << a << "x^2 + " << a*2 << "xh + " << a << "h^2 + " << b  << "x + " << b << "h + " << c << " - " <<
            a << "x^2 - " << b << "x - " << c << ") / h"<< endl;
    gotoxy(30,15);cout << "f'(X) = Lim (h=>0) " << a*2 << "xh + " << a << "h^2 +" << b << "h / h" << endl;
    gotoxy(30,16);cout << "f'(x) = Lim (h=>0) h(" << a*2 << "x + " << a << "h + " << b << ") / h " << endl; 
    gotoxy(30,17);cout << "f'(x) = Lim (h=>0) (" << a*2 << "x + " << a << "h + " << b << ")" << endl;
    gotoxy(30,18);cout << "f'(x) = " << a*2 << "x + 0 + " << b << endl;
    gotoxy(30,19);cout << "f'(x) = " << a*2 << "x + " << b << endl;
    return 0;
}

double derivadaAXalCuboMenosBXalCuadradoMasCXMenosD(double a, double b, double c, double d){
	system("cls");
    gotoxy(35,4);cout << "FUNCION DE f(x+h)" << endl;
    gotoxy(10,6);cout << "El resultado de la derivada es: " << endl;
    gotoxy(10,7);cout << "f(x+h) = " << a << "(x + h)^3 - " << b << "(x + h)^2 + " << c << "(x + h) - " << d << endl;
    gotoxy(10,8);cout << "f(x+h) = " << a << "(x^3 + 3x^2h + 3xh^2 + h^3) - " << b << "(x^2 + 2xh + h^2) + " << c << "x + " << c << "h - " << d << endl;
    gotoxy(10,9);cout << "f(x+h) = " << a << "x^3 + " << a*3 << "x^2h + " << a*3 << "xh^2 + " << a << "h^3 - " << b << "x^2 - " << b*2 << "xh - " << b << "h^2 + " << c << "x + " << c << "h - " << d << endl << endl;
    gotoxy(10,11);cout << "DERIVADA DE LA FUNCION" << endl;
    gotoxy(10,12);cout << "f'(x) = Lim (h=>0) " << a << "x^3 + " << a*3 << "x^2h + " << a*3 << "xh^2 + " << a << "h^3 - " << b << "x^2 - " << b*2 << "xh - " << b << "h^2 + " << c << "x + " << c << "h - " << d << " - (" << a << "x^3 - " << b << "x^2 + " << c << "x - " << d <<  ") / h" << endl;
    gotoxy(10,13);cout << "f'(x) = Lim (h=>0) " << a << "x^3 + " << a*3 << "x^2h + " << a*3 << "xh^2 + " << a << "h^3 - " << b << "x^2 - " << b*2 << "xh - " << b << "h^2 + " << c << "x + " << c << "h - " << d << " - " << a << "x^3 + " << b << "x^2 - " << c << "x + " << d <<  " / h" << endl;
    gotoxy(10,14);cout << "f'(x) = Lim (h=>0) " << a*3 << "x^2h + " << a*3 << "xh^2 + " << a << "h^3 - " << b*2 << "xh - " << b << "h^2 + "<< c << "h / h " << endl;
    gotoxy(10,15);cout << "f'(x) = Lim (h=>0) " << "h(" << a*3 << "x^2 + " << a*3 << "xh + " << a << "h^2 - " << b*2 << "x - " << b << "h + " << c << ") / h" << endl;
    gotoxy(10,16);cout << "f'(x) =  " << a*3 << "x^2 + " << a*3 << "x*0 + " << a << "0^2 - " << b*2 << "x - " << b << "*0 + " << c << endl;
    gotoxy(10,17);cout << "f'(x) =  " << a*3 << "x^2 + 0 + 0 - " << b*2 << "x - 0 + " << c << endl;
    gotoxy(10,18);cout << "f'(x) =  " << a*3 << "x^2 - " << b*2 << "x + " << c << endl;
    return 0;
}

double derivadaAXalCuboMenosBXalCuadradoMenossCXMasD(double a, double b, double c, double d){
	system("cls");
    gotoxy(35,4);cout << "FUNCION DE f(x+h)" << endl;
    gotoxy(10,6);cout << "El resultado de la derivada es: " << endl;
	gotoxy(10,7);cout << "f(x+h) = " << a << "(x + h)^3 - " << b << "(x + h)^2 - " << c << "(x + h) + " << d << endl;
    gotoxy(10,8);cout << "f(x+h) = " << a << "(x^3 + 3x^2h + 3xh^2 + h^3) - " << b << "(x^2 + 2xh + h^2) - " << c << "x + " << c << "h + " << d << endl;
    gotoxy(10,9);cout << "f(x+h) = " << a << "x^3 + " << a*3 << "x^2h + " << a*3 << "xh^2 + " << a << "h^3 - " << b << "x^2 - " << b*2 << "xh - " << b << "h^2 - " << c << "x - " << c << "h + " << d << endl << endl;
	gotoxy(10,11);cout << "DERIVADA DE LA FUNCION" << endl;
    gotoxy(10,12);cout << "El resultado de la derivada es: " << endl;
	gotoxy(10,14);cout << "f'(x) = Lim (h=>0) " << a << "x^3 + " << a*3 << "x^2h + " << a*3 << "xh^2 + " << a << "h^3 - " << b << "x^2 - " << b*2 << "xh - " << b << "h^2 - " << c << "x - " << c << "h + " << d << " - (" << a << "x^3 - " << b << "x^2 - " << c << "x + " << d <<  ") / h" << endl;
    gotoxy(10,15);cout << "f'(x) = Lim (h=>0) " << a << "x^3 + " << a*3 << "x^2h + " << a*3 << "xh^2 + " << a << "h^3 - " << b << "x^2 - " << b*2 << "xh - " << b << "h^2 + " << c << "x + " << c << "h - " << d << " - " << a << "x^3 + " << b << "x^2 + " << c << "x - " << d <<  " / h" << endl;
    gotoxy(10,16);cout << "f'(x) = Lim (h=>0) " << a*3 << "x^2h + " << a*3 << "xh^2 + " << a << "h^3 - " << b*2 << "xh - " << b << "h^2 - "<< c << "h / h " << endl;
    gotoxy(10,17);cout << "f'(x) = Lim (h=>0) " << "h(" << a*3 << "x^2 + " << a*3 << "xh + " << a << "h^2 - " << b*2 << "x - " << b << "h - " << c << ") / h" << endl;
    gotoxy(10,18);cout << "f'(x) =  " << a*3 << "x^2 + " << a*3 << "x*0 + " << a << "0^2 - " << b*2 << "x - " << b << "*0 - " << c << endl;
    gotoxy(10,19);cout << "f'(x) =  " << a*3 << "x^2 + 0 + 0 - " << b*2 << "x - 0 - " << c << endl;
    gotoxy(10,20);cout << "f'(x) =  " << a*3 << "x^2 - " << b*2 << "x - " << c << endl;
    return 0;
    
}

double derivadaDeRaiz(double a, double b){
	system("cls");
	gotoxy(2,4);cout << "El resultado de la derivada es: " << endl;
	gotoxy(2,6);cout << "f'(x) = Lim (h=>0) sqrt{" << a << " - " << b << "(x+h)} - sqrt{" << a << " - " << b << "x} / h" << endl;
	gotoxy(2,7);cout << "f'(x) = Lim (h=>0) sqrt{" << a << " - " << b << "x - " << b << "h} - sqrt{" << a << " - " << b << "x} / h * sqrt{" << a << " - " << b << "x - " << b << "h} + sqrt{" << a << " - " << b << "x} / sqrt{" << a << " - " << b << "x - " << b << "h} + sqrt{" << a << " - " << b << "x}" << endl;
	gotoxy(2,9);cout << "f'(x) = Lim (h=>0) sqrt(" << a << " - " << b << "x - " << b << "h)^2 - sqrt(" << a << " - " << b << "x)}^2 / h{sqrt(" << a << " - " << b << "x - " << b << "h) + sqrt(" << a << " - " << b << "x)}" << endl;
	gotoxy(2,10);cout << "f'(x) = Lim (h=>0) " << a << " - " << b << "x - " << b << "h - " << a << " + " << b << "x / h{sqrt(" << a << " - " << b << "x - " << b << "h) + sqrt(" << a << " - " << b << "x)}" << endl;
	gotoxy(2,11);cout << "f'(x) = Lim (h=>0) -" << b << " / sqrt(" << a << " - " << b << "x - " << b << "h) + sqrt(" << a << " - " << b << "x)" << endl;
	gotoxy(2,12);cout << "f'(x) = -" << b << " / sqrt(" << a << " - " << b << "x - " << b << "(0) + sqrt(" << a << " - " << b << "x)"<< endl;
	gotoxy(2,13);cout << "f'(x) = -" << b << " / sqrt(" << a << " - " << b << "x)^" << 2 << endl;
	return 0;
}

double raizX(double a){
	system("cls");
	float resultado = a / (2*sqrt(a));
	gotoxy(30,4);cout << "El resultado de la derivada es: " << endl;

	if(a == 1 ){
		gotoxy(30,6);cout << "f'(x) = Lim (h=>0) sqrt(x+h) - sqrtx) / h * sqrt(x+h) + sqrt(x) / sqrt(x+h) + sqrt(x)"<< endl;
		gotoxy(30,7);cout << "f'(x) = Lim (h=>0) sqrt(x+h)^2 - sqrt(x)^2 / sqrt(x+h) + sqrt(x)" << endl;
		gotoxy(30,8);cout << "f'(x) = Lim (h=>0) x + h - x / h(sqrt(x+h) + sqrt(x)" << endl;
		gotoxy(30,9);cout << "f'(x) = Lim (h=>0) 1 / sqrt(x) + sqrt(x)"<< endl;
		gotoxy(30,10);cout << "f'(x) = 1 / 2sqrt(x)"<< endl;
	} else{
		gotoxy(30,6);cout << "f'(x) = Lim (h=>0) sqrt(x+h) - sqrt(" << a << ") / h * sqrt(x+h) + sqrt(" << a << ") / sqrt(x+h) + sqrt("<< a << ")"<< endl;
		gotoxy(30,7);cout << "f'(x) = Lim (h=>0) sqrt(x+h)^2 - sqrt(" << a << ")^2 / sqrt(x+h) + sqrt(" << a << ")" << endl;
		gotoxy(30,8);cout << "f'(x) = Lim (h=>0) x + h - " << a << " / h(sqrt(x) + sqrt("<< a << ")" << endl;
		gotoxy(30,9);cout << "f'(x) = " << a << " / sqrt(" << a << ") + sqrt(" << a << ")" << endl;
		gotoxy(30,10);cout << "f'(x) = " << a << " / 2 sqrt(" << a << ")" <<endl;
		gotoxy(30,11);cout << "f'(x) = " << a << " / 2 * " << sqrt(a) << endl;
		gotoxy(30,12);cout << "f'(x) = " << a << " / " << 2* sqrt(a) << endl;
		gotoxy(30,13);cout << "f'(x) = " << resultado << endl;
	}
	return 0;
}

void xAlCuboMasBx(double b){
	system("cls");
	gotoxy(30,4);cout << "El resultado de la derivada es: " << endl;
	gotoxy(30,6);cout << "f'(x) = Lim (h=>0) [(x+h)^3 + " << b << "(x+h)] - (x^3 + " << b << "x) / h " << endl;
	gotoxy(30,7);cout << "f'(x) = Lim (h=>0) (x^3 + 3x^2 + 3xh^2 + h^3) + " << b << "x + " << b << "h - x^3 - " << b << "x / h"<< endl;
	gotoxy(30,8);cout << "f'(x) = Lim (h=>0) (3x^2h + 3xh^2 + h^3 + " << b << "h) / h"<< endl;
	gotoxy(30,9);cout << "f'(x) = Lim (h=>0) h(3x^2 + 3xh + h^2 + " << b << ") / h" << endl;
	gotoxy(30,10);cout << "f'(x) = 3x^2 + 3xh + h^2 + " << b << endl;
	gotoxy(30,11);cout << "f'(x) = 3x^2 + " << b << endl;
}

void reglaCadenaCocienteEjercicio1(/*Variables de Arriba*/int a, int b, int c,/*Variables de abajo*/ int d, int e, int f){
    system("cls");
	gotoxy(30,4);cout << "EJERCICIO INGRESADO:" << endl;
	gotoxy(30,6);cout << "       (" << a << "x - " << b << ")^" << c << endl;
	gotoxy(30,7);cout << "f(x) = ------------" << endl;
	gotoxy(30,8);cout << "       (" << d << "x - " << e << ")^" << f << endl;
	gotoxy(30,9);cout << endl;
    gotoxy(30,10);cout << endl;

	gotoxy(30,11);cout << "DERIVADAS DE ARRIBA" << endl;
	gotoxy(30,12);cout << "Arr' = "<< c << " (" << a << "x - " << b << ")^" << c-1 << " * (" << a << ")" << endl;
	gotoxy(30,13);cout << "DERIVADAS DE ABAJO" << endl;
	gotoxy(30,14);cout << "Ab' = " << f << " (" << d << "x - " << e << ")^" << f-1 << " * (" << d << ")" << endl;
	gotoxy(30,15);cout << endl;
	
	gotoxy(30,16);cout << "DERIVADA DE LA FUNCION" << endl;
	gotoxy(30,17);cout << "        (" << d << "x - " << e << ")^" << f << " * " << c << " (" << a << "x - " << b << ")^" << c-1 << " * (" << a << ") - (" << a << "x - " << b << ")^" << c << " * " << f << " (" << d << "x - " << e << ")^" << f-1 << " * (" << d << ")" << endl;
	gotoxy(30,18);cout << "f'(x) = ----------------------------------------------------------------" << endl;
	gotoxy(30,19);cout << "                                [(" << d << "x - " << e << ")^" << f << "]^" << 2<< endl;
	
	cout << endl;
	
	gotoxy(30,21);cout << "         " << a << "*(" << d << "x - " << e << ")^" << f-1 << " (" << a << "x - " << b << ")^" << c-1 << "[(" << d << "x - " << e << ") * " << f-1 << " - (" << a << "x - " << b <<") * " << d << "]" << endl;
	gotoxy(30,22);cout << "f'(x) = --------------------------------------------------------" << endl;
	gotoxy(30,23);cout << "                          ("<< d << "x - " << e << ")^" << f*2 << endl;
	
	cout << endl;
	
	gotoxy(30,25);cout << "        " << a << "*(" << d << "x - " << e << ")^" << f-1 << " (" << a << "x - " << b << ")^" << c-1 << "[" << (f-1)*d << "x - " << (f-1)*e << " - " << d*a << "x + " << d*b << "]" << endl;
	gotoxy(30,26);cout << "f'(x) = --------------------------------------------------------" << endl;
	gotoxy(30,27);cout << "                          ("<< d << "x - " << e << ")^" << f*2 << endl;
	
	cout << endl;
	
	gotoxy(30,29);cout << "        " << a << "*(" << d << "x - " << e << ")^" << f-1 << " (" << a << "x - " << b << ")^" << c-1 << "[" << ((f-1)*d) - d*a << "x - " << ((f-1)*e) - d*b << "]" << endl;
	gotoxy(30,30);cout << "f'(x) = --------------------------------" << endl;
	gotoxy(30,31);cout << "                     ("<< d << "x - " << e << ")^" << f*2 << endl;
	
	gotoxy(30,32);cout << endl;

	gotoxy(30,33);cout << "        " << a << "*(" << a << "x - " << b << ")^" << c-1 << " * (" << ((f-1)*d) - d*a << "x - " << ((f-1)*e) - d*b << ")" << endl;
	gotoxy(30,34);cout << "f'(x) = --------------------------------" << endl;
	gotoxy(30,35);cout << "               ("<< d << "x - " << e << ")^" << (f*2)- (f-1) << endl;
}

void reglaCadenaCocienteEjercicio2 (
	/*variables de arriba*/int a, int b, int c, int d, 
	/*variables de abajo*/ int e, int f, int g, int h){
    system("cls");
	gotoxy(30,4);cout << "EJERCICIO INGRESADO:" << endl;
	gotoxy(30,5);cout << "       (" << a << "x^" << b << " - " << c << ")^" << d << endl;
	gotoxy(30,6);cout << "f(x) = ------------" << endl;
	gotoxy(30,7);cout << "       (" << e << "x^" << f << " + " << g << ")^" << h << endl;	
	gotoxy(30,8);cout << endl;
    cout << endl;
	
	gotoxy(30,10);cout << "DERIVADAS DE ARRIBA" << endl;
	gotoxy(30,11);cout << "Arr' = "<< d << "("<< a << "x^" << b << " - " << c << ")^"<< d-1 << " * " << a*b << "x^" << b-1 << endl;
	gotoxy(30,12);cout << "DERIVADAS DE ABAJO" << endl;
	gotoxy(30,13);cout << "Ab' = "<< h << "("<< e << "x^" << f << " + " << g << ")^"<< h-1 << " * " << e*f << "x^" << f-1 << endl;
	gotoxy(30,14);cout << endl;	
	
	gotoxy(30,15);cout << "DERIVADA DE LA FUNCION" << endl;
	gotoxy(30,16);cout << "       (" << e << "x^" << f << " + " << g << ")^" << h << " * " << d << "("<< a << "x^" << b << " - " << c << ")^"<< d-1 << " * " << a*b << "x^" << b-1 << " - " << "(" << a << "x^" << b << " - " << c << ")^" << d << " * " << h << "("<< e << "x^" << f << " + " << g << ")^"<< h-1 << " * " << e*f << "x^" << f-1 << endl;
	gotoxy(30,17);cout << "f'(x) = -----------------------------------------------" << endl;
	gotoxy(30,18);cout << "                 [(" << e << "x^" << f << " + " << g << ")^" << h << "]^2" << endl;
	cout << endl;
	
	gotoxy(30,19);cout << "        x(" << a << "x^" << b << " - " << c << ")^"<< d-1 << "[" << e*(a*b) << "(" << e << "x^" << f << " + " << g << ") - " << (f*e)*h << "x(" << a << "x^" << b << " - " << c << ")]" << endl;
	gotoxy(30,20);cout << "f'(x) = -----------------------------------------------" << endl;
	gotoxy(30,21);cout << "                 (" << e << "x^" << f << " + " << g << ")^" << h*2<< endl;
	gotoxy(30,22);cout << endl;
	
	gotoxy(30,23);cout << "        x(" << a << "x^" << b << " - " << c << ")^" << d << " ("<< ((e*(a*b))*(e)) -(((f*e)*h)*a) << "x^"<< f <<" + " << ((f*e)*h) * c << "x + " << (e*(a*b))* g << ")" << endl;
	gotoxy(30,24);cout << "f(x) = -------------------------------------" << endl;	
	gotoxy(30,25);cout << "                 ("<< d << "x - " << e << ")^" << (h*2)- (h-1) << endl;
	gotoxy(30,26);cout << endl;
}

void menuEswinReglaCadena(){
    system("cls");
    char opcion;
	int a, b, c, d, e, f, g, h;
	do{
	gotoxy(35,4);cout << "REGLA DE LA CADENA DE COCIENTE" << endl;
	gotoxy(30,6);cout << "Elija el ejercicio que desea realizar:" << endl;
	gotoxy(30,7);cout << "1. f(x) = (ax - b)^c / (dx - e)^f" << endl;
	gotoxy(30,8);cout << "2. f(x) = (ax^b - c)^d / (ex^f + g)^h" << endl;
    gotoxy(30,9);cout << "3. Salir" << endl;
	gotoxy(30,10);cin >> opcion;
		switch (opcion){
			case '1':
                system("cls");
                gotoxy(30,4);cout << "f(x) = (ax - b)^c / (dx - e)^f" << endl;
				gotoxy(30,5);cout << "Ingrese el valor de a: ";
				gotoxy(30,6);cin >> a;
				gotoxy(30,7);cout << "Ingrese el valor de b: ";
				gotoxy(30,8);cin >> b;
				gotoxy(30,9);cout << "Ingrese el valor de c: ";
				gotoxy(30,10);cin >> c;
				gotoxy(30,11);cout << "Ingrese el valor de d: ";
				gotoxy(30,12);cin >> d;
				gotoxy(30,13);cout << "Ingrese el valor de e: ";
				gotoxy(30,14);cin >> e;
				gotoxy(30,15);cout << "Ingrese el valor de f: ";
				gotoxy(30,16);cin >> f;
				reglaCadenaCocienteEjercicio1(a, b, c, d, e, f);
                system("pause");
                system("cls");
				break;
			case '2':
                system("cls");
                gotoxy(30,4);cout << "f(x) = (ax^b - c)^d / (ex^f + g)^h" << endl;
				gotoxy(30,5);cout << "Ingrese el valor de a: ";
				gotoxy(30,6);cin >> a;
				gotoxy(30,7);cout << "Ingrese el valor de b: ";
				gotoxy(30,8);cin >> b;
				gotoxy(30,9);cout << "Ingrese el valor de c: ";
				gotoxy(30,10);cin >> c;
				gotoxy(30,11);cout << "Ingrese el valor de d: ";
				gotoxy(30,12);cin >> d;
				gotoxy(30,13);cout << "Ingrese el valor de e: ";
				gotoxy(30,14);cin >> e;
				gotoxy(30,15);cout << "Ingrese el valor de f: ";
				gotoxy(30,16);cin >> f;
				gotoxy(30,17);cout << "Ingrese el valor de g: ";
				gotoxy(30,18);cin >> g;
				gotoxy(30,19);cout << "Ingrese el valor de h: ";
				gotoxy(30,20);cin >> h;
				reglaCadenaCocienteEjercicio2(a, b, c, d, e, f, g, h);
                system("pause");
                system("cls");
				break;
            case '3':
                return;
			default:
                system("cls");
				gotoxy(40,5);cout << "Opcion no valida" << endl;
				system("pause");
				system("cls");
				break;
		}
	} while (opcion != 3);	
}

void reglaCadenaProductoKimberly(){
        double g, g1, g2, g3, g4, h, h1, h2, h3, h4;
    
    gotoxy(30,3);cout<<"DERIVADA DE UN PRODUCTO CON LA REGLA DE LA CADENA"<<endl;
    gotoxy(30,4);cout<<"Formula: "<<endl;
    gotoxy(30,5);cout<<"F(x)= P * S"<<endl;
    gotoxy(30,6);cout<<"F(x)= P*S' + P'*S"<<endl<<endl;
    
    gotoxy(30,7);cout<<"Operacion"<<endl;
    
    gotoxy(30,8);cout<<"Ingrese el primer valor de f(x) = P: ";
    gotoxy(30,9);cin>>g;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
    }
    
	gotoxy(30,10);cout<<"Ingrese el valor de la primera potencia f(x) = P: ";
    gotoxy(30,11);cin>>g1;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
    }

    gotoxy(30,12);cout<<"Ingrese el segundo valor f(x) = P: ";
    gotoxy(30,13);cin>>g2;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
    }
    
    gotoxy(30,14);cout<<"Ingrese el valor de la segunda potencia f(x) = P: ";
    gotoxy(30,15);cin>>g3;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
    }
    
    gotoxy(30,16);cout<<"Ingrese el valor de la potencia P: ";
    gotoxy(30,17);cin>>g4;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
    }
    
    gotoxy(30,18);cout<<"Ingrese el primer valor f(x) = S: ";
    gotoxy(30,19);cin>>h;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
    }
    
    gotoxy(30,20);cout<<"Ingrese el valor de la primera potencia f(x) = S: ";
    gotoxy(30,21);cin>>h1;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
    }
    
    gotoxy(30,22);cout<<"Ingrese el segundo valor f(x) = S: ";
    gotoxy(30,23);cin>>h2;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
    }
    
    gotoxy(30,24);cout<<"Ingrese el valor de la segunda potencia f(x) = S: ";
    gotoxy(30,25);cin>>h3;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
    }
    
    gotoxy(30,26);cout<<"Ingrese el valor de la potencia S: ";
    gotoxy(30,27);cin>>h4;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;

    }
    
    double derivada1 = g * g1;
    double derivada2 = g2 * g3;
    double derivada3 = h * h1;
    double derivada4 = h2 * h3;
    double oper1 = g4 * derivada1;
    double oper2 = h4 * derivada3;
    double oper3 = h4 * derivada4;
    double oper5 = g4 * derivada2;
    double proc1 = g * oper2;
    double proc2 = g * oper3;
    double proc3 = g2 * oper2;
    double proc4 = g2 * oper3;
    double proc5 = h * oper1;
    double proc6 = h2 * oper1;
    system("cls");
    
    cout<<endl;
    gotoxy(10,3);cout<<"La operacion ingresada es: "<<"("<<g<<"x^"<<g1<<" "<<g2<<"x^"<<g3<<")"<<"^"<<g4<<" "<<"("<<h<<"x^"<<h1<<" "<<h2<<"x^"<<h3<<")"<<"^"<<h4<<endl;

    
    gotoxy(10,5);cout<<"La derivada del primer dato P'= "<<g4<<"("<<g<<"x^"<<g1<<" "<<g2<<"x^"<<g3<<")"<<"^"<<g4-1<<" "<<" "<<"("<<derivada1<<"x^"<<g1-1<<" "<<derivada2<<"x^"<<g3-1<<")"<<" = "<<"("<<g<<"x^"<<g1<<" "<<g2<<"x^"<<g3<<")"<<"^"<<g4-1<<" "<<"("<<g4*derivada1<<"x^"<<g1-1<<" "<<g4*derivada2<<"x^"<<g3-1<<")"<<" = "<<"("<<oper1 * g<<"x^"<<g1<<" "<<oper1 * g2<<"x^"<<g3<<")"<<endl;

    gotoxy(10,7);cout<<"La derivada del segundo dato S'= "<<h4<<"("<<h<<"x^"<<h1<<" "<<h2<<"x^"<<h3<<")"<<"^"<<h4-1<<" "<<" "<<"("<<derivada3<<"x^"<<h1-1<<" "<<derivada4<<"x^"<<h3-1<<")"<<" = "<<"("<<h<<"x^"<<h1<<" "<<h2<<"x^"<<h3<<")"<<"^"<<h4-1<<" "<<"("<<h4*derivada3<<"x^"<<h1-1<<" "<<h4*derivada4<<"x^"<<h3-1<<")"<<endl<<endl;

    
    gotoxy(10,9);cout<<"LA OPERACION ES LA SIGUIENTE"<<endl<<endl;
    gotoxy(10,10);cout<<"f'(x) = "<<"("<<g<<"x^"<<g1<<" "<<g2<<"x^"<<g3<<")"<<"^"<<g4<<" "<<"("<<h<<"x^"<<h1<<" "<<h2<<"x^"<<h3<<")"<<"^"<<h4<<" "<<"("<<oper2<<"x^"<<h1-1<<" "<<oper3<<"x^"<<h3-1<<")"<<" + "<<"("<<g4*derivada1<<"x^"<<g1-1<<" "<<g4*derivada2<<"x^"<<g3-1<<")"<<" "<<"("<<g<<"x^"<<g1<<" "<<g2<<"x^"<<g3<<")"<<""<<g4-1<<" "<<"("<<h<<"x^"<<h1<<" "<<h2<<"x^"<<h3<<")"<<"^"<<h4<<endl;
    gotoxy(10,11);cout<<"f'(x) = "<<"("<<g<<"x^"<<g1<<" "<<g2<<"x^"<<g3<<")"<<"^"<<g4-1<<" "<<"("<<h<<"x^"<<h1<<" "<<h2<<"x^"<<h3<<")"<<"^"<<h4-1<<" "<<"["<<"("<<g<<"x^"<<g1<<" "<<g2<<"x^"<<g3<<")"<<" "<<"("<<oper2<<"x^"<<h1-1<<" "<<oper3<<"x^"<<h3-1<<")"<<" + "<<"("<<oper1<<"x^"<<g1-1<<" "<<oper5<<"x^"<<g3-1<<")"<<" "<<"("<<h<<"x^"<<h1<<" "<<h2<<"x^"<<h3<<")"<<"]"<<endl;
    gotoxy(10,12);cout<<"f'(x) = "<<"("<<g<<"x^"<<g1<<" "<<g2<<"x^"<<g3<<")"<<"^"<<g4-1<<" "<<"("<<h<<"x^"<<h1<<" "<<h2<<"x^"<<h3<<")"<<"^"<<h4-1<<" "<<"("<<proc1<<"x^"<<g1+g1<<" "<<proc2<<"x^"<<h1-1<<" "<<proc3<<"x^"<<h3<<" "<<proc4<<"x^"<<g3<<" + "<<proc5<<"x^"<<h1<<" "<<proc6<<"x^"<<h3<<")"<<endl;
    gotoxy(10,13);cout<<"f'(x) = "<<"("<<g<<"x^"<<g1<<" "<<g2<<"x^"<<g3<<")"<<"^"<<g4-1<<" "<<"("<<h<<"x^"<<h1<<" "<<h2<<"x^"<<h3<<")"<<"^"<<h4-1<<" "<<"("<<proc1 + proc5<<"x^"<<h1<<" "<<proc2 + proc3 + proc6<<"x^"<<h3<<" "<<proc4<<"x^"<<g3<<")"<<endl;
}

void menuWalterReglaDeLaCadena(){
    int opc, raiz,X,m,pro,pro1,pro2,pro3,pro4,pro5;
	int Xp;
	int x=1;
	do{
	system("cls");
	gotoxy(40,3);cout<<"DERIVADAS DE UNA RAIZ CON LA REGLA DE LA CADENA"<<endl;
	gotoxy(35,5);cout<<"EJERCICIO.1"<<endl;
	gotoxy(35,6);cout<<"      x ______ "<<endl;
	gotoxy(35,7);cout<<"f(x) = v X^m"<<endl;
	gotoxy(35,8);cout<<endl;
	gotoxy(35,9);cout<<"EJERCICIO 2."<<endl;
	gotoxy(35,10);cout<<"         x ______ "<<endl;
	gotoxy(35,11);cout<<"f(x) = X  v X^m"<<endl;
	gotoxy(35,12);cout<<endl;
	gotoxy(35,13);cout<<"EJERCICIO 3."<<endl;
	gotoxy(35,14);cout<<"        ______ "<<endl;
	gotoxy(35,15);cout<<"f(x) = v X^m + X"<<endl;
	gotoxy(35,16);cout<<endl;
	gotoxy(35,17);cout<<"4. Salir"<<endl;
	gotoxy(35,18);cin>>opc;
		
		switch(opc){
			case 1:
				system("cls");
				gotoxy(35,3);cout<<"EJERCICIO.1"<<endl;
	            gotoxy(35,4);cout<<"      x ______ "<<endl;
              	gotoxy(35,5);cout<<"f(x) = v X^m"<<endl;
              	gotoxy(35,6);cout<<endl;
              	gotoxy(35,7);cout<<"ESCRIBE EL VALOR DE x DE LA RAIZ"<<endl;
               	gotoxy(35,8);cin>>raiz;
	            gotoxy(35,9);cout<<"ESCRIBE EL VALOR DE X"<<endl;
	            gotoxy(35,10);cin>>X;
	            gotoxy(35,11);cout<<"ESCRIBE EL VALOR DE ^m"<<endl;
	            gotoxy(35,12);cin>>m;
	            system("cls");
	            
	            pro=m*x;
	            pro1=raiz*x;
	            pro2=pro-pro1;
	            
	            if(pro2<0){
	            	pro3 = -pro2;
	            	gotoxy(35,3);cout<<"PASO 1"<<endl;
	                gotoxy(35,4);cout<<"f(x) = x^"<<m<<"/"<<raiz<<endl;
	                gotoxy(35,5);cout<<"PASO 2"<<endl;
	                gotoxy(35,6);cout<<"f'(x) = "<<m<<"/"<<raiz<<"x^"<<pro2<<"/"<<pro1<<endl;
	                gotoxy(35,7);cout<<"PASO 3"<<endl;
	                gotoxy(35,8);cout<<"f'(x) = "<<m<<"/"<<raiz<<"x^"<<pro3<<"/"<<raiz<<endl;
	                gotoxy(35,9);cout<<"PASO 4"<<endl;
	                gotoxy(35,10);cout<<"             ____"<<endl;
	                gotoxy(35,11);cout<<"f(x) = "<<m<<"/"<<raiz<<" "<<raiz<<"v  x^"<<pro3<<endl;
	            	
				}else{
		
				    gotoxy(35,3);cout<<"PASO 1"<<endl;
	                gotoxy(35,4);cout<<"f(x) = x^"<<m<<"/"<<raiz<<endl;
	                gotoxy(35,5);cout<<"PASO 2"<<endl;
	                gotoxy(35,6);cout<<"f'(x) = "<<m<<"/"<<raiz<<"x^"<<pro2<<"/"<<pro1<<endl;
	                gotoxy(35,7);cout<<"PASO 3"<<endl;
	                gotoxy(35,8);cout<<"              ____"<<endl;
	                gotoxy(35,9);cout<<"f(x) = "<<m<<"/"<<raiz<<" "<<raiz<<" v  x^"<<pro2<<endl;
					
				}
	            system("pause");
				break;
				
			case 2:
				system("cls");
			        gotoxy(35,3);cout<<"EJERCICIO 2."<<endl;
                	gotoxy(35,4);cout<<"         x ______ "<<endl;
                	gotoxy(35,5);cout<<"f(x) = X  v X^m"<<endl;
                	gotoxy(35,6);cout<<""<<endl;
                	gotoxy(35,7);cout<<"ESCRIBE EL VALOR DE X"<<endl;
                	gotoxy(35,8);cin>>Xp;
                	gotoxy(35,9);cout<<"ESCRIBE EL VALOR DE x DE LA RAIZ"<<endl;
               	    gotoxy(35,10);cin>>raiz;
	                gotoxy(35,11);cout<<"ESCRIBE EL VALOR DE X^m"<<endl;
	                gotoxy(35,12);cin>>X;
	                gotoxy(35,13);cout<<"ESCRIBE EL VALOR DE ^m"<<endl;
	                gotoxy(35,14);cin>>m;
	                system("cls");
	                
	                pro=m*x;
	                pro1=raiz*x;
	                pro2=pro-pro1;
	                pro4=Xp*m;
	                
	                if(pro2<0){
	            	pro3 = -pro2;
	            	gotoxy(35,3);cout<<"PASO 1"<<endl;
	                gotoxy(35,4);cout<<"f(x) = "<<Xp<<" x^"<<m<<"/"<<raiz<<endl;
	                gotoxy(35,5);cout<<"PASO 2"<<endl;
	                gotoxy(35,6);cout<<"f'(x) = "<<Xp<<" * "<<m<<"/"<<raiz<<"x^"<<pro2<<"/"<<pro1<<endl;
	                gotoxy(35,7);cout<<"PASO 3"<<endl;
	                gotoxy(35,8);cout<<"f'(x) = "<<Xp<<"/ 1  *"<<m<<"/"<<raiz<<" x^"<<pro3<<"/"<<raiz<<endl;
	                gotoxy(35,9);cout<<"PASO 4"<<endl;
	                gotoxy(35,10);cout<<"             ____"<<endl;
	                gotoxy(35,11);cout<<"f(x) = "<<pro4<<"/"<<raiz<<" x"<<raiz<<"v  x^"<<pro3<<endl;
	            	
				}else{
					gotoxy(35,3);cout<<"PASO 1"<<endl;
	                gotoxy(35,4);cout<<"f(x) = "<<Xp<<" x^"<<m<<"/"<<raiz<<endl;
	                gotoxy(35,5);cout<<"PASO 2"<<endl;
	                gotoxy(35,6);cout<<"f'(x) = "<<Xp<<" * "<<m<<"/"<<raiz<<"x^"<<pro2<<"/"<<pro1<<endl;
	                gotoxy(35,7);cout<<"PASO 3"<<endl;
	                gotoxy(35,8);cout<<"f'(x) = "<<Xp<<"/ 1  *"<<m<<"/"<<raiz<<" x^"<<pro3<<"/"<<raiz<<endl;
	                gotoxy(35,9);cout<<"PASO 4"<<endl;
	                gotoxy(35,10);cout<<"             ____"<<endl;
	                gotoxy(35,11);cout<<"f(x) = "<<pro4<<"/"<<raiz<<"  "<<raiz<<"v  x^"<<pro2<<endl;
		
				}
                	system("pause");
				break;
			case 3:
				system("cls");
				gotoxy(35,3);cout<<"EJERCICIO 3."<<endl;
	            gotoxy(35,4);cout<<"        ______ "<<endl;
	            gotoxy(35,5);cout<<"f(x) = v X^m + X"<<endl;
	            gotoxy(35,6);cout<<endl;
                gotoxy(35,7);cout<<"ESCRIBE EL VALOR DE x DE LA RAIZ"<<endl;
               	gotoxy(35,8);cin>>raiz;
	            gotoxy(35,9);cout<<"ESCRIBE EL VALOR DE X^m"<<endl;
	            gotoxy(35,10);cin>>X;
	            gotoxy(35,11);cout<<"ESCRIBE EL VALOR DE ^m"<<endl;
	            gotoxy(35,12);cin>>m;
	            gotoxy(35,13);cout<<"ESCRIBE EL VALOR DE X"<<endl;
                gotoxy(35,14);cin>>Xp;
                system("cls");
                
                 pro=m*x;
	             pro1=raiz*x;
	             pro2=pro-pro1;
	             pro4=Xp*m;
	             pro5=m*X;
                
                gotoxy(35,3);cout<<"PASO 1"<<endl;
                gotoxy(35,4);cout<<"f(x) = ("<<X<<"x^"<<m<<" + "<<Xp<<")"<<endl;
                gotoxy(35,5);cout<<"PASO 2"<<endl;
                gotoxy(35,6);cout<<"f'(x) = "<<x<<"/"<<raiz<<"("<<X<<"x^"<<m<<" + "<<Xp<<")^ "<<pro2<<"/"<<pro1<<" * ("<<pro5<<"x)"<<endl;
                gotoxy(35,7);cout<<"PASO 3"<<endl;
                gotoxy(35,8);cout<<"f'(x) = "<<pro5<<"x /"<<raiz<<" * ("<<X<<"x^"<<m<<" + "<<Xp<<")^ "<<pro2<<"/"<<pro1<<endl;
                gotoxy(35,9);cout<<"PASO 4"<<endl;
                gotoxy(35,10);cout<<"             ___"<<endl;
                gotoxy(35,11);cout<<"f'(x) = x / v"<<X<<"x^"<<m<<" + "<<Xp<<endl;
	            
				system("pause");
				break;
				
			case 4:
                return;
			default:
                system("cls");
				gotoxy(35,5);cout << "Opcion no valida" << endl;
				system("pause");
			   break;
				
		}
}
	while(opc !=4);
}

void menuReglaCadena(){
    system("cls");
    char opcion;
    do{
        gotoxy(40,3);cout << "REGLA DE LA CADENA" << endl;
        gotoxy(30,4);cout << "Elija el ejercicio que desea realizar:" << endl;
        gotoxy(30,5);cout << "1. Regla de la cadena con producto" << endl;
        gotoxy(30,6);cout << "2. Regla de la cadena con cociente" << endl;
        gotoxy(30,7);cout << "3. Regla de la cadena con raiz" << endl;
        gotoxy(30,8);cout << "4. Salir" << endl;
        gotoxy(30,9);cin >> opcion;
        switch (opcion){
            case '1':
                system("cls");
                reglaCadenaProductoKimberly();
                system("pause");
                system("cls");
                break;
            case '2':
                menuEswinReglaCadena();
                system("cls");
                break;
            case '3':
                menuWalterReglaDeLaCadena();
                system("cls");
                break;
            case '4':
                return;
            default:
                gotoxy(40,5);cout << "Opcion no valida" << endl;
                break;
        }
    } while (opcion != '3');
}

void menuWalter(){
	//Funciones Generales
    int opcion;
    int Px1, Px2;
    //Funciones del primer Case
      int result, result1, result2;
      int Px3 = 1;
      int resu;
      int r,r1,r2;
    //Funciones del tercer Case
    int can,can1;
    //Funciones del Quinto Case
    int cal, cal1;
    int form,form1,form2;
    int res,res1;
    //Funciones del Sexto Case
    int resp, resp1, resp2, resp3;
    //Funciones del Septimo Case
    int re, re1, cont, x=1;
    //Funciones del Octabo Case
    int li, li1,li3;

    do {
        
        system("cls"); 
        

        gotoxy(40,1);cout << "***FUNCIONES TRIGONOMETRICAS***"<< endl;
        gotoxy(40,2);cout<< "***SELECCIONE UNA OPCION DE COMO SE COMPONE SU FUNCION***" << endl;
        gotoxy(35,4);cout << "Opcion 1 - Seno"<<endl;
        gotoxy(35,5);cout << "Opcion 2 - Seno al Cuadrado"<<endl;
        gotoxy(35,6);cout << "Opcion 3 - Sen x Cos x"<<endl;
        gotoxy(35,7);cout << "Opcion 4 - Sen cuando es Denominador"<<endl;
        gotoxy(35,8);cout << "Opcion 5 - Sen x Senx"<<endl;
        gotoxy(35,9);cout << "Opcion 6 - Seno x Sen x Cos x"<<endl;
        gotoxy(35,10);cout << "Opcion 7 - Tangente"<<endl;
        gotoxy(35,11);cout << "Opcion 8 - Coseno"<<endl;
        gotoxy(35,12);cout << "Opcion 9 - Salir "<<endl;
        gotoxy(35,13);cout << "Seleccione una opcion: "<<endl;
        gotoxy(35,14);cin >> opcion;

        switch(opcion) {
            case 1:
            	system("cls");
                gotoxy(35,3);cout<<"Lim   Sen Px"<<endl;
                gotoxy(35,4);cout<<"X->0    Px"<<endl;
                gotoxy(35,5);cout<<"Escribe el primer valor de Sen Px"<<endl;
                gotoxy(35,6);cin>>Px1;
                gotoxy(35,7);cout<<"Escribe el segundo valor de Px"<<endl;
                gotoxy(35,8);cin>>Px2;
                system("cls");
                
                if(Px1 == Px2){
                    gotoxy(35,3);cout<<"Su resultado es Lim  Sen"<<Px1<<"x   = 1"<<endl;
                    gotoxy(35,4);cout<<"                X->0   "<<Px2<<"x"<<endl;
                }
                
                else if(Px2==1){
                    
                    result=Px1/Px2;
                    result1=result/Px1;
                    result2=result*result1;
                    gotoxy(35,3);cout<<"PASO 1."<<endl;
                    gotoxy(35,4);cout<<"Lim  Sen"<<Px1<<"x"<<endl;
                    gotoxy(35,5);cout<<"X->0    x"<<endl;
                    gotoxy(35,7);cout<<"PASO 2."<<endl;
                    gotoxy(35,8);cout<<"Lim "<<result2<<" * Sen"<<Px1<<"x"<<endl;
                    gotoxy(35,9);cout<<"X->0   "<<result2<<"x"<<endl;
                    gotoxy(35,11);cout<<"PASO 3."<<endl;
                    gotoxy(35,12);cout<<result2<<" * Lim  * Sen"<<Px1<<"x"<<endl;
                    gotoxy(35,13);cout<<"    X->0    "<<result2<<"x"<<endl;
                    gotoxy(35,14);cout<<"PASO 4."<<endl;
                    gotoxy(35,15);cout<<result2<<"*"<<result1<<endl;
                }
                else if(Px1<Px2){
                    
                    resu=Px1/Px3;
                    gotoxy(35,3);cout<<"PASO 1."<<endl;
                    gotoxy(35,4);cout<<"Lim  Sen"<<Px1<<"x"<<endl;
                    gotoxy(35,5);cout<<"X->0    "<<Px2<<"x"<<endl;
                    gotoxy(35,7);cout<<"PASO 2."<<endl;
                    gotoxy(35,8);cout<<Px3<<" Lim "<<resu<<" * Sen"<<Px1<<"x"<<endl;
                    gotoxy(35,9);cout<<Px2<<" X->0   "<<resu<<"* x"<<endl;
                    gotoxy(35,10);cout<<"PASO 3."<<endl;
                    gotoxy(35,11);cout<<resu<<" * Lim  * Sen"<<Px1<<"x"<<endl;
                    gotoxy(35,12);cout<<Px2<<"    X->0    "<<Px1<<"x"<<endl;
                    gotoxy(35,13);cout<<"RESPUESTA"<<endl;
                    gotoxy(35,14);cout<<resu<<endl;
                    gotoxy(35,15);cout<<Px2<<endl;                    
                } else if(Px1%2==0 && Px2%2==0){
                    
                    r=Px1/Px2;
                    r1=Px1/Px1;
                    r2=r*r1;
                     gotoxy(35,3);cout<<"PASO 1."<<endl;
                     gotoxy(35,4);cout<<"Lim  Sen"<<Px1<<"x"<<endl;
                     gotoxy(35,5);cout<<"X->0    "<<Px2<<"x"<<endl;
                     gotoxy(35,6);cout<<"PASO 2."<<endl;
                     gotoxy(35,7);cout<<"Lim "<<r<<" * Sen"<<Px1<<"x"<<endl;
                     gotoxy(35,8);cout<<"X->0   "<<r<<"*"<<Px2<<"x"<<endl;
                     gotoxy(35,9);cout<<"PASO 3."<<endl;
                     gotoxy(35,10);cout<<r<<" * Lim  * Sen"<<Px1<<"x"<<endl;
                     gotoxy(35,11);cout<<"    X->0    "<<Px1<<"x"<<endl;
                     gotoxy(35,12);cout<<"PASO 4."<<endl;
                     gotoxy(35,13);cout<<r<<"*"<<r1<<endl;
                     gotoxy(35,14);cout<<"RESPUESTA:"<<endl;
                     gotoxy(35,15);cout<<r2<<endl;
                } else{
                     gotoxy(35,3);cout<<"Ingrese valores adecuados"<<endl;
                }
                system("pause");
            break;
           
            case 2:
            	system("cls");
                 gotoxy(40,3);cout<<"***SOLAMENTE CON VALOR DE 1***"<<endl;
                 gotoxy(35,5);cout<<"Lim   Sen' Px"<<endl;
                 gotoxy(35,6);cout<<"X->0      Px"<<endl;
                 gotoxy(35,7);cout<<"Escribe el valor de Sen' Px"<<endl;
                 gotoxy(35,8);cin>>Px1;
                 gotoxy(35,9);cout<<"Escribir el valor de Px"<<endl;
                 gotoxy(35,10);cin>>Px2;
                
                can=Px1/Px2;
                can1=can*0;
                 gotoxy(35,12);cout<<"PASO 1."<<endl;
                 gotoxy(35,13);cout<<"Lim   Sen' Px"<<endl;
                 gotoxy(35,14);cout<<"X->0      Px"<<endl;
                 gotoxy(35,15);cout<<"PASO 2."<<endl;
                 gotoxy(35,16);cout<<"Lim   Sen x  *  Sen x"<<endl;
                 gotoxy(35,17);cout<<"X->0      x"<<endl;
                 gotoxy(35,18);cout<<"PASO 3."<<endl;
                 gotoxy(35,19);cout<<"Lim   Sen x * Lim Senx"<<endl;
                 gotoxy(35,20);cout<<"X->0      x   X->0"<<endl;
                 gotoxy(35,21);cout<<"PASO 3."<<endl;
                 gotoxy(35,22);cout<<" 1 * Sen 0"<<endl;
                 gotoxy(35,23);cout<<"RESPUESTA"<<endl;
                 gotoxy(35,24);cout<<"1 * 0 = 0"<<endl;
                system("pause");
                break;

            case 3:	
            system("cls");
                 gotoxy(40,3);cout<<"SOLAMENTE CUANDO LOS DOS VALORES SEAN 1"<<endl;
                 gotoxy(35,4);cout<<"Lim   Senx Cosx"<<endl;
                 gotoxy(35,5);cout<<"X->0      x"<<endl;
                 gotoxy(35,6);cout<<"Escribe el valor de Sen Px"<<endl;
                 gotoxy(35,7);cin>>Px1;
                 gotoxy(35,8);cout<<"Escribir el valor de Px"<<endl;
                 gotoxy(35,9);cin>>Px2;
                 gotoxy(35,10);cout<<"PASO 1"<<endl;
                 gotoxy(35,11);cout<<"Lim Senx * Lim    Cosx"<<endl;
                 gotoxy(35,12);cout<<"X->0  x    X->0"<<endl;
                 gotoxy(35,13);cout<<"PASO 2"<<endl;
                 gotoxy(35,14);cout<<"1 * Cos 0"<<endl;
                 gotoxy(35,15);cout<<"PASO 2"<<endl;
                 gotoxy(35,16);cout<<"1 * 1"<<endl;
                 gotoxy(35,17);cout<<"RESULTADO"<<endl;
                 gotoxy(35,18);cout<<"1"<<endl;
                system("pause");
                break;

            case 4:
            	system("cls");
                 gotoxy(35,3);cout<<"Lim      Px"<<endl;
                 gotoxy(35,4);cout<<"X->0   Sen Px"<<endl;
                 gotoxy(35,5);cout<<"Escribe el primer valor de Px"<<endl;
                 gotoxy(35,6);cin>>Px1;
                 gotoxy(35,7);cout<<"Escribe el segundo valor de Sen Px"<<endl;
                 gotoxy(35,8);cin>>Px2;
                 system("cls");
                
                if(Px1==1){
                
                    cal=Px2*Px1;
                    cal1=cal*Px2;
                     gotoxy(35,3);cout<<"PASO 1"<<endl;
                     gotoxy(35,4);cout<<"Lim        "<<Px1<<"x"<<endl;
                     gotoxy(35,5);cout<<"X->0   Sen "<<Px2<<"x"<<endl;
                     gotoxy(35,6);cout<<"PASO 2"<<endl;
                     gotoxy(35,7);cout<<"Lim        "<<Px2<<"* x"<<endl;
                     gotoxy(35,8);cout<<"X->0  "<<Px2<<"Sen "<<Px2<<"x"<<endl;
                     gotoxy(35,9);cout<<"PASO 3"<<endl;
                     gotoxy(35,10);cout<<Px1<<"Lim     "<<Px2<<"x"<<endl;
                     gotoxy(35,11);cout<<Px2<<"X->0   Sen "<<Px2<<"x"<<endl;
                     gotoxy(35,12);cout<<"PASO 4"<<endl;
                     gotoxy(35,13);cout<<Px1<<"*"<<Px1<<endl;
                     gotoxy(35,14);cout<<Px2<<endl;
                     gotoxy(35,15);cout<<"RESPUESTA"<<endl;
                     gotoxy(35,16);cout<<Px1<<endl;
                     gotoxy(35,17);cout<<Px2<<endl;
                    
                    
                }
                
                else if(Px1%2==0 && Px2%2==0){
                    
                    form=Px1/Px2;
                    form1=form/Px2;
                    form2=form*form1;
                     gotoxy(35,3);cout<<"PASO 1"<<endl;
                     gotoxy(35,4);cout<<"Lim     "<<Px1<<"x "<<endl;
                     gotoxy(35,5);cout<<"X->0   Sen "<<Px2<<"x    "<<endl;
                     gotoxy(35,6);cout<<"PASO 2"<<endl;
                     gotoxy(35,7);cout<<"Lim     "<<form<<"*"<<form<<"x "<<endl;
                     gotoxy(35,8);cout<<"X->0   Sen  "<<Px2<<"x "<<endl;
                     gotoxy(35,9);cout<<"PASO 3"<<endl;
                     gotoxy(35,10);cout<<form<<"* Lim "<<form<<"x"<<endl;
                     gotoxy(35,11);cout<<"       X->0  Sen"<<Px2<<"x"<<endl;
                     gotoxy(35,12);cout<<"PASO 4"<<endl;
                     gotoxy(35,13);cout<<form<<"*"<<form1<<endl;
                     gotoxy(35,14);cout<<"RESPUESTA"<<endl;
                     gotoxy(35,15);cout<<form2<<endl;
                    
                    
                }
                else{
                    
                    res = 1;
                    res1 = Px2/res;
                    
                     gotoxy(35,3);cout<<"PASO 1"<<endl;
                     gotoxy(35,4);cout<<"Lim        "<<Px1<<"x  "<<Px1<<endl;
                     gotoxy(35,5);cout<<"X->0   Sen "<<Px2<<"x  "<<endl;
                     gotoxy(35,6);cout<<"PASO 2"<<Px2<<endl;
                     gotoxy(35,7);cout<<Px1<<"* Lim         x  "<<Px1<<endl;
                     gotoxy(35,8);cout<<"      X->0   Sen "<<Px2<<"x  "<<endl;
                     gotoxy(35,9);cout<<"PASO 3"<<endl;
                     gotoxy(35,10);cout<<Px1<<"* Lim        "<<res1<<" x  "<<Px1<<endl;
                     gotoxy(35,11);cout<<res1<<"      X->0   Sen "<<Px2<<"x  "<<endl;
                     gotoxy(35,12);cout<<"PASO 4"<<endl;
                     gotoxy(35,13);cout<<Px1<<" * "<<res<<endl;
                     gotoxy(35,14);cout<<Px2<<endl;
                     gotoxy(35,15);cout<<"RESPUESTA"<<endl;
                     gotoxy(35,16);cout<<Px1<<endl;
                     gotoxy(35,17);cout<<Px2<<endl;
                }
                system("pause");
                break;

            case 5:
                system("cls");
                 gotoxy(35,3);cout<<"Lim      Sen Px Sen Px"<<endl;
                 gotoxy(35,4);cout<<"X->0           x^2"<<endl;
                 gotoxy(35,5);cout<<"Escribe el primer valor de Sen Px"<<endl;
                 gotoxy(35,6);cin>>Px1;
                 gotoxy(35,7);cout<<"Escribe el segundo valor de Sen Px"<<endl;
                 gotoxy(35,8);cin>>Px2;
                
                
                resp = 1;
                resp1 = Px1*resp;
                resp2 = Px2*resp;
                resp3 = resp1 * resp * resp2 * resp;
                
                 gotoxy(35,10);cout<<"PASO 1"<<endl;
                 gotoxy(35,11);cout<<"Lim     Sen"<<Px1<<"x  Sen"<<Px2<<"x"<<endl;
                 gotoxy(35,12);cout<<"X->0            x^2"<<endl;
                 gotoxy(35,13);cout<<"PASO 2"<<endl;
                 gotoxy(35,14);cout<<"Lim     Sen"<<Px1<<"x  Sen"<<Px2<<"x"<<endl;
                 gotoxy(35,15);cout<<"X->0            x * x"<<endl;
                 gotoxy(35,16);cout<<"PASO 3"<<endl;
                 gotoxy(35,17);cout<<"Lim   "<<resp1<<" Sen"<<Px1<<"x * Lim "<<resp2<<" Sen"<<Px2<<"x"<<endl;
                 gotoxy(35,18);cout<<"X->0        "<<resp1<<"x          X->0              "<<resp2<<"x"<<endl;
                 gotoxy(35,19);cout<<"PASO 4"<<endl;
                 gotoxy(35,20);cout<<resp1<<" * Lim  Sen"<<Px1<<"x * "<<resp2<<" * Lim  Sen"<<Px2<<"x"<<endl;
                 gotoxy(35,21);cout<<"          X->0 "<<resp1<<"x                   X->0       "<<resp2<<"x"<<endl;
                 gotoxy(35,22);cout<<"PASO 5"<<endl;
                 gotoxy(35,23);cout<<resp1<<"*"<<resp<<"*"<<resp2<<"*"<<resp1<<endl;
                 gotoxy(35,24);cout<<"RESPUESTA"<<endl;
                 gotoxy(35,25);cout<<resp3<<endl;
                system("pause");
                break;

            case 6:
                system("cls");
                 gotoxy(35,3);cout<<"Lim      Sen Px Sen Px Cos Px"<<endl;
                 gotoxy(35,4);cout<<"X->0             x^2"<<endl;
                 gotoxy(35,5);cout<<"Escribe el primer valor de Sen Px"<<endl;
                 gotoxy(35,6);cin>>Px1;
                 gotoxy(35,7);cout<<"Escribe el segundo valor de Sen Px"<<endl;
                 gotoxy(35,8);cin>>Px2;
                
                
                re=Px1/x;
                re1=Px2/x;
                cont=re*x*re1*x*x;
                
                 gotoxy(35,9);cout<<"PASO 1"<<endl;
                 gotoxy(35,10);cout<<"Lim     Sen"<<Px1<<"x * Sen"<<Px2<<"x * Cos x"<<endl;
                 gotoxy(35,11);cout<<"X->0            x^2"<<endl;
                 gotoxy(35,12);cout<<"PASO 2"<<endl;
                 gotoxy(35,13);cout<<"Lim     Sen"<<Px1<<"x * Sen"<<Px2<<"x * Cos x"<<endl;
                 gotoxy(35,14);cout<<"X->0            x * x"<<endl;
                 gotoxy(35,15);cout<<"PASO 3"<<endl;
                 gotoxy(35,16);cout<<"Lim   "<<re<<"Sen"<<Px1<<"x * Lim "<<re1<<" Sen"<<Px2<<"x * Lim Cos x"<<endl;
                 gotoxy(35,17);cout<<"X->0         "<<re<<"x        x->0          "<<re1<<"x        X->0"<<endl;
                 gotoxy(35,18);cout<<"PASO 4"<<endl;
                 gotoxy(35,19);cout<<re<<" Lim   Sen"<<Px1<<"x * "<<re1<<" Lim  Sen"<<Px2<<"x * Lim Cos x"<<endl;
                 gotoxy(35,20);cout<<"X->0         "<<re<<"x                x->0   "<<re1<<"x        X->0"<<endl;
                 gotoxy(35,21);cout<<"PASO 5"<<endl;
                 gotoxy(35,22);cout<<re<<"*"<<x<<"*"<<re1<<"*"<<x<<"*"<<x<<endl;
                 gotoxy(35,23);cout<<"RESPUESTA"<<endl;
                 gotoxy(35,24);cout<<cont<<endl;
                system("pause");
                break;

            case 7:
                system("cls");
                 gotoxy(40,3);cout<<"***SOLAMENTE CON EL VALOR DE 1***"<<endl;
                 gotoxy(35,4);cout<<"Lim   Tan Px"<<endl;
                 gotoxy(35,5);cout<<"X->0    Px"<<endl;
                 gotoxy(35,6);cout<<"Escribe el primer valor de Tan Px"<<endl;
                 gotoxy(35,7);cin>>Px1;
                 gotoxy(35,8);cout<<"Escribe el segundo valor de Px"<<endl;
                 gotoxy(35,9);cin>>Px2;
                
                if(Px1>Px2){
                    
                    
                    li=Px1/Px2;
                    li1=Px1/li;
                    li3=li*li1;
                    
                     gotoxy(35,11);cout<<"PASO 1"<<endl;
                     gotoxy(35,12);cout<<"Lim  Tan"<<Px1<<"x   = "<<li3<<endl;
                     gotoxy(35,13);cout<<"X->0   "<<Px2<<"x"<<endl;
                     gotoxy(35,14);cout<<"PASO 2"<<endl;
                     gotoxy(35,15);cout<<""<<endl;
                     gotoxy(35,16);cout<<"      Sen x"<<endl;
                     gotoxy(35,17);cout<<"Lim   Cos x"<<endl;
                     gotoxy(35,18);cout<<"X->0   x "<<endl;
                     gotoxy(35,19);cout<<"       1"<<endl;
                     gotoxy(35,20);cout<<"PASO 2"<<endl;
                     gotoxy(35,21);cout<<"Lim   Sen x"<<endl;
                     gotoxy(35,22);cout<<"X->0  x Cos x"<<endl;
                     gotoxy(35,23);cout<<"PASO 3"<<endl;
                     gotoxy(35,24);cout<<"Lim   Sen x  *  1"<<endl;
                     gotoxy(35,25);cout<<"x->0    x      Cos x"<<endl;
                     gotoxy(35,26);cout<<"PASO 4"<<endl;
                     gotoxy(35,27);cout<<"Lim   Sen x  *  Lim    1"<<endl;
                     gotoxy(35,28);cout<<"x->0    x       x->0  Cosx"<<endl;
                     gotoxy(35,29);cout<<"PASO 5"<<endl;
                     gotoxy(35,30);cout<<"1  *   1"<<endl;
                     gotoxy(35,31);cout<<"      Cos O"<<endl;
                     gotoxy(35,32);cout<<"PASO 7"<<endl;
                     gotoxy(35,33);cout<<"1  * 1"<<endl;
                     gotoxy(35,34);cout<<"     1"<<endl;
                     gotoxy(35,35);cout<<"RESPUESTA"<<endl;
                     gotoxy(35,36);cout<<"1"<<endl;
                }
                system("pause");
                break;
                
        case 8:
                system("cls");
                gotoxy(40,3);cout<<"***SOLAMENTE CON EL VALOR DE 1"<<endl;
                gotoxy(35,4);cout<<"Lim   X - Cox x"<<endl;
                gotoxy(35,5);cout<<"X->0     x"<<endl;
                gotoxy(35,6);cout<<"Escribir el valor de X"<<endl;
                gotoxy(35,7);cin>>Px1;
                gotoxy(35,8);cout<<"Escribir el valor de x"<<endl;
                gotoxy(35,9);cin>>Px2;
                system("cls");
                
                
                 gotoxy(35,11);cout<<"PASO 1."<<endl;
                 gotoxy(35,12);cout<<"Lim  "<<Px1<<" - Cos x"<<endl;
                 gotoxy(35,13);cout<<"X->0     x"<<endl;
                 gotoxy(35,14);cout<<"PASO 2."<<endl;
                 gotoxy(35,15);cout<<"Lim  ("<<Px1<<" - Cos x) ("<<Px1<<"+ Cos x)"<<endl;
                 gotoxy(35,16);cout<<"X->0     x               ("<<Px1<<"+ Cos x)"<<endl;
                 gotoxy(35,17);cout<<"PASO 3."<<endl;
                 gotoxy(35,18);cout<<"Lim  "<<Px1<<" - Cos^2 x "<<endl;
                 gotoxy(35,19);cout<<"X->0     x   ("<<Px1<<"+ Cos x)"<<endl;	
                 gotoxy(35,20);cout<<"PASO 4."<<endl;
                 gotoxy(35,21);cout<<"Lim   Sen^2 x "<<endl;
                 gotoxy(35,22);cout<<"X->0     x   ("<<Px1<<"+ Cos x)"<<endl;
                 gotoxy(35,23);cout<<"PASO 5."<<endl;
                 gotoxy(35,24);cout<<"Lim   Sen x  *  Sen x"<<endl;
                 gotoxy(35,25);cout<<"X->0     x     ("<<Px1<<"+ Cos x)"<<endl;
                 gotoxy(35,26);cout<<"PASO 6"<<endl;
                 gotoxy(35,27);cout<<"Lim   Sen x  *  Lim  Sen x"<<endl;
                 gotoxy(35,28);cout<<"X->0     x      X->0  "<<Px1<<"+ Cos x"<<endl;
                 gotoxy(35,29);cout<<"PASO 7."<<endl;
                 gotoxy(35,30);cout<<Px1<<"*  0"<<endl;
                 gotoxy(35,31);cout<<"     "<<Px1<<"+"<<Px1<<endl;
                 gotoxy(35,32);cout<<"PASO 8."<<endl;
                 gotoxy(35,33);cout<<Px1<<"* 0"<<endl;
                 gotoxy(35,34);cout<<"RESULTADO"<<endl;
                 gotoxy(35,35);cout<<"0"<<endl;
                system("pause");
        	break;

            case 9:
                system("cls");
                 gotoxy(35,3);cout << "Saliendo del programa." << endl;
                return;

            default:
            	system("cls");
                gotoxy(35,3);cout << "Opcion no valida. Por favor, seleccione una opcion valida." << endl;
                system("pause");
                break;
		}

    } while(opcion != 9);
}

void menuEswin(){
    system("cls");
    int opcion;
    double a,b,c,d,x,m,n;

    do {
    	gotoxy(35,3);cout << "CALCULADORA DE DERIVADAS POR DEFINICION" << endl;
        gotoxy(30,5);cout << "1. Derivada de f(x) = mx + b" << endl;
        gotoxy(30,6);cout << "2. Derivada de f(x) = x^2" << endl;
        gotoxy(30,7);cout << "3. Derivada de f(x) = ax^n" << endl;
        gotoxy(30,8);cout << "4. Derivada de f(x) = x^3 + ax" << endl;
        gotoxy(30,9);cout << "5. Derivada de f(x) = x^2 - ax - b" << endl;
        gotoxy(30,10);cout << "6. Derivada de f(x) = x^2 - ax + b" << endl;
        gotoxy(30,11);cout << "7. Derivada de f(x) = ax^2 - bx - c" << endl;
        gotoxy(30,12);cout << "8. Derivada de f(x) = ax^2 + bx + c" << endl;
        gotoxy(30,13);cout << "9. Derivada de f(x) = ax^3 - bx^2 + cx - d" << endl;
        gotoxy(30,14);cout << "10. Derivada de f(x) = ax^3 - bx^2 - cx + d" << endl;
        gotoxy(30,15);cout << "11.Derivada de f(x) = sqrt(a - bx)" << endl;
        gotoxy(30,16);cout << "12.Derivada de f(x) = sqrt(x)" << endl;
        gotoxy(30,17);cout << "13.Regresar" << endl;

	    gotoxy(30,19);cout << "Ingrese la opcion: ";
	    gotoxy(30,20);cin >> opcion;

        switch(opcion){
            case 1:
            	system("cls");
                gotoxy(35,3);cout << "Funcion lineal: f(x) = mx + b" << endl;
                
				gotoxy(35,5);cout << "Ingrese el valor de m: ";
                gotoxy(35,6);cin >> m;
				
				gotoxy(35,8);cout << "Ingrese el valor de b: ";
                gotoxy(35,9);cin >> b;
                
				derivadaDeFuncionSuma(m, b);
                system("pause");
                system("cls");
            break;

            case 2:
            	system("cls");
                gotoxy(35,3);cout << "Funcion lineal: f(x) = x^2" << endl;
                
				gotoxy(35,5);cout << "Ingrese el valor de x: ";
                gotoxy(35,6);cin >> x;
                
				derivadaDeXalCuadrado(x);
                system("pause");
                system("cls");
            break;

            case 3:
            	system("cls");
                gotoxy(35,3);cout << "Funcion lineal: f(x) = ax^n" << endl;
                
				gotoxy(35,5);cout << "Ingrese el valor de a: ";
                gotoxy(35,6);cin >> a;
                
				gotoxy(35,8);cout << "Ingrese el valor de n: ";
                gotoxy(35,9);cin >> n;
                
				derivadaDeAxAlN(a,n);
                system("pause");
                system("cls");
            break;
            
			case 4:
				system("cls");
				gotoxy(35,3);cout << "Derivada de f(x) = x^3 + ax" << endl;
				
				gotoxy(35,5);cout << "Ingrese el valor de a: " << endl;
				gotoxy(35,6);cin >> a;
				xAlCuboMasBx(a);
				system("pause");
				system("cls");
			break;
            
			case 5:
            	system("cls");
                gotoxy(35,3);cout << "Derivada de f(x) = x^2 - a*x - b" << endl;
                
				gotoxy(35,5);cout << "Ingrese el valor de a: " << endl;
                gotoxy(35,6);cin >> a;
                
				gotoxy(35,8);cout << "Ingrese el valor de b: " << endl;
                gotoxy(35,9);cin >> b;
                
				derivadaDeXalCuadradoMenosAXmenosB(a,b);
                system("pause");
                system("cls");
            break;

            case 6:
            	system("cls");
                gotoxy(35,3);cout << "Derivada de f(x) = x^2 - a*x + b" << endl;
                
				gotoxy(35,5);cout << "Ingrese el valor de a: " << endl;
                gotoxy(35,6);cin >> a;
                
				gotoxy(35,8);cout << "Ingrese el valor de b: " << endl;
                gotoxy(35,9);cin >> b;
                
				derivadaDeXalCuadradoMenosAXmasB(a,b);
                system("pause");
                system("cls");
            break;

            case 7:
            	system("cls");
                gotoxy(35,3);cout << "Derivada de f(x) = ax^2 - bx - c" << endl;
                
				gotoxy(35,5);cout << "Ingrese el valor de a: " << endl;
                gotoxy(35,6);cin >> a;
            
				gotoxy(35,8);cout << "Ingrese el valor de b: " << endl;
                gotoxy(35,9);cin >> b;
                
				gotoxy(35,11);cout << "Ingrese el valor de c: " << endl;
                gotoxy(35,12);cin >> c;
                
				derivadaDeAXalCuadradoMenosDosXmenosC(a,b,c);
                system("pause");
                system("cls");
            break;

            case 8:
            	system("cls");
                gotoxy(35,3);cout << "Derivada de f(x) = ax^2 + bx + c" << endl;
                
				gotoxy(35,5);cout << "Ingrese el valor de a: " << endl;
                gotoxy(35,6);cin >> a;
                
				gotoxy(35,8);cout << "Ingrese el valor de b: " << endl;
                gotoxy(35,9);cin >> b;
                
				gotoxy(35,11);cout << "Ingrese el valor de c: " << endl;
                gotoxy(35,12);cin >> c;
                
				derivadaDeAXalCuadradoMasDosXmasC(a,b,c);
                system("pause");
                system("cls");
            break;

            case 9:
            	system("cls");
                gotoxy(35,3);cout << "Derivada de f(x) = ax^3 - bx^2 + cx - d" << endl;
                
				gotoxy(35,5);cout << "Ingrese el valor de a: " << endl;
                gotoxy(35,6);cin >> a;
                
				gotoxy(35,8);cout << "Ingrese el valor de b: " << endl;
                gotoxy(35,9);cin >> b;
                
				gotoxy(35,11);cout << "Ingrese el valor de c: " << endl;
                gotoxy(35,12);cin >> c;
                
				gotoxy(35,14);cout << "Ingrese el valor de d: " << endl;
                gotoxy(35,15);cin >> d;
                
				derivadaAXalCuboMenosBXalCuadradoMasCXMenosD(a,b,c,d);
                system("pause");
                system("cls");
            break;

            case 10:
            	system("cls");
                gotoxy(35,3);cout << "Derivada de f(x) = ax^3 - bx^2 - cx + d" << endl;
                
				gotoxy(35,5);cout << "Ingrese el valor de a: " << endl;
                gotoxy(35,6);cin >> a;
                
				gotoxy(35,8);cout << "Ingrese el valor de b: " << endl;
                gotoxy(35,9);cin >> b;
                
				gotoxy(35,11);cout << "Ingrese el valor de c: " << endl;
                gotoxy(35,12);cin >> c;
                
				gotoxy(35,14);cout << "Ingrese el valor de d: " << endl;
                gotoxy(35,15);cin >> d;
                
				derivadaAXalCuboMenosBXalCuadradoMenossCXMasD(a,b,c,d);
                system("pause");
                system("cls");
            break;

        	case 11:
        		system("cls");
				gotoxy(35,3);cout << "Derivada de f(x) = sqrt(a -bx)" << endl;
				
				gotoxy(35,5);cout << "Ingrese el valor de a: " << endl;
				gotoxy(35,6);cin >> a;
				
				gotoxy(35,8);cout << "Ingrese el valor de b: " << endl;
				gotoxy(35,9);cin >> b;
				
				derivadaDeRaiz(a,b);
				system("pause");
                system("cls");
			break;
			
			case 12:
				system("cls");
				gotoxy(35,3);cout << "Derivada de f(x) = sqrt(x)" << endl;
				
				gotoxy(35,5);cout << "Ingrese el valor de x: " << endl;
				gotoxy(35,6);cin >> a;
				
				raizX(a);
				system("pause");
				system("cls");
			break;
			
            case 13:
                return;

            default:
            	system("cls");
                
				gotoxy(35,3);cout << "Ingrese una opcion correcta, por favor!! " << endl;
                
				system("pause");
                system("cls");
                break;
        }
    }while (opcion != 13);
}

void menuKimberly( ) {
    system("cls");
    int opcion2;
	double k,x,n,g;

	do{
		gotoxy(40,1);cout << "REGLAS DE DERIVACION " << endl;
	    gotoxy(35,3);cout << "1. Derivada de una constante" << endl;
	    gotoxy(35,4);cout << "2. Derivada de una potencia" << endl;
	    gotoxy(35,5);cout << "3. Derivada de una raiz" << endl;
	    gotoxy(35,6);cout << "4. Derivada de una suma o resta" << endl;
	    gotoxy(35,7);cout << "5. Regla del cociente" << endl;
	    gotoxy(35,8);cout << "6. Regla del producto" << endl;
	    gotoxy(35,9);cout << "7. Regresar"  << endl;
	    gotoxy(35,12);cout << "Selecciona una opcion: " << endl;
	    gotoxy(35,13);cin >> opcion2;
	    
	    switch (opcion2)
	    {
	    case 1:
	    	system("cls");
	        gotoxy(30,3);cout << "Ingresa el valor de la constante f(x) = " << endl;
	        gotoxy(30,4);cin >> k;
	        gotoxy(30,5);derivadaConstante(k);
	        system("pause");
            system("cls");
	    break;
	
	    case 2:
	    	system("cls");
	        gotoxy(35,1);cout<<"DERIVADA DE UNA POTENCIA"<<endl;
	        gotoxy(30,3);cout<<"Ingrese el valor de f(x) = X : ";
	        gotoxy(30,4);cin>>x;
	
	        gotoxy(30,5);derivadaPotencia(x);
	        system("pause");
            system("cls");
	    break;
	
	    case 3:
	    	system("cls");
	    	gotoxy(35,1);cout<<"DERIVADA DE UNA RAIZ"<<endl;
	        gotoxy(30,3);cout<<"Ingrese el valor del indice N (R)/x^m :";
	        gotoxy(30,4);cin>>n;
	        gotoxy(30,5);derivadoRaiz(n);
	        system("pause");
            system("cls");
	    break;
	
	    case 4: 
	    	system("cls");
	        gotoxy(35,1);cout<<"DERIVADA DE UNA SUMA O RESTA"<<endl;
	        gotoxy(30,3);cout<<"F(x)=g(x)+-h(x)"<<endl;
	        gotoxy(30,4);cout<<"Ingrese el primer valor de f(x) = g(x) :";
	        gotoxy(30,5);cin>>g;
	
	        gotoxy(30,6);derivadaSumaResta(g);
	        system("pause");
            system("cls");
	    break;
	
	    case 5: 
	    	system("cls");
	        gotoxy(35,1);cout<<"REGLA DEL COCIENTE"<<endl;
	        gotoxy(30,3);cout<<"F(x)=g(x)/h(x)"<<endl;
	        gotoxy(30,4);cout<<"Ingrese el primer valor de f(x) = g(x) :";
	        gotoxy(30,5);cin>>g;
	        gotoxy(30,6);raCocien(g);
	        system("pause");
            system("cls");
	    break;
	
	    case 6:
	    	system("cls");
	        gotoxy(35,1);cout<<"REGLA DEL PRODUCTO"<<endl;
	        gotoxy(30,3);cout<<"F(x)=g(x)*h(x)"<<endl;
	        gotoxy(30,4);cout<<"Ingrese el primer valor de f(x) = g(x) :";
	        gotoxy(30,5);cin>>g;
	        gotoxy(30,6);raProducto(g);
	        system("pause");
            system("cls");
	    break;
	
	    case 7:
	        return;
	
	    default:
	    	system("cls");
	        cout << "Opcion no valida" << endl;
	        system("pause");
            system("cls");
	        break;
	    }
	} while (opcion2 != 7);
}

void hospitalWalter(){
	int L,L2,Lpros, Lpros2, Lpros3;
	int x=1;
	
	 gotoxy(40,3);cout<<"***EJERCICIO L'HOSPITAL DE UN LOGARITMO Y TRIGONOMETICA***"<<endl;
	 gotoxy(35,4);cout<<"Lim  P - x + In x"<<endl;
	 gotoxy(35,5);cout<<"x->1  P + cos(pi x)"<<endl;
	 gotoxy(35,6);cout<<"ESCRIBE EL PRIMER VALOR DE P"<<endl;
	 gotoxy(35,7);cin>>L;
	 gotoxy(35,8);cout<<"ESCRIBE EL SEGUNDO VALOR DE P"<<endl;
	 gotoxy(35,9);cin>>L2;
	system("cls");
	
	//FORMULAS PARA ENCONTRAR LA FORMA INDETERMINADA
	
	Lpros=L-x;
	Lpros2=L2-x;
	Lpros3=x*x;
	
	 gotoxy(35,11);cout<<"---PASO 1---"<<endl;
	gotoxy(35,12);cout<<"Lim  "<<L<<" - x + In x"<<endl;
	gotoxy(35,13);cout<<"x->1  "<<L2<<" + cos(pi x)"<<endl;
	gotoxy(35,14);cout<<endl;
	gotoxy(35,15);cout<<"---PASO 2---"<<endl;
	gotoxy(35,16);cout<<"Lim  "<<L<<" - 1 + In 1"<<endl;
	gotoxy(35,17);cout<<"x->1  "<<L2<<" + cos(pi (1))"<<endl;
	gotoxy(35,18);cout<<endl;
	gotoxy(35,19);cout<<"---PASO 3---"<<endl;
	gotoxy(35,20);cout<<Lpros<<" + 0"<<endl;
	gotoxy(35,21);cout<<L2<<" - 1"<<endl;
	gotoxy(35,22);cout<<endl;
	gotoxy(35,23);cout<<"---PASO 4---"<<endl;
	gotoxy(35,24);cout<<Lpros2<<endl;
	gotoxy(35,25);cout<<"0"<<endl;
	gotoxy(35,26);cout<<endl;
	gotoxy(35,27);cout<<"---REGLA DE L'HOSPITAL---"<<endl;
	gotoxy(35,28);cout<<"---PASO 1---"<<endl;
	gotoxy(35,29);cout<<"Lim  "<<L<<" - x + In x"<<endl;
	gotoxy(35,30);cout<<"x->1  "<<L2<<" + cos(pi x)"<<endl;
	gotoxy(35,31);cout<<"---PASO 2---"<<endl;
	gotoxy(35,32);cout<<"Lim   d/dx ("<<L<<" - x + In x)"<<endl;
	gotoxy(35,33);cout<<"x->1  d/dx ("<<L2<<" + cos(pi x)"<<endl;
	gotoxy(35,34);cout<<"---PASO 3---"<<endl;
	gotoxy(35,35);cout<<"Lim   -"<<Lpros3<<" + "<<x<<"/ x"<<endl;
	gotoxy(35,36);cout<<"x->1  - Sen (pi x) * pi"<<endl;
	gotoxy(35,37);cout<<"---PASO 4---"<<endl;
	gotoxy(35,38);cout<<"-"<<Lpros3<<" + "<<x<<"/"<<x<<endl;
	gotoxy(35,39);cout<<"-Sen (pi("<<x<<")) * pi"<<endl;
	gotoxy(35,40);cout<<"---PASO 5---"<<endl;
	gotoxy(35,41);cout<<"-"<<Lpros3<<" + "<<x<<endl;
	gotoxy(35,42);cout<<"-0 * pi"<<endl;
	gotoxy(35,43);cout<<"---PASO 6---"<<endl;
	gotoxy(35,44);cout<<"0"<<endl;
	gotoxy(35,45);cout<<"0"<<endl;
	cout<<endl;
	gotoxy(35,46);cout<<"---REGLA DE L'HOSPITAL HALLAR EL ULTIMO VALOR DEL LIM---"<<endl;
	gotoxy(35,47);cout<<"---PASO 1---"<<endl;
	gotoxy(35,48);cout<<"Lim   d/dx (-"<<Lpros3<<" + "<<x<<"/ x)"<<endl;
	gotoxy(35,49);cout<<"x->1  d/dx (-pi Sen (pi x))"<<endl;
	gotoxy(35,50);cout<<"---PASO 2---"<<endl;
	gotoxy(35,51);cout<<"Lim   -"<<Lpros3<<" / x^2"<<endl;
	gotoxy(35,52);cout<<"x->1  -pi Cos(pi x) * pi"<<endl;
	gotoxy(35,53);cout<<"---PASO 3---"<<endl;
	gotoxy(35,54);cout<<"Lim   "<<Lpros3<<" / x^2"<<endl;
	gotoxy(35,55);cout<<"x->1  pi^2 Cos(pi x)"<<endl;
	gotoxy(35,56);cout<<"---PASO 4---"<<endl;
	gotoxy(35,57);cout<<"Lim   "<<Lpros3<<" / "<<x<<"^2"<<endl;
	gotoxy(35,58);cout<<"x->1  pi^2 Cos(pi ("<<x<<")"<<endl;
	gotoxy(35,59);cout<<"---PASO 5---"<<endl;
	gotoxy(35,60);cout<<x<<endl;
	gotoxy(35,61);cout<<"pi^2(-"<<x<<")"<<endl;
	gotoxy(35,62);cout<<"---PASO 6---"<<endl;
	gotoxy(35,63);cout<<"- "<<x<<endl;
	gotoxy(35,64);cout<<"pi^2"<<endl;
}

void hospitalKimberly(){
	double x, g, g1, h, h1;
    
    gotoxy(35,1);cout<<"L'HOPITAL'"<<endl<< endl;
    
    gotoxy(30,3);cout << "Lim   Ax^B - C" << endl;
    gotoxy(30,4);cout << "     --------" << endl;
    gotoxy(30,5);cout << "x->D  Ex^F - G" << endl;
    
    gotoxy(30,6);cout<<"DATOS"<<endl;
    
    gotoxy(30,7);cout<<"Ingrese el valor del Limite = : ";
    gotoxy(30,8);cin>>x;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
        return;
    }
    
    gotoxy(30,9);cout<<"Ingrese el primer valor del exponente X = : ";
    gotoxy(30,10);cin>>g;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
        return;
    }
    
    gotoxy(30,11);cout<<"Ingrese el segundo valor: ";
    gotoxy(30,12);cin>>g1;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
        return;
    }
    
    gotoxy(30,13);cout<<"----------------------------"<<endl;
    
	gotoxy(30,14);cout<<"Ingrese el segundo valor del exponente X = : ";
    gotoxy(30,15);cin>>h;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
        return;
    }
    
    gotoxy(30,16);cout<<"Ingrese segundo el valor: ";
    gotoxy(30,17);cin>>h1;

    if (cin.fail()) {
        cout<<"Debe ingresar un numero"<<endl;
        return;
    }
    
    
    double derivada1 = pow(x,g);
    double derivada2 = pow(x,h);
    double de = g-1;
    double de1 = h-1;
    double ope1 = pow(x,g-1);
    double ope2 = pow(x, h-1);
    double tot1 = ope1*g;
    double tot2 = ope2*h;
    double mit1 = tot1/2;
    double mit2 = tot2/2;
    double fin1 = mit1/2;
    double fin2 = mit2/2;

    cout<<endl;
    gotoxy(30,18);cout<<"La operacion ingresada es: "<<endl;
	gotoxy(30,19);cout<<"Lim"<<"   "<<"X^"<<g<<" "<<g1<<endl;
    gotoxy(30,20);cout<<"X->"<<x<<"  --------"<<" = "<<endl;
	gotoxy(30,21);cout<<"      "<<"X^"<<h<<" "<<h1<<endl;
	cout<<endl;
	
	gotoxy(30,22);cout<<"Lim"<<"   "<<"("<<x<<")"<<"^"<<g<<" "<<g1<<endl;
    gotoxy(30,23);cout<<"X->"<<x<<"  ----------"<<" = "<<endl;
	gotoxy(30,24);cout<<"      "<<"("<<x<<")"<<"^"<<h<<" "<<h1<<endl; 
	cout<<endl;
	
	gotoxy(30,25);cout<<"Lim"<<"   "<<derivada1<<" "<<g1<<endl;
    gotoxy(30,26);cout<<"X->"<<x<<"  ----------"<<" = "<<endl;
	gotoxy(30,27);cout<<"      "<<derivada2<<" "<<h1<<endl;
	cout<<endl;
	
	gotoxy(30,28);cout<<"Lim"<<"   "<<derivada1 + g1<<endl;
    gotoxy(30,29);cout<<"X->"<<x<<"  ----------"<<endl;
	gotoxy(30,30);cout<<"      "<<derivada2 + h1<<endl;	
	cout<<endl;
	
	gotoxy(30,31);cout<<"==========================================="<<endl;
	cout<<endl;
	
	gotoxy(30,32);cout<<"Lim"<<"   "<<"d/dx "<<"X^"<<g<<" "<<g1<<endl;
    gotoxy(30,33);cout<<"X->"<<x<<"  ---------------"<<" = "<<endl;
	gotoxy(30,34);cout<<"      "<<"d/dx "<<"X^"<<h<<" "<<h1<<endl;	
	cout<<endl;
	
	gotoxy(30,35);cout<<"Lim"<<"   "<<g<<"x^"<<de<<endl;
    gotoxy(30,36);cout<<"X->"<<x<<"  ----------"<<" = "<<endl;
	gotoxy(30,37);cout<<"      "<<h<<"x^"<<de1<<endl;
	cout<<endl;
	
	gotoxy(30,38);cout<<"Lim"<<"   "<<g<<"("<<x<<")^"<<de<<endl;
    gotoxy(30,39);cout<<"X->"<<x<<"  ----------"<<" = "<<endl;
	gotoxy(30,40);cout<<"      "<<h<<"("<<x<<")^"<<de1<<endl;
	cout<<endl;
	
	gotoxy(30,41);cout<<"Lim"<<"   "<<tot1<<endl;
    gotoxy(30,42);cout<<"X->"<<x<<"  ----------"<<" = "<<endl;
	gotoxy(30,43);cout<<"      "<<tot2<<endl;
	cout<<endl;
	
	gotoxy(30,46);cout<<"Lim"<<"   "<<tot1<<endl;
    gotoxy(30,45);cout<<"X->"<<x<<"  ----------"<<" = "<<endl;
	gotoxy(30,47);cout<<"      "<<tot2<<endl;
	cout<<endl;
	
	gotoxy(30,48);cout<<"Lim"<<"   "<<mit1<<endl;
    gotoxy(30,49);cout<<"X->"<<x<<"  ----------"<<" = "<<endl;
	gotoxy(30,50);cout<<"      "<<mit2<<endl;
	cout<<endl;
	
	gotoxy(30,51);cout<<"Lim"<<"   "<<fin1<<endl;
    gotoxy(30,52);cout<<"X->"<<x<<"  ----------"<<" = "<<endl;
	gotoxy(30,53);cout<<"      "<<fin2<<endl;
	cout<<endl;
}

void menuReglaHospital(){
	system("cls");
	int opcion;
	do{
		system("cls");
		gotoxy(30,3);cout << "Regla de L'Hospital" << endl;
		gotoxy(30,4);cout << "1. Lim   Ax^B - C" << endl;
    	gotoxy(30,5);cout << "       --------" << endl;
    	gotoxy(30,6);cout << "   x->D  Ex^F - G" << endl<<endl;
    	
    	gotoxy(30,8);cout << "2. Lim   P - x + In x"<<endl;
		gotoxy(30,9);cout << "   x->1  P + cos(pi x)"<<endl<<endl;
		
		gotoxy(30,11);cout << "3. Salir" << endl;
		
		gotoxy(30,13);cout << "Seleccione una opccion: " << endl;
		gotoxy(30,14);cin >> opcion;
		
		switch(opcion){
			case 1:
				system("cls");
				hospitalKimberly();
				system("pause");
			break;
			
			case 2:
				system("cls");
				hospitalWalter();
				system("pause");
			break;
			
			case 3:
				return;
			
			default:
				gotoxy(30,53);cout << "Seleccione una opcion correcta";
				break;
		}
		
	}while(opcion != 3);
}

void menuPrincipal()
{
    int opcion;
    
    do {
    	system("cls");
    	gotoxy(30,1);cout << "Bienvenido a la calculadora de derivadas" << endl;
	    gotoxy(35,3);cout << "1. Limites Trigonometricos" << endl;
	    gotoxy(35,4);cout << "2. Calculo de Derivadas en una funcion (con formula)" << endl;
	    gotoxy(35,5);cout << "3. Reglas de Derivacion" << endl;
	    gotoxy(35,6);cout << "4. Regla de la Cadena" << endl;
	    gotoxy(35,7);cout << "5. Regla L'Hospital" << endl;
	    gotoxy(35,8);cout << "6. Salir" << endl;
	    gotoxy(35,11);cout << "Selecciona una opcion: " << endl;
	    gotoxy(35,12);cin >> opcion;
	    
	
	    switch (opcion) {
	    case 1:
	        cout << "Limites Trigonometricos" << endl;
	        menuWalter();
            system("cls");
	    break;
	
	    case 2:
	        cout << "Calculo de Derivadas en una funcion (con formula)" << endl;
	        menuEswin();
            system("cls");
	    break;
	
	    case 3:
	        cout << "Reglas de Derivacion" << endl;
	        menuKimberly();
            system("cls");
	    break;
	
	    case 4:
	        cout << "Regla de la Cadena" << endl;
            menuReglaCadena();
            system("cls");
	    break;
	
	    case 5:
	        cout << "Regla L'Hospital" << endl;
	        menuReglaHospital();
            system("cls");
	    break;
	
	    case 6:
	        gotoxy(30,15);cout << "Gracias por usar la calculadora de derivadas" << endl;
	    break;
	
	    default:
	    	system("cls");
	        cout << "Opcion no valida" << endl;
	        system("pause");
	        break;
	    }
	}while (opcion != 6);
}

int main()
{
    menuPrincipal();
    return 0;
}
