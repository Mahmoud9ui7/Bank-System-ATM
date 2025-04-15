


#pragma once
#include <iostream>
#include "clsCurrency.h"


class clsListCurrencies :protected clsScreen
{

private:

    static void PrintCurrencyRecordLine(clsCurrency Currency)
    {

        cout << setw(8) << left << "" << "| " << setw(30) << left << Currency.Country();
        cout << "| " << setw(6) << left << Currency.CurrencyCode();
        cout << "| " << setw(40) << left << Currency.CurrencyName();
        cout << "| " << setw(12) << left << Currency.Rate();

    }

public:
    static void ShowCurrenciesList()
    {
        vector <clsCurrency> vCurrencies = clsCurrency::GetCurrenciesList();

        string Title = "\t  Currency List Screen";
        string SubTitle = "\t    (" + to_string(vCurrencies.size()) + ") Currency.";
        system("cls");
        _DrawScreenHeader(Title, SubTitle);


        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
        cout << "_________________________________________\n" << endl;

        cout << setw(8) << left << "" << "| " << left << setw(15) << "Country";
        cout << "| " << left << setw(20) << "Code";
        cout << "| " << left << setw(12) << "Name";
        cout << "| " << left << setw(20) << "Rate/(1$)";
        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
        cout << "_________________________________________\n" << endl;


        if (vCurrencies.size() == 0)
            cout << "\t\t\t\tNo Currencies Available In the System!";
        else

            for (clsCurrency &Currency : vCurrencies)
            {

                PrintCurrencyRecordLine(Currency);
                cout << endl;
            }

        cout << setw(8) << left << "" << "\n\t_______________________________________________________";
        cout << "_________________________________________\n" << endl;



    }

};

