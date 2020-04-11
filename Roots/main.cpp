#include <iostream>
#include <math.h>
#include <limits>

bool is_equal(double x, double y)
{
    return std::fabs(x - y) < std::numeric_limits<double>::epsilon();
}

int main(int argc, char *argv[])
{
    double a, b, c, x1, x2, d;
    std::cout << "Enter a:" << std::endl;
    std::cin >> a;
    std::cout << "Enter b:" << std::endl;
    std::cin >> b;
    std::cout << "Enter c:" << std::endl;
    std::cin >> c;
    d = b * b - 4 * a * c;
    if (d < 0)
        std::cout << "The equation has no roots." << std::endl;
    else
    {
        if(is_equal(d, 0))
        {
            x1 = x2 = (-b + sqrt(d))/(2 * a);
            std::cout << "The equation has one root: " << x1 << std::endl;
        }
        else
        {
            x1 = (-b + sqrt(d))/(2 * a);
            x2 = (-b - sqrt(d))/(2 * a);
            std::cout << "The equation has two roots:" << std::endl <<
                         "x1 = " << x1 << std::endl <<
                         "x2 = " << x2 << std::endl;
        }
    }
    std::cin >> a;
    return 0;
}
