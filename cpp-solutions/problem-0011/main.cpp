#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <chrono>


using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::ifstream;
using std::getline;
using std::stoi;
using std::max;
using std::chrono::high_resolution_clock;
using std::chrono::duration_cast;
using std::chrono::microseconds;

vector<vector<int>> read_grid(const string& filename);

vector<vector<int>> read_grid(const string& filename){
    vector<vector<int>> grid;

    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Error opening file: " << filename << endl;
        return grid;
    }

    string line;

    while (getline(file, line)) {
        vector<int> row;
        size_t pos = 0;
        while ((pos = line.find(' ')) != string::npos) {
            row.push_back(stoi(line.substr(0, pos)));
            line.erase(0, pos + 1);
        }
        row.push_back(stoi(line));
        grid.push_back(row);
    }
    file.close();
    return grid;
}

int main(){
    auto start_time = high_resolution_clock::now();

    vector<vector<int>> grid = read_grid("grid.txt");
    size_t max_product{0};
    const size_t N = grid.size();
    const size_t elements_size = 4;

    for (size_t row_counter = 0; row_counter < N-elements_size+1; row_counter++) {
        for (size_t col_counter = 0; col_counter < N-elements_size+1; col_counter++) {
            size_t horizontal_product{1};
            size_t vertical_product{1};
            size_t diagonal_product{1};
            size_t anti_diagonal_product{1};

            for (size_t i = 0; i < elements_size; i++) {
                horizontal_product *= grid[row_counter][col_counter + i];
                vertical_product *= grid[row_counter + i][col_counter];
                diagonal_product *= grid[row_counter + i][col_counter + i];
                anti_diagonal_product *= grid[row_counter + i][col_counter + elements_size - 1 - i];
            }

           max_product = max({max_product, horizontal_product, vertical_product, diagonal_product, anti_diagonal_product});
        }
    }
    cout << "Maximum product: " << max_product << endl;

    auto end_time = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end_time - start_time).count();
    cout << "Execution time: " << duration << " microseconds" << endl;

    return 0;
}