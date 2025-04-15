

#pragma once
#include<iostream>
using namespace std;


class clsTemplate
{
	template<typename T> T MyMax(T Number1, T Number2)
	{
		return (Number1 > Number2) ? Number1 : Number2;
	}
	void main()
	{
		MyMax<int>(3, 7);
		MyMax<double>(3.5, 7.2);
		MyMax<char>('k', 'l');
	}
};







///////////////////////////////////////////////////


//template <class T>
//class Calculater
//{
//private:
//
//	T _number1, _number2;
//
//public:
//
//	Calculater(T number1, T number2)
//	{
//		_number1 = number1;
//		_number2 = number2;
//	}
//
//	void print()
//	{
//		cout << "Numbers  : " << _number1 << " And " << _number2 << endl;
//		cout << _number1 << " + " << _number2 << " = " << add() << endl;
//		cout << _number1 << " - " << _number2 << " = " << subtract() << endl;
//		cout << _number1 << " / " << _number2 << " = " << divide() << endl;
//		cout << _number1 << " * " << _number2 << " = " << multiply() << endl;
//	}
//
//	T add()
//	{
//		return _number1 + _number2;
//	}
//
//
//	T subtract()
//	{
//		return _number1 - _number2;
//	}
//
//
//	T divide()
//	{
//		return _number1 / _number2;
//	}
//
//
//	T multiply()
//	{
//		return _number1 * _number2;
//	}
//
//};
//
//int main()
//{
//
//	Calculater <int> integerCalc(10, 20);
//
//	cout << "Intger Template Generic Results :  \n";
//	integerCalc.print();
//
//	Calculater <float> floatCalc(10.5, 20.8);
//
//
//	cout << "\n\nFloat Template Generic Results :  \n";
//	floatCalc.print();
//
//	system("pause > 0");
//
//	return 0;
//}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                         THE END OF COURSE 10 WITH aBU hADHOUD;
//                                               THANKS SO MUCH
//                                                  2024/10/7
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////