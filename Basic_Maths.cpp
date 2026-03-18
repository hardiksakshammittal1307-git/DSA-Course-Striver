#include <bits/stdc++.h>
using namespace std;
int countdigits(int n)
{
    int count = 0;
    // while(n>0){
    // int lastdigit=n%10;
    // count++;
    // n=n/10;
    // another apparoch
    count = int(log10(n) + 1);
    // }
    return count;
}
int reveresenumber(int n)
{
    int revno = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        revno = (revno * 10) + lastdigit;
        n = n / 10;
    }
    return revno;
}
void chkpalindrome(int n)
{
    if (n == reveresenumber(n))
        cout << "palindrome";
    else
        cout << "not palindrome";
}
void chkarmstrong(int n)
{
    int sum = 0;
    int duplicate = n;
    while (n > 0)
    {
        int ld = n % 10;
        sum = sum + (ld * ld * ld);
        n = n / 10;
    }
    if (sum == duplicate)
        cout << "armstrong";
    else
        cout << "not armstrong";
}
void finddivisors(int n)
{
    vector<int> ls;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ls.push_back(i);
            if ((n / i) != i)
            {
                ls.push_back(n / i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for (auto it : ls)
    {
        cout << it << " ";
    }
}
void chk_prime(int n)
{
    int count = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            if ((n / i) != i)
            {
                count++;
            }
        }
    }
    if (count == 2)
    {
        cout << "prime" << endl;
    }
    else
    {
        cout << "not prime" << endl;
    }
}
int chk_GCD(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == 0)
    {
        return b;
    }
    else
    {
        return a;
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << chk_GCD(a, b) << endl;
    return 0;
}