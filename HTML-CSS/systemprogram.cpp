#include <iostream>
using namespace std;

int isPositive(int x)
{
    return (!x) ^ (!(x >> 31)); 
    /* !x để kiểm tra xem x có bằng 0 hay không, !(x>>31) để xét x âm hay dương
    sau đó dùng phép XOR để kiểm tra xem x có là số dương hay không.
    */
}

int main() {
    cout << !isPositive(0);
}