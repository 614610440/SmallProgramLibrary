#include <iostream>

using namespace std;

void copyData(bool zu1[], bool zu2[], int size = 9)
{
    for(int i=0; i<size; i++)
    {
        zu2[i] = zu1[i];
    }
}

void function(int num[], bool have_use[], int n)
{
    if(n < 9)
    {
        for(int i = 1; i<=9; i++)
        {
            if(!have_use[i-1])
            {
                have_use[i-1] = true;
                num[n] = i;
                bool use_backup[9];

                copyData(have_use, use_backup);
                function(num, have_use, n+1);
                copyData(use_backup, have_use);
                have_use[i-1] = false;
            }

        }
    }
    else
    {
        int a = num[0] * 10 + num[1];
        int b = num[2] * 100 + num[3] * 10 + num[4];
        int c = num[5] * 1000 + num[6] * 100 + num[7] * 10 + num[8];

        if(a*b == c)
        {
            cout<<num[0]<<num[1]<<"x"
                <<num[2]<<num[3]<<num[4]<<"="
                <<num[5]<<num[6]<<num[7]<<num[8]<<endl;
        }
    }
}

int main(int argc, char const *argv[])
{
    bool have_use[9] = {0};
    int num[9];

    function(num, have_use, 0);
    
    return 0;
}
