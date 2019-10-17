#pragma once

#include<iostream>
#include<string>
#include<math.h>
#include<sstream>

using namespace std;

int NOD(int A, int B) {
    while (A != B)
        if (A > B) A -= B;
        else B -= A;
    return A;
}

struct Rational {
    int r;
    int q;

    Rational();

    Rational(int, int);

    void simplify() {
        int nod = NOD(this->r, this->q);
        this->r /= nod;
        this->q /= nod;
    }

    friend istream& operator>>(istream& in,Rational& rat){
        cout<<"Input r: ";
        in>>rat.r;
        cout<<"Input q: ";
        in>>rat.q;
        return in;
    }

    friend ostream& operator<<(ostream& out, Rational& rat) {
        rat.simplify();
        if(rat.q==1){
            out << rat.r<<endl;
        }
        else {
            out << rat.r << "/" << rat.q << endl;
        }
        return out;
    }
};

Rational::Rational() {
    r = 0;
    q = 1;
}

Rational::Rational(int a, int b) {
    r = a;
    q = b;
}

Rational operator+(Rational &a, Rational &b) {
    a.simplify();
    b.simplify();
    Rational neo(a.r * b.q + b.r * a.q, a.q * b.q);
    neo.simplify();
    return neo;
}

Rational operator+(Rational& a, int b){
    Rational current(b,1);
    return current+a;
}
