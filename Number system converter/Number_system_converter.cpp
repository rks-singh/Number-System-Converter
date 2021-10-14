
#include<iostream>
#include"Binary_to_Decimalconverter.h"
#include"Binary_to_Hexadecimalconverter.h"
#include"Binary_to_Octalconverter.h"
#include"Decimal_to_Binaryconverter.h"
#include"Decimal_to_Hexadeciamalconverter.h"
#include"Decimal_to_Octalconverter.h"
#include"Octal_to_Binaryconverter.h"
#include"Octal_to_Decimalconverter.h"
#include"Octal_to_Hexadecimal.h"
#include"Hexadeciaml_to_Binaryconverter.h"
using namespace Binary_to_Deciamlconverter;
using namespace Binary_To_Hexadecimal;
using namespace Binary_To_Octalconverter;
using namespace Decimal_To_Binaryconverter;
using namespace Decimal_To_Hexadecimalconverter;
using namespace Decimal_to_Octalconverter;
using namespace Octal_To_Binaryconverter;
using namespace Octal_To_Decimalconverter;
using namespace Octal_To_Hexadecimal;
using namespace Hexadecimal_TO_Binaryconverter;
using namespace std;

void menu()
{
    cout<<endl;
    cout<<endl;
    cout<<" PRESS 1 TO CONVERT BINARY NUMBER TO DECIMAL."<<endl;
    cout<<" PRESS 2 TO CONVERT BINARY NUMBER TO HEXADECIMAL."<<endl;
    cout<<" PRESS 3 TO CONVERT BINARY NUMBER TO OCTAL."<<endl;
    cout<<" PRESS 4 TO CONVERT DECIMAL NUMBER TO BINARY."<<endl;
    cout<<" PRESS 5 TO CONVERT DECIMAL NUMBER TO OCTAL."<<endl;
    cout<<" PRESS 6 TO CONVERT DECIMAL NUMBER TO HEXADECIMAL."<<endl;
    cout<<" PRESS 7 TO CONVERT OCTAL NUMBER TO BINARY. "<<endl;
    cout<<" PRESS 8 TO CONVERT OCTAL NUMBER TO DECIMAL."<<endl;
    cout<<" PRESS 9 TO CONVERT OCTAL NUMBER TO HEXADECIMAL."<<endl;
    cout<<" PRESS 10 TO CONVERT HEXDECIMAL NUMBER TO BINARY."<<endl;
    // cout<<" PRESS 11 TO CONVERT HEXDECIMAL NUMBER TO DECIMAL."<<endl;
    // cout<<" PRESS 12 TO CONVERT HEXDECIMAL NUMBER TO OCTAL."<<endl;
    cout<<" PRESS 11 TO EXIT."<<endl;
    cout<<endl;
    int choice=0; // to store choices.
    while(choice != 13)
    {
        cout<<endl;
        cout<<"             ENTER YOUR CHOICE : ";
                            cin>>choice;
        switch(choice)
        {
            case 1:
                BinaryToDecimal();
                menu();
                break;
            case 2:
                BinaryToHexadecimal();
                menu();
                break;
            case 3:
                BinaryToOctal();
                menu();
                break;
            case 4:
                DecimalToBinary();
                menu();
                break;
            case 5:
                DecimalToOctal();
                menu();
                break;
            case 6:
                DecimalToHexadecimal();
                menu();
                break;
            case 7:
                OctalToBinary();
                menu();
                break;
            case 8:
                OctalToDecimal();
                menu();
                break;
            case 9:
                OctalToHexadecimal();
                menu();
                break;
            case 10:
                HexadecimalToBinary();
                menu();
                break;
            // case 11:
            //     cout<<"Development in progress"<<endl;
            //     break;
            // case 12:
            //     cout<<"Development in progress"<<endl;
            //     break;
            case 11:
                cout<<endl;
                cout<<"                                    -: THANKU FOR VISITING :-"<<endl;
                exit(0);
            default:
                cout<<"PLEASE ENTER CORRECT CHOICE"<<endl;
                menu();
        }
    }
}
int main()
{
    cout<<endl;
    cout<<endl;
    cout<<"                              -: WELCOME TO NUMBER SYSTEM CONVERTER :-"<<endl;
    cout<<endl;
    cout<<"                                        DATE: "<<__DATE__<<endl;
    cout<<endl;
    menu();
}
