/*
    A prime number (or a prime) is a natural number greater than 1 that has no positive divisors other than 1
    and itself. A natural number greater than 1 that is not a prime number is called a composite number.
    Two integers are relatively prime (or coprime) if there is no integer greater than one that divides them
    both (that is, their greatest common divisor is one). For example, 12 and 13 are relatively prime, but 12 and 14 are not.
*/

#include <iostream>
using namespace std;

int main(){

    int n, m;

    cin >> n >> m;

    while(n != m)
    {
        if(n > m)
            n -= m;
        else
            m -= n;
    }

    if (n==1)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
