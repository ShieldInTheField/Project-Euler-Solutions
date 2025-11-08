#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cctype>

using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::ifstream;
using std::cerr;

vector<int> read_digits(const string& file){
    vector<int> digits;
    ifstream infile(file);

    if (!infile) {
        cerr << "Error: could not open file for reading " << file << endl;
        return {};
    }
    char char_digit;
    while (infile.get(char_digit)) {
        if (isdigit(char_digit)) {
            digits.push_back(char_digit - '0');
        }

    }
    return digits;
}

int main(){
    vector<int> digits = read_digits("number.txt");

    long long max_product{1};

    for (size_t index=0; index<=digits.size()-13; index++){
        long long product=1;
        for (size_t offset=0; offset<13; offset++){
            product *= digits[offset + index];
            if (product == 0){
                break;
            }
        }
        if (product > max_product){
            max_product = product;
        }
    } 

    cout << max_product << endl;
    return 0;
}
