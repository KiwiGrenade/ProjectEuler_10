#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long sum=0;
    for (long i=2;i<2000000;i++)
    {
        for (long x=2; x*x<=i; x++)
        {
            if(i % x == 0)
            {
                break;
            }
            else if (x+1 > sqrt(i))
            {
                sum+=i;
            }
        }
    }
    cout << sum+3+2;//becouse the algorithm above skipps the 2 and 3, we need
    //to add them to the sum
    return 0;
}
