#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double x_start, x_end, x_step;

    std::cout << "X_start = "; 
    std::cin >> x_start;
    std::cout << "x_end = "; 
    std::cin >> x_end;
    std::cout << "x_step = "; 
    std::cin >> x_step;

    double a, b, c;
	std::cout << "a = ";
    std::cin >> a;
	std::cout << "b = "; 
    std::cin >> b;
    std::cout << "c = ";
    std::cin >> c;

    std::cout << std::fixed;
    std::cout << "---------------------------" << std::endl;
    std::cout << "|" << std::setw(5) << "x" << "     |"
        << std::setw(7) << "F" << "       |" << std::endl;
    std::cout << "---------------------------" << std::endl;

    for (double x = x_start; x < x_end; x += x_step) {
        double F;
        if (x < 5 &&  b != 0) {
            F = a * std::pow(x + 7, 2) - b;
        }
        else if (x > 5 && b == 0) {
            F = (x - c * a) / (a * x);
        }
        else {
			F = x / c;
        }

        std::cout << "|" << std::setw(7) << std::setprecision(2) << x
            << "   |" << std::setw(10) << std::setprecision(3) << F
            << "    |" << std::endl;
    }
    std::cout << "---------------------------" << std::endl;

    return 0;
}