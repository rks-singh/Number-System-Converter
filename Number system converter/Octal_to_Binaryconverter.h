

#include<iostream>
#include<cmath>
using namespace std;

namespace Octal_To_Binaryconverter
{
    void OctalToBinary()
    {
        cout<<endl;
        cout<<"=========================================================================================================="<<endl;
        cout<<endl;
        cout<<"                         -: WELCOME TO OCTAL TO BINARY CONVERTER PAGE :-" <<endl;
        cout<<endl;
        cout<<"                                         DATE: "<< __DATE__<<endl;
        cout<<endl;

        int octalnumber; // for storing octal numbewr.
        cout<<"                             ENTER THE OCTAL NUMBER : ";
                                            cin>>octalnumber;
        int count =0; // for counting power.
        int decimalnumber =0; // for storing decimal number.
        int temp = octalnumber; // storing octalnumber for further use.
        bool check = true;
        while(octalnumber !=0) // checking invalid octal number.
        {
            int remainder = octalnumber%10;
            if(remainder ==8 || remainder ==9)
            {
                check=false;
                break;
            }
            octalnumber /=10;
        }
        if(check == true)
        {
            octalnumber = temp;
            while(octalnumber != 0) // converting octal to decimal number.
            {
                int remainder = octalnumber%10;
                decimalnumber = decimalnumber+remainder*(pow(8,count));
                count++;
                octalnumber /=10;
            }

            int binarynumber[20]; // for storing binary number.
            int counter =0; // counter variable for counting index.

            while(decimalnumber !=0) // converting decimal to binary number.
            {
                int remainder = decimalnumber %2;
                binarynumber[counter++] = remainder;
                decimalnumber /=2;
            }
            cout<<endl;
            cout<<"                                     BINARY NUMBER IS : ";
            for(int i=counter-1; i>=0; i--)
            {
                cout<<binarynumber[i];
            }
            
            cout<<endl;
            cout<<"=========================================================================================================="<<endl;
        }
        else
        {
            cout<<"                                     INVALID OCTAL NUMBER"<<endl;
            cout<<endl;
            OctalToBinary();
        }
    }
} // namespace Octal_To_Binaryconverter
