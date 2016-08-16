#include <iostream>
#include <vector>

int main(int argc, const char * argv[]) {
    unsigned long long int colors, marbles, sum1(1), sum2(1), sum3(1);
    std::cout << "How many marbles are there: ";
    std::cin >> marbles;
    std::cout << "How many colors are there: ";
    std::cin >> colors;
    if (colors > marbles)
    {
        std::cout << "There is no way to have at least one marble of each color\n";
    }
    else if (colors == marbles)
    {
        std::cout << "There is 1 way to select that\n";
    }
    else
    {
        for(unsigned long long int i = (marbles - 1); i > 0; i--)
        {
            sum1 *= i;
        }
            for(unsigned long long int j = (marbles - 1 - colors); j > 0; j--)
            {
                sum2 *= j;
            }
                for (unsigned long long int k = colors; k > 0; k--)
                {
                    sum3 *=k;
                }
        sum3 = sum2 * sum3;
        std::cout << "There are " << sum1/sum3 << " ways to select that\n";
    }


    return 0;
}
