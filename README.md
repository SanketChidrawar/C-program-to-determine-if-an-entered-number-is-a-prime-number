# C-program-to-determine-if-an-entered-number-is-a-prime-number
This C program checks whether a user-entered number is a prime number and, if not, lists all its divisors.
🧮 Prime Number Checker in C
This program checks whether an entered number is prime and, if not, displays all of its divisors.

📜 Description
The program uses simple modular division to determine primality and stores any found divisors in an array.

✨ Features
✅ Checks if a number is prime.

📋 Lists all divisors for non-prime numbers.

🔧 Uses macros for clean and understandable code.



⚙️ How It Works
TakeInput() → Prompts user to enter a number.

IsPrime() → Checks divisibility and stores divisors in an array.

Ret_divisor_cnt() → Counts the number of divisors found.

PrintPrime() → Displays result and divisors (if applicable).

✅ Example
Enter the Number = 28
28 is not a prime Number! and is divisible by 2 4 7 14

Enter the Number = 13
13 is a prime Number!

📌 Notes
Only checks positive integers greater than 1.

Divisors exclude 1 and the number itself.

