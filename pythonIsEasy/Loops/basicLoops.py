def isPrime(n: int) -> bool:
    if n == 1:
        return False
    for i in range(2, n // 2 + 1):
        if n % i == 0:
            return False
    return True


def fizzBuzz():
    for i in range(1, 101):
        toBePrinted = str()
        if i % 5 == 0 and i % 3 == 0:
            toBePrinted = "FizzBuzz"
        elif i % 5 == 0:
            toBePrinted = "Buzz"
        elif i % 3 == 0:
            toBePrinted = "Fizz"
        else:
            toBePrinted = str(i)
        if isPrime(i):
            toBePrinted += " prime"
        
        print(toBePrinted)


if __name__ == '__main__':
    fizzBuzz()