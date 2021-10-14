

#include<iostream>
#include<cmath>
using namespace std;

namespace Octal_To_Decimalconverter
{
    void OctalToDecimal()
    {
        cout<<endl;
        cout<<"=========================================================================================================="<<endl;
        cout<<endl;
        cout<<"                         -: WELCOME TO OCTAL TO DECIMAL CONVERTER PAGE :-" <<endl;
        cout<<endl;
        cout<<"                                         DATE: "<< __DATE__<<endl;
        cout<<endl;

        int octalnumber; // for storing octal numbewr.
        cout<<"                             ENTER THE OCTAL NUMBER : ";
                                            cin>>octalnumber;
        
        int temp = octalnumber;  // checking invalid octal number.
        bool check = true; 
        while(octalnumber !=0)
        {
            int remainder = octalnumber%10;
            if(remainder ==8 || remainder ==9)
            {
                check = false;
                break;
            }
            octalnumber/=10;
        }
        int decimalnumber =0; // for storing decimal number.
        int count =0; // for counting power.
        octalnumber = temp;
        if(check == true)
        {
            while(octalnumber !=0) // converting octal number to decimal number.
            {
                int remainder = octalnumber %10;
                decimalnumber = decimalnumber + remainder*(pow(8,count));
                count++;
                octalnumber /=10;
            }
                cout<<endl;
                cout<<"                                     DECIMAL NUMBER IS : "<<decimalnumber<<endl;
                cout<<endl;
                cout<<"=========================================================================================================="<<endl;
        }
        else
        {
            cout<<"                                         INVALID OCTAL NUMBER"<<endl;
            cout<<endl;
            OctalToDecimal();
        }
    }
}