// functie_template.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <complex>
#include <string>
#include <iostream>
using namespace std;
#include <stdlib.h>

template <class T>
void Aduna(const T& operand1, const T& operand2, T& rezultat){
	rezultat=operand1+operand2;}

class FaraPlus
{
};

class CuPlus{
	int _nrAleatoriu;
public:
	CuPlus(){
		_nrAleatoriu=rand();
		cout << "Constructor cu plus" << "Nr:" << _nrAleatoriu << endl;
	}

	CuPlus operator+ (CuPlus op) const{
		op._nrAleatoriu += _nrAleatoriu;
		op._nrAleatoriu /=2;
		return op;
	};

	void Info(){
		cout << "Nr:" << _nrAleatoriu << endl;
	}

};


int _tmain(int argc, _TCHAR* argv[])
{
	complex<double> op1C(1.0,1.0), op2C(2.0,2.0), rezC;

	Aduna<complex<double> >(op1C, op2C, rezC);
	cout << "Adunare numere complexe"<< endl;
	cout << op1C << " + " << op2C << " = " << rezC << endl;

	string op1S("Programare"), op2S("Orientata Obiect"), rezS;

	Aduna<string> (op1S, op2S, rezS);
	cout << "Concatenare siruri de caractere" << endl;
	cout << op1S << " + " << op2S << " = " << rezS << endl;

	CuPlus op1CP, op2CP;
	//op1CP= op1CP + op2CP

	Aduna<CuPlus> (op1CP,op2CP, op1CP);
	op1CP.Info();

	system("pause");

	return 0;
}

