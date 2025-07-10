#include <iostream>
using namespace std;

void odd_even(int n)
{
    if (n % 2 == 0)
    {
        cout << n << " is a Even Number." << endl;
    }
    else
    {
        cout << n << " is a Odd Number." << endl;
    }
}

int find_lcm(int a, int b)
{
    int max;
    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }

    while (true)
    {
        if (max % a == 0 and max % b == 0)
        {
            return max;
            break;
        }
        else
        {
            max++;
        }
    }
}

int find_factorial(int x)
{
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {

        return x * find_factorial(x - 1);
    }
}

int find_gcd(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

bool is_prime(int m)
{
    if (m <= 1)
    {
        return false;
    }

    for (int i = 2; i * i <= m; i++)
    {
        if (m % i == 0)
        {
            return false;
        }
    }
    return true;
}


int main()
{

    bool condition = true;

    while (condition)
    {
        cout << "=== MATH MINI LIBARARY ===" << endl;
        cout << "1. Find Odd/Even" << endl;
        cout << "2. Find LCM" << endl;
        cout << "3. Calculate Factorial" << endl;
        cout << "4. Find GCD" << endl;
        cout << "5. Prime number check" << endl;
        cout << "6. EXIT" << endl;

        int user_choice;
        cout << "Enter your choice : ";
        cin >> user_choice;
        switch (user_choice)
        {
        case 1:
            int n;
            cout << "Enter a number : ";
            cin >> n;

            odd_even(n);
            break;

        case 2:
            int a, b;
            cout << "Enter two numbers : ";
            cin >> a >> b;

            cout << find_lcm(a, b) << " is LCM of " << a << " and " << b << endl;
            break;

        case 3:
            int x;
            cout << "Enter a number : ";
            cin >> x;
            cout << "The Factorial of " << x << " is " << find_factorial(x) << endl;
            break;

        case 4:
            int p, q;
            cout << "Enter two numbers : ";
            cin >> p >> q;
            cout << "The GCD of numbers  " << p << " and " << q << " is : " << find_gcd(p, q) << endl;
            break;

        case 5:
            int m;
            cout << "Enter a number : ";
            cin >> m;

            if (is_prime(m))
            {
                cout << m << " is a Prime Number." << endl;
            }
            else
            {
                cout << m << " is not a Prime Number." << endl;
            }
            break;

        case 6:
            condition = false;
            break;

        default:
            cout << "Invalid choice , Please choose from above" << endl;
            break;
        }

        char ch;
        cout<<"Do you want to continue ? (y/n) : ";
        cin>>ch;

        if(ch == 'n' || ch == 'N'){
            cout << "Thank you for using the Math Mini Library. Have a great day!" << endl;
            condition = false;
            
        }
    }

    return 0;
}