#include <iostream>

using std::cout;
using std::endl;

int main() {

    int sum_of_abc{1000};
    int a{};
    int b{};
    int max_a{};

    for (int c=335; c<500; c++){
        max_a = (sum_of_abc - c) / 2;
        for (a=1; a<max_a; a++){
            b = sum_of_abc - a - c;
            if (a*a + b*b == c*c){
                cout << "Product abc: " << a * b * c << endl;
                break;
            }
        }
    }
}