using System;

namespace MaxDigitSum
{
    class Program
    {
        static int SumOfDigits(int number)
        {
            int sum = 0;
            while (number != 0)
            {
                sum += number % 10;
                number /= 10;
            }
            return sum;
        }

        static void Main(string[] args)
        {
            int maxSum = 0;
            int maxNumber = 0;

            while (true)
            {
                Console.Write("Введите целое число (для завершения введите 0): ");
                if (!int.TryParse(Console.ReadLine(), out int number))
                {
                    Console.WriteLine("Ошибка: Введите целое число.");
                    continue;
                }

                if (number == 0)
                    break;

                int digitSum = SumOfDigits(number);
                if (digitSum > maxSum)
                {
                    maxSum = digitSum;
                    maxNumber = number;
                }
            }

            if (maxNumber != 0)
            {
                Console.WriteLine($"Число с максимальной суммой цифр: {maxNumber}, сумма цифр: {maxSum}");
            }
            else
            {
                Console.WriteLine("Вы не ввели ни одного числа, кроме нуля.");
            }

            Console.WriteLine("Нажмите любую клавишу для выхода...");
            Console.ReadKey();
        }
    }
}
