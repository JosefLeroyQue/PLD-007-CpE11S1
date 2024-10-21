#include <iostream>
using namespace std;

int main() 
{
    int responses[40] = {1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
                         1, 6, 3, 8, 6, 10, 3, 8, 2, 7,
                         6, 5, 7, 6, 8, 6, 7, 5, 6, 6,
                         5, 6, 7, 5, 6, 4, 8, 6, 8, 10};

    int counts[11] = {0}; 

    for (int i = 0; i < 40; i++) 
	{
        if (responses[i] >= 1 && responses[i] <= 10) 
		{
            counts[responses[i]]++;
        }
    }

    cout << "Response  |  Count" << endl;
    for (int i = 1; i <= 10; i++) 
	{
        cout << i << "         | " << counts[i] << endl;
    }
    return 0;
}
