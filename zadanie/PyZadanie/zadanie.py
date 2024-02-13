def sum_of_digits(number):
    """Функция для вычисления суммы цифр числа."""
    return sum(int(digit) for digit in str(number))

def main():
    max_sum = 0
    max_number = None
    
    while True:
        try:
            num = int(input("Введите целое число (для завершения введите 0): "))
            if num == 0:
                break
            digit_sum = sum_of_digits(num)
            if digit_sum > max_sum:
                max_sum = digit_sum
                max_number = num
        except ValueError:
            print("Ошибка: Введите целое число.")
    
    if max_number is not None:
        print(f"Число с максимальной суммой цифр: {max_number}, сумма цифр: {max_sum}")
    else:
        print("Вы не ввели ни одного числа, кроме нуля.")

if __name__ == "__main__":
    main()
