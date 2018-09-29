#include <iostream>
#include <stdio.h>

using namespace std;

#define ZERO  0
#define ONE   1
#define TWO   2
#define THREE 3
#define FOUR  4
#define FIVE  5
#define SIX   6
#define SEVEN 7
#define EIGHT 8
#define NINE  9

int main(int argc, char const *argv[])
{
    char * str;
    cout<<"please input a string of number: ";

    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++)
    {
        int num = str[i] - 48;
        switch(num)
        {
            case ZERO:
                cout<<"ZERO ";
                break;

             case ONE:
                cout<<"ONE ";
                break;

            case TWO:
                cout<<"TWO ";
                break;

            case THREE:
                cout<<"THREE ";
                break;

            case FOUR:
                cout<<"FOUR ";
                break;

            case FIVE:
                cout<<"FIVE ";
                break;

            case SIX:
                cout<<"SIX ";
                break;

            case SEVEN:
                cout<<"SEVEN ";
                break;

            case EIGHT:
                cout<<"EIGHT ";
                break;

            case NINE:
                cout<<"NINE ";
                break;   
        }
    }
    
    return 0;
}
