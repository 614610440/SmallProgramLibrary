#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int A, B, C, D, E;

    for(A=1; A<=5; A++)
    {
        for(B=1; B<=5; B++)
        {
            if(A != B)
            for(C=1; C<=5; C++)
            {
                if(A != C && B != C)
                for(D=1; D<=5; D++)
                {
                    if(A != D && B != D && C != D)
                    {
                        E = 15 - A - B - C - D;
                        if((B==3) ^ (C==5))  // A said
                        {
                            if((D==2) ^ (E==4)) // B said
                            {
                                if((B==1) ^ (E==4)) // C said
                                {
                                    if((C==1) ^ (B==2)) // D said
                                    {
                                        if((D==2) ^ (A==3)) // E said
                                        {
                                            cout<<"A: "<<A<<endl;
                                            cout<<"B: "<<B<<endl;
                                            cout<<"C: "<<C<<endl;
                                            cout<<"D: "<<D<<endl;
                                            cout<<"E: "<<E<<endl;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
