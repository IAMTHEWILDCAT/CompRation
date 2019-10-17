#pragma once
#include<iostream>
#include<string>
#include<math.h>
#include<sstream>
using namespace std;

int NOD(int A, int B)
{
    while (A!=B)
        if (A>B) A-=B;
        else B-=A;
    return A;
}

struct Rational
{
    int r;
    int q;
    Rational();
    Rational(int,int);
    void simplify(){
        int nod=NOD(this->r,this->q);
        this->r/=nod;
        this->q/=nod;
    }
    friend ostream& operator<<(ostream& out,Rational& rat){
        out<<rat.r<<"/"<<rat.q<<endl;
        return out;
    }
};
Rational::Rational() {
    r=0;
    q=1;
}
Rational::Rational(int a,int b) {
    r=a;
    q=b;
}
Rational
