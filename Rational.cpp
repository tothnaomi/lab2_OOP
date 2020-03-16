#include <iostream>
#include <cstdlib>
#include "Rational.h"

int addFractions(float &result_rational)
{
        int num1, num2, den1, den2;
        float NUM_result, DEN_result;
        std::cout << std::endl;
        std::cout << "The numerator of the first fraction:";
        std::cin >> num1;
        std::cout << "The denominator of the first fraction: ";
        std::cin >> den1;
        std::cout << "The numerator of the second fraction: ";
        std::cin >> num2;
        std::cout << "The denominator of the second fraction: ";
        std::cin >> den2;
        std::cout << "-------------------------------------------\n\n\n";

        NUM_result = float((num1 * den2) + (num2 * den1));
        DEN_result = float(den1 * den2);


        if (NUM_result == DEN_result)
        {
            result_rational = 1; //checks if the numerator and denominator are equal and prints 1 if true
            return result_rational;
        }
        else if (NUM_result != DEN_result)
        {
            result_rational = float(NUM_result / DEN_result);
            return result_rational;

        }
        return 0;
        
}

int subFractions(float& result_rational)
{
        int num1, num2, den1, den2;
        float   NUM_result, DEN_result;

        std::cout << std::endl;
        std::cout << "The numerator of the first fraction:";
        std::cin >> num1;
        std::cout << "The denominator of the first fraction: ";
        std::cin >> den1;
        std::cout << "The numerator of the second fraction: ";
        std::cin >> num2;
        std::cout << "The denominator of the second fraction: ";
        std::cin >> den2;
        std::cout << "-------------------------------------------\n\n\n";

        NUM_result = float((num1 * den2) - (num2 * den1));
        DEN_result = float(den1 * den2);

        if (NUM_result == DEN_result)
        {
            result_rational = 1; //checks if the numerator and denominator are equal and prints 1 if true
            return result_rational;
        }
        else if (NUM_result != DEN_result)
        {
            result_rational = float(NUM_result / DEN_result);
            return result_rational;

        }
        return 0;
}

int multiplyFractions(float& result_rational)
{
        int num1, num2, den1, den2;
        float NUM_result, DEN_result;

        std::cout << std::endl;
        std::cout << "The numerator of the first fraction:";
        std::cin >> num1;
        std::cout << "The denominator of the first fraction: ";
        std::cin >> den1;
        std::cout << "The numerator of the second fraction: ";
        std::cin >> num2;
        std::cout << "The denominator of the second fraction: ";
        std::cin >> den2;
        std::cout << "-------------------------------------------\n\n\n";

        NUM_result = float(num1 * num2);
        DEN_result = float(den1 * den2);

        if (NUM_result == DEN_result)
        { 
            result_rational = 1; //checks if the numerator and denominator are equal and prints 1 if true
            return result_rational;
        }
        else if (NUM_result != DEN_result)
        {
            result_rational = float(NUM_result / DEN_result);
            return result_rational;

        }
        return 0;
 
}

int divideFractions(float& result_rational)
{
        int num1, num2, den1, den2;
        float NUM_result, DEN_result;

        std::cout << std::endl;
        std::cout << "The numerator of the first fraction:";
        std::cin >> num1;
        std::cout << "The denominator of the first fraction: ";
        std::cin >> den1;
        std::cout << "The numerator of the second fraction: ";
        std::cin >> num2;
        std::cout << "The denominator of the second fraction: ";
        std::cin >> den2;
        std::cout << "-------------------------------------------\n\n\n";

        NUM_result = float(num1 * den2);
        DEN_result = float(den1 * num2);

        if (NUM_result == DEN_result)
        {
            result_rational = 1; //checks if the numerator and denominator are equal and prints 1 if true
            return result_rational;
        }
        else if (NUM_result != DEN_result)
        {
            result_rational = float(NUM_result / DEN_result);
            return result_rational;
        }
        return 0;
}

