

#include<iostream>
#include<cmath>
using namespace std;

namespace Hexadecimal_TO_Binaryconverter
{
    void HexadecimalToBinary()
    {
        cout<<endl;
        cout<<"=========================================================================================================="<<endl;
        cout<<endl;
        cout<<"                         -: WELCOME TO HEXADECIMAL TO BINARY CONVERTER PAGE :-" <<endl;
        cout<<endl;
        cout<<"                                         DATE: "<< __DATE__<<endl;
        cout<<endl;

        string hexanumber; // for storing hexadecimal numbewr.
        cout<<"                             ENTER THE HEXADECIMAL NUMBER : ";
                                            cin>>hexanumber;
        
        int count=0;  // for counting index,
        cout<<endl;
        cout<<"                                     BINARY NUMBER IS : ";
        while(hexanumber[count])
        {
            switch(hexanumber[count])
            {
                case '0':
                    cout<<"0000";
                    break;
                case '1':
                    cout<<"0001";
                    break;
                case '2':
                    cout<<"0010";
                    break;
                case '3':
                    cout<<"0011";
                    break;
                case '4':
                    cout<<"0100";
                    break;
                case '5':
                    cout<<"0101";
                    break;
                case '6':
                    cout<<"0110";
                    break;
                case '7':
                    cout<<"0111";
                    break;
                case '8':
                    cout<<"1000";
                    break;
                case '9':
                    cout<<"1001";
                    break;
                case 'A':
                case 'a':
                    cout<<"1010";
                    break;
                case 'B':
                case 'b':
                    cout<<"1011";
                    break;
                case 'C':
                case 'c':
                    cout<<"1100";
                    break;
                case 'D':
                case 'd':
                    cout<<"1101";
                    break;
                case 'E':
                case 'e':
                    cout<<"1110";
                    break;
                case 'F':
                case 'f':
                    cout<<"1111";
                    break;
            }
            count++;
        }
        cout<<endl;
        cout<<endl;
        cout<<"=========================================================================================================="<<endl;
    }
} // namespace Hexadecimal_TO_Binaryconverter
