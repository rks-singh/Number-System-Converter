

#include<iostream>
#include<cmath>
using namespace std;

namespace Binary_To_Octalconverter
{
    void BinaryToOctal()
    {
        cout<<endl;
        cout<<"=========================================================================================================="<<endl;
        cout<<endl;
        cout<<"                         -: WELCOME TO BINARY TO OCTAL CONVERTER PAGE :-" <<endl;
        cout<<endl;
        cout<<"                                         DATE: "<< __DATE__<<endl;
        cout<<endl;

        int Binarynumber; // to store binary number.
        cout<<"                             ENTER THE BINARY NUMBER : ";
                                            cin>>Binarynumber;
        
        bool check = true; // checking occurance of invalid binary number.
        int count=0; // for counting power.
        int decimal=0 ; // for storing decimal number.
        int temp = Binarynumber; // for further use of binary number.

        while(Binarynumber !=0) //checking of invalid binary number.
        {
            int remainder = Binarynumber %10;
            if(remainder >=2)
            {
                check = false;
                break;
            }
            Binarynumber /=10;
        }
        Binarynumber = temp;
        if(check == true)
        {
            while(Binarynumber !=0) // converting binary to decimal
            {
                int remainder = Binarynumber%10;
                decimal = decimal+remainder*(pow(2,count));
                count++;
                Binarynumber/=10;
            }
            cout<<endl;
            cout<<"                                     OCTAL NUMBER IS : "<<oct<<decimal<<endl;
            cout<<endl;
            cout<<"=========================================================================================================="<<endl;
        }
        else
        {
            cout<<endl;
            cout<<"                                     PLEASE ENTER VALID BINARY NUMBER"<<endl;
            BinaryToOctal();
        }
    }

} // namespace Binary_To_Octalconverter
