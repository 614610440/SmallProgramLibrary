#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    bool cards[52] = {0};       //fasle face up

    int sit = 2;
    int multiple = 2;

    for(int times=0; times<104; times++)
    {
        cards[sit-1] = !cards[sit-1];
        sit += multiple;

        if(sit > 104)
        {
            multiple++;
            sit = multiple;
        }
    }

    cout<<"sits: ";

    for(int i=0; i<52; i++)
    {
        if(!cards[i]) cout<<"\t"<<i+1;
    }

    cout<<endl;
    return 0;
}
