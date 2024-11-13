#include<iostream>
using namespace std;

struct bitManipulator
{
    unsigned int original, reversed;

    void printBinary(unsigned int num)
    {
        for (int i = 31; i >= 0; --i)
        {
            cout << ((num >> i) & 1);
        }
        cout << endl;
    }

    void reverseBit()
    {
        reversed = 0;
        unsigned int num = original;
        for (int i = 0; i < 32; ++i)
        {
            reversed = reversed << 1; 
            reversed = reversed | (num & 1); 
            num = num >> 1; 
        }
    }
};

int main()
{
    unsigned int num;
    bitManipulator bm;

    cout << "Enter an unsigned integer: ";
    cin >> num;

    bm.original = num;

    cout << "Original number in bits: ";
    bm.printBinary(bm.original);

    bm.reverseBit(); 

    cout << "Reversed number in bits: ";
    bm.printBinary(bm.reversed); 

    return 0;
}

