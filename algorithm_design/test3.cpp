#include <iostream>

using namespace std;

void move(char pillar1, char pillar2)
{
    cout<<"move "<<pillar1<<" to "<<pillar2<<endl;
}

void hanoi(int layer, char A, char B, char C)
{
    if(layer == 1)
    {
        move(A, C);
    }
    else
    {
        hanoi(layer-1, A, C, B);
        move(A, C);
        hanoi(layer-1, B, A, C);
    }
}

int main(int argc, char const *argv[])
{
    int layer;
    cout<<"please input the layer of the Tower of Hanoi: ";
    cin>>layer;
    hanoi(layer, 'A', 'B', 'C');
    return 0;
}
