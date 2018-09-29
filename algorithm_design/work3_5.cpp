#include <iostream>

using namespace std;

#define N 100

int main(int argc, char const *argv[])
{
    int a[N][N] = {0};

    int n;

    cout<<"please input n: ";
    cin>>n;

    int k = 1;

    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            int i0, j0;
            i0 = i<=n/2?i:n+1-i;
            j0 = j<=n/2?j:n+1-j;

            a[i][j] = i0<j0?i0:j0;
        }
    }

    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
