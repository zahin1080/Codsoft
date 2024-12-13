//Zahin Ahmed(Codsoft Internship)
//Number Guessing game
#include<iostream>
#include<stdlib.h>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int Guessany=rand()%1000+1;
    int Numberany=0;
    int Time1=6;
    int c1=1;
    bool GuessanyCorrectly=0;
    system("Color 2");
    cout<<"Guess any Number Between 1 and 1000"<<endl;
    do
    {
    cout<<"Turns is Remaining: "<<Time1+1<<endl;
    system("Color 9");
    cout<<"Enter your Guess Number : ";
    cin>>Numberany;
    if(Numberany==Guessany)
    {
        system("Color 3");
        cout<<"Correct Number : "<<Guessany<<endl;
        c1=0;
        break;
    }
    else if(Numberany<Guessany)
    {
        system("Color 4");
        cout<<"Too Low"<<endl;
    }
    else if(Numberany>Guessany)
    {
        system("Color 5");
        cout<<"Too High"<<endl;
    }
}
while(c1==1 && Time1--);
if(!GuessanyCorrectly)
{
    system("Color 8");
    cout<<"Correct Solution : "<<Guessany<<endl;
}

}

