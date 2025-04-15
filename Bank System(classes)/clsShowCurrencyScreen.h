

#pragma once
#include <iostream>
#include "clsListCurrencies.h"
#include "clsFindCurrency.h"
#include "clsUpdateRate.h"
#include "clsCurrencyCalculator.h"




class clsShowCurrencyScreen :protected clsScreen
{

private:

    enum enCurrencyMenueOptions {
        eListCurrencies = 1, eFindCurrency = 2,
        eUpdateRate = 3, eCurrencyCalculator = 4,
        eShowMainMenue = 5
    };

    static short ReadCurrencyMenueOption()
    {
        cout << setw(37) << left << "" << "Choose what do you want to do? [1 to 5]? ";
        short Choice = clsInputValidate::ReadIntNumberBetween(1, 5, "Enter Number between 1 to 5? ");
        return Choice;
    }

    static void _ShowListCurrencyScreen()
    {
        clsListCurrencies::ShowCurrenciesList();

    }

    static void _ShowFindCurrencyScreen()
    {
        clsFindCurrencyScreen::ShowFindCurrencyScreen();

    }

    static void _ShowUpdateRateScreen()
    {
       
        clsUpdateCurrencyRateScreen::ShowUpdateCurrencyRateScreen();

    }

    static void _ShowCurrencyCalculatorScreen()
    {
        clsCurrencyCalculatorScreen::ShowCurrencyCalculatorScreen();


    }

    static void _PerformCurrencyMenueOption(enCurrencyMenueOptions CurrencyMenueOption)
    {
        switch (CurrencyMenueOption)
        {
        case enCurrencyMenueOptions::eListCurrencies:
        {
            system("cls");
            _ShowListCurrencyScreen();
            _GoBackToCurrencyMenue();
            break;
        }

        case enCurrencyMenueOptions::eFindCurrency:
        {
            system("cls");
            _ShowFindCurrencyScreen();
            _GoBackToCurrencyMenue();
            break;
        }


        case enCurrencyMenueOptions::eUpdateRate:
        {
            system("cls");
            _ShowUpdateRateScreen();
            _GoBackToCurrencyMenue();
            break;
        }

        case enCurrencyMenueOptions::eCurrencyCalculator:
        {
            system("cls");
            _ShowCurrencyCalculatorScreen();
            _GoBackToCurrencyMenue();
            break;
        }

        case enCurrencyMenueOptions::eShowMainMenue:
        {

            //do nothing here the main screen will handle it :-) ;

        }
        }


    }

    static void _GoBackToCurrencyMenue()
    {
        cout << "\n\nPress any key to go back to Currency Menue...";
        system("pause>0");
        ShowCurrencyScreen();

    }

public:
    static void ShowCurrencyScreen()
    {
        system("cls");

        _DrawScreenHeader("\tCurrency Screen");

        cout << setw(37) << left << "" << "===========================================\n";
        cout << setw(37) << left << "" << "\t\t  Currency Menue\n";
        cout << setw(37) << left << "" << "===========================================\n";
        cout << setw(37) << left << "" << "\t[1] List Currencies.\n";
        cout << setw(37) << left << "" << "\t[2] Find Currency.\n";
        cout << setw(37) << left << "" << "\t[3] Update Rate.\n";
        cout << setw(37) << left << "" << "\t[4] Currency Calculator.\n";
        cout << setw(37) << left << "" << "\t[5] Main Menue.\n";
        cout << setw(37) << left << "" << "===========================================\n";

        _PerformCurrencyMenueOption((enCurrencyMenueOptions)ReadCurrencyMenueOption());
    }
};