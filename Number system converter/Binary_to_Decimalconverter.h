#include <iostream>
#include <cmath>
using namespace std;
namespace Binary_to_Deciamlconverter
{
    void BinaryToDecimal()
    {
        cout<<endl;
        cout<<"=========================================================================================================="<<endl;
        cout<<endl;
        cout<<"                         -: WELCOME TO BINARY TO DECIMAL CONVERTER PAGE :-" <<endl;
        cout<<endl;
        cout<<"                                         DATE: "<< __DATE__<<endl;
        cout<<endl;

        int binarynumber; // to store binary number.
        cout<<"                             ENTER THE BINARY NUMBER : ";
                                            cin>>binarynumber;
        
        bool check = true; // to occurance of number other than 0 and 1.
        int temp = binarynumber; // storing binarynumber for further use.
        int decimal =0; // to store decimal number.
        int count =0; // to count power of 2.
        while(binarynumber !=0)
        {
            int remainder = binarynumber%10;
            if(remainder >=2)
            {
                check = false;
            }
            binarynumber /=10;
        }
        binarynumber = temp;
        if(check == true)
        {
            while(binarynumber != 0)
            {
                int remainder = binarynumber%10;
                decimal = decimal+remainder*(pow(2,count));
                count++; // increment count by 1.
                binarynumber/=10;
            }
        cout<<endl;
        cout<<"                                     DECIMAL NUMBER is : "<<decimal<<endl;
        cout<<endl;
        cout<<"=========================================================================================================="<<endl;
        }
        else
        {
            cout<<endl;
            cout<<"                                     PLEASE ENTER VALID BINARY NUMBER"<<endl;
            BinaryToDecimal();
        }

    }
} // namespace Binary_to_Deciamlconverter
