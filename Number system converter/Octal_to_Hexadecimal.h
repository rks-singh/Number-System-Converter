
#include<iostream>
#include<cmath>
using namespace std;

namespace  Octal_To_Hexadecimal
{
    void OctalToHexadecimal()
    {
        cout<<endl;
        cout<<"=========================================================================================================="<<endl;
        cout<<endl;
        cout<<"                         -: WELCOME TO OCTAL TO HEXADECIMAL CONVERTER PAGE :-" <<endl;
        cout<<endl;
        cout<<"                                         DATE: "<< __DATE__<<endl;
        cout<<endl;

        int octalnumber; // for storing octal numbewr.
        cout<<"                             ENTER THE OCTAL NUMBER : ";
                                            cin>>octalnumber;
        
        int temp = octalnumber;  // storing octalnumbewr for further use;
        bool check=true; 
        while(octalnumber !=0) // checking invalid occurance.
        {
            int remainder = octalnumber%10;
            if(remainder == 8 || remainder ==9)
            {
                check = false;
                break;
            }
            octalnumber /=10;
        }
        
        if(check == true)
        {
            int decimalnumber =0; // for storing decimal number.
            int count =0; // for counting power.
            octalnumber = temp;
        while(octalnumber !=0) // converting octal number to decimal number.
        {
            int remainder = octalnumber %10;
            decimalnumber = decimalnumber + remainder*(pow(8,count));
            count++;
            octalnumber /=10;
        }
        
            cout<<endl;
            cout<<"                                     HEXADECIMAL NUMBER IS : "<<hex<<decimalnumber<<endl;
            cout<<endl;
            cout<<"=========================================================================================================="<<endl;
        }
        else
        {
            cout<<"                                     INVALID OCTAL NUMBER"<<endl;
            cout<<endl;
            OctalToHexadecimal();
        }
        
    }
} // namespace  Octal_To_Hexadecimal
