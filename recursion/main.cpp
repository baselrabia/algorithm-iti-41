#include <iostream>

using namespace std;

int factorial(int x){
    if(x <= 1){
        return 1;
    }

    return x*factorial(x-1);
}

int power(int x, int y){

    if(y == 0){
        return 1;
    }

    return x * power(x,y-1);
}

int fib(int x){

    if(x == 0) return 0;
    if(x == 1) return 1;

    return fib(x-1)+fib(x-2);
}


int main()
{
    cout << "Hello world!" << endl;
    int n = 4;
    int x = factorial(n);
    int p = 3;
    int powerx = power(n,p);
    int f = fib(n);

    cout << "factorial (" <<n<<") : "<< x << endl;
    cout << "power (" <<n<< ")" <<p<<" : "<< powerx << endl;
    cout << "fib (" <<n<<") : "<< f << endl;

    return 0;
}
