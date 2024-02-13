#include <iostream>
#include <limits>

int sumOfDigits(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main() {
    setlocale(LC_ALL, "Russian.UTF-8");

    int maxSum = 0;
    int maxNumber = 0;

    while (true) {
        std::cout << "Введите целое число (для завершения введите 0): ";
        int number;
        if (!(std::cin >> number)) {
            std::cerr << "Ошибка: Введите целое число." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        if (number == 0)
            break;

        int digitSum = sumOfDigits(number);
        if (digitSum > maxSum) {
            maxSum = digitSum;
            maxNumber = number;
        }
    }

    if (maxNumber != 0) {
        std::cout << "Число с максимальной суммой цифр: " << maxNumber << ", сумма цифр: " << maxSum << std::endl;
    } else {
        std::cout << "Вы не ввели ни одного числа, кроме нуля." << std::endl;
    }

    std::cout << "Нажмите Enter для выхода...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();

    return 0;
}