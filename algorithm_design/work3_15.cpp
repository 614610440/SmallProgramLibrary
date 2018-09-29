#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int A, B, C, X, Y, Z;

    bool find = false;

    for(C=1; C<=3; C++)
    {
        for(X=1; X<=3; X++)
        {
            if(C != X)
            for(A=1; A<=3; A++)
            {
                if(A!=X && A!=C)
                {
                    Y = C;
                    Z = 6 - X - Y;
                    B = 6 - A - C;
                    find = true;
                    break;
                }

            }
            if(find) break;
        }
        if(find) break;
    }

    for(int i =1; i<=3; i++)
    {
        if(i == A) cout<<"A VS ";
        if(i == B) cout<<"B VS ";
        if(i == C) cout<<"C VS ";
        if(i == X) cout<<"X";
        if(i == Y) cout<<"Y";
        if(i == Z) cout<<"Z";
        cout<<endl;
    }

    return 0;
}
