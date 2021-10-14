
#include<iostream>
#include<cmath>
using namespace std;

namespace Binary_To_Hexadecimal
{
    void BinaryToHexadecimal()
    {
        cout<<endl;
        cout<<"=========================================================================================================="<<endl;
        cout<<endl;
        cout<<"                         -: WELCOME TO BINARY TO HEXADECIMAL CONVERTER PAGE :-" <<endl;
        cout<<endl;
        cout<<"                                         DATE: "<< __DATE__<<endl;
        cout<<endl;

        int binarynumber; // to store binary number.
        cout<<"                             ENTER THE BINARY NUMBER : ";
                                            cin>>binarynumber;
        
        bool check = true; // checking occurance of invalid binary number.
        int count=0; // for counting power.
        int decimal=0 ; // for storing decimal number.
        int temp = binarynumber; // for further use of binary number.

        while(binarynumber !=0) //checking of invalid binary number.
        {
            int remainder = binarynumber %10;
            if(remainder >=2)
            {
                check = false;
                break;
            }
            binarynumber /=10;
        }
        binarynumber = temp;
        if(check == true)
        {
            while(binarynumber !=0) // converting binary to decimal
            {
                int remainder = binarynumber%10;
                decimal = decimal+remainder*(pow(2,count));
                count++;
                binarynumber/=10;
            }
            cout<<endl;
            cout<<"                                     HEXADECIMAL NUMBER IS : "<<hex<<decimal<<endl;
            cout<<endl;
            cout<<"=========================================================================================================="<<endl;
        }
        else
        {
            cout<<endl;
            cout<<"                                     PLEASE ENTER VALID BINARY NUMBER"<<endl;
            BinaryToHexadecimal();
        }
    }
} // namespace Binary_To_Hexadecimal
