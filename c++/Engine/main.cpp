#include <iostream>
#include <string>

using namespace std;

int rotateLeft(int value, int amount)
{
    //four bit rotate left

    const int OVERFLOW = 0b10000;
        while (amount > 0)
        {
            value = value << 1;
            if (((value & OVERFLOW) == OVERFLOW))
            {
                value = value & 0b1111;  //remove overflow bit
                value = value | 0b0001;  //set the rightmost bit
    }
    amount--;
    }
    return value;
}


int main()
{
    int inValvesOpen{}, outValvesOpen{}, pistonUp{}, cylinderFire{};

    return 0;
}
