
#include<iostream>
#include<cstring>
using namespace std;

namespace Decimal_To_Binaryconverter
{
    void DecimalToBinary()
    {
        cout<<endl;
        cout<<"=========================================================================================================="<<endl;
        cout<<endl;
        cout<<"                         -: WELCOME TO DECIMAL TO BINARY CONVERTER PAGE :-" <<endl;
        cout<<endl;
        cout<<"                                         DATE: "<< __DATE__<<endl;
        cout<<endl;
        
        int decimalnumber; // for storeing decimal number.
        cout<<"                             ENTER THE DECIMAL NUMBER : ";
                                            cin>>decimalnumber;
        
        int binarynumber[20]; // for storing binary number.
        int count =0; // couter variable for counting index.

        while(decimalnumber !=0) // converting decimal number into binary number
        {
            int remainder = decimalnumber%2;
            binarynumber[count++] = remainder;
            decimalnumber/=2;
        }
            cout<<endl;
            cout<<"                                     BINARY NUMBER IS : ";
            for(int i=count-1; i>=0; i--)
            {
                cout<<binarynumber[i];
            }
            
            cout<<endl;
            cout<<"=========================================================================================================="<<endl;

    }
} // namespace Decimal_To_Binaryconverter
