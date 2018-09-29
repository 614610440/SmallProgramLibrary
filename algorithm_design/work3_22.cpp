#include <iostream>

#define MAXSIZE 100

using namespace std;

int main(int argc, char const *argv[])
{
    int a[MAXSIZE], b[MAXSIZE] = {0};
    int max_sit = 0;
    int size;

    cout<<"please input a string of positive integers(while <0 break): ";

    for(size=0; size<MAXSIZE; size++)
    {
        int i_q;
        cin>>i_q;
        if(i_q >= 0)
            a[size] = i_q;
        else
            break;
    }

    for(int i=0; i<size; i++)
    {
        for(int j=0; j<4; j++)
        {
            b[i] += a[(i+j+size)%size];
        }
    }

    for(int i=1; i<size; i++)
    {
        if(b[max_sit] < b[i]) max_sit = i;
    }

    for(int j=0; j<4; j++)
    {
        cout<<a[(max_sit+j+size)%size]<<"\t";
    }
    return 0;
}
