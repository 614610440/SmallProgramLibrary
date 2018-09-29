#include <iostream>

using namespace std;

void copyData(bool zu1[], bool zu2[], int size = 9)
{
    for(int i=0; i<size; i++)
    {
        zu2[i] = zu1[i];
    }
}


int main(int argc, char const *argv[])
{
    bool a[9] = {0};
    bool b[9];

    for(int i=0; i<9; i++)
    {
        b[i] = true;
    }

    copyData(b, a);

    for(int i=0; i<9; i++)
    {
        if(a[i]) cout<<"a";
        if(b[i]) cout<<"b";
    }

    for(int i=0; i<9; i++)
    {
        b[i] = false;
    }

    copyData(a, b);

    for(int i=0; i<9; i++)
    {
        if(a[i]) cout<<"a";
        if(b[i]) cout<<"b";
    }

    // for(int i=0; i<9; i++)
    // {
    //     a[i] = true;
    // }
    return 0;
}
