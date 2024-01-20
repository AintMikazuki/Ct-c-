#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int x, y, c=5;

    for (x=1; x<=c; x++)
    {
        for (y=1; y<=x; y++)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }

    for (x =c-1; x>=1; x--)
    {
        for (y =1; y <=x; y++)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return EXIT_SUCCESS;
}