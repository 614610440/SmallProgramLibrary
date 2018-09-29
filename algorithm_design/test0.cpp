#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
   int *a = (int *)malloc(sizeof(int) * 4);
   int *b = (int *)malloc(sizeof(int) * 3);

    for(int i = 0; i<4; i++)
    {
        a[i] = i+1;
    }

    for(int i = 0; i<3; i++)
    {
        b[i] = i+5;
    }
    int size = 0;

    for(int i = 0; a[i] != '\0'; i++)
    {
        cout<<a[i];
        cout<<"&";
        size = i;
    }
    cout<<endl;
    cout<<"size: "<<size<<endl;

    for(int i = 0; b[i]!='\0'; i++)
    {
        cout<<b[i];
        cout<<"~";
        size = i;
    }
    cout<<endl;
    cout<<"size: "<<size<<endl;

    *a = *b;

    for(int i = 0; a[i] != '\0'; i++)
    {
        cout<<a[i];
    }
    cout<<endl;
    return 0;
}
