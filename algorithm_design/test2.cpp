#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    int k = 0;
    int i = 1;
    cout<<"please input a number: ";
    cin>>num;

    int a[100][100] = {0};

    for( ; i<=100; i++)
    {
        if(k == num)
            break;
        else if(k > num)
        {
            cout<<"num: "<<num<<" unable to form a matrix";
            return 0;
        }

        k += i;
    }

    if(i > 100)
    {
        cout<<"num: "<<num<<" is too large!"<<endl;
        return -1;
    }
    else
    {
        i--;
        cout<<"layer: "<<i<<"\nresult:"<<endl;
    }
    int m = 1;

    for(int p = 0; p<i; p++)
    {
        for(int q = 0; q<i-p; q++)
        {
            a[q+p][q] = m;
            m++;
        }
        // if(m > num) break;
    }

    for(int p = 0; p<i; p++)
    {
        for(int q = 0; q<=p; q++)
        {   
            // if(a[p][q] != 0)
                cout<<a[p][q]<<"\t";
        }
        cout<<endl;        
    }

    return 1;
}