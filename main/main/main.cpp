#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    //    main function of the program

    int n;                        //variable initialization
    cout << "ENTER A NUMBER : ";
    cin >> n;

    int count = 0 ;               //variable to count set bits

    while (n > 0)
    {
        if (n % 2 == 1)
        {
            count++;
        }
        n = n / 2;
    }

    cout << "\n\n";

    cout << "THE NUMBER OF SET BITS ARE : " << count;

    return 0;
}
