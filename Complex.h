#pragma once
#include<iostream>
#include<string>
#include<math.h>
#include<sstream>
using namespace std;

struct Complex {
	double Re;
	double Im;

	Complex();
	Complex(double, double);
	bool testParse(const string&);
	Complex operator-(const Complex& a){
	    Complex neo(a.Re-this->Re,this->Im-a.Im);
	}
    Complex operator*(const Complex& a){
        Complex neo(a.Re*this->Re,this->Im*a.Im);
    }
    Complex operator/(const Complex& a){
        Complex neo(a.Re/this->Re,this->Im/a.Im);
    }
	friend ostream& operator<< (ostream& out, Complex& a) {
		if (a.Im > 0) {
			out << a.Re << " + " << a.Im << "i" << endl;
		}
		if (a.Im == 0) {
			out << a.Re << endl;
		}
		if (a.Im < 0) {
			out << a.Re << " - " << abs(a.Im) << "i" << endl;
		}
		return out;
	}
    friend istringstream& operator>> (istringstream& in, Complex& a) {
        in >> a.Re >> a.Im;
        return in;
    }
	friend istream& operator>>(istream& in, Complex& a) {
		cout << "Enter real: ";
		in >> a.Re;
		cout << "Enter imaginary: ";
		in >> a.Im;
		return in;
	}
};

Complex::Complex() {
	Re = 0;
	Im = 0;
}

Complex::Complex(double a, double b) {
	Re = a;
	Im = b;
}

Complex operator+ (const Complex& a, const Complex& b) {
	Complex neo(a.Re + b.Re, b.Im + a.Im);
	return neo;
}
Complex operator-(const Complex& a,const Complex& b){
    Complex neo(a.Re-b.Re,b.Im-a.Im);
    return neo;
}
Complex operator*(const Complex& a,const Complex& b){
    Complex neo(a.Re*b.Re,b.Im*a.Im);
    return neo;
}
Complex operator/(const Complex& a,const Complex& b){
    Complex neo(a.Re/b.Re,b.Im/a.Im);
    return neo;
}
bool Complex::testParse(const string& str) {
	istringstream istrm(str);
	Complex z;
	istrm >> z;
	if (istrm.good()) {
		cout << "Read success: " << str << " -> " << z << endl;
	}
	else {
		cout << "Read error : " << str << " -> " << z << endl;
	}
	return istrm.good();
}




