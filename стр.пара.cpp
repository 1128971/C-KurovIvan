#include <stdio.h>
#include <math.h>
class StrangeNumber
{
public:
    double first, second;
    double multiply(double n)
    {
        double f, s, t;
        modf(first, &f); // в f обработанное first
        s = fabs(modf(second, &t)); // в s обработанное second
        return ((s + f) * n);
    }
} sn;
int main(void)
{
    sn.first = 3;
    sn.second = .1415;
    printf("%f\n", sn.multiply(1));
    return 0;
}