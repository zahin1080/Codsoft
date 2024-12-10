//Zahin Ahmed(Codsoft Internship)
//Simple Calculator
#include<iostream>
#include<math.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
    string Operatorinthecalculator;
    int VariableinNumber1,VariableinNumber2;
    system("Color 1");
    cout<<"Enter in the Simple Calculator First Number: ";
    cin>>VariableinNumber1;
    system("Color 5");
    cout<<"Enter in the Simple Calculator Operation in the Calculator: ";
    cin>>Operatorinthecalculator;
    system("Color B");
    cout<<"Enter in the Simple Calculator Second Number: ";
    cin>>VariableinNumber2;
    if(Operatorinthecalculator=="+")
    {
        system("Color 3");
        cout<<"Calculator output :";
        cout<<VariableinNumber1+VariableinNumber2;
    }
    else if(Operatorinthecalculator=="-")
    {
        system("Color 4");
        cout<<"Calculator output :";
        cout<<VariableinNumber1-VariableinNumber2;
    }
    else if(Operatorinthecalculator=="*")
    {
        system("Color 5");
        cout<<"Calculator output :";
        cout<<VariableinNumber1*VariableinNumber2;
    }
    else if(Operatorinthecalculator=="/")
    {
        system("Color 6");
        cout<<"Calculator output :";
        cout<<VariableinNumber1/VariableinNumber2;
    }

    return 0;
}
