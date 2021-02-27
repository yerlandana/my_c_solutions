#include <iostream>
#include <vector>
using namespace std;
using Matrix = std::vector<std::vector<int>>;

int main() {
    int n;
    cin>>n;
    int matrix[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>matrix[i][j];
        }
    }
    // Shortcut for the width and height of the matrix
    const size_t width{ matrix.at(0).size() };
    const size_t height{ matrix.size() };

    // Set start row and start column
    size_t startRow{ height-1 };
    size_t startColumn{ 0 };
    size_t column{};

    // for all possible start positions
    do {
        // set the row and column values to the start values
        size_t row{ startRow };
        column = startColumn;

        //Now go through the diagonal
        do {
            std::cout << matrix[row][column] << ' ';

            // Set next position in the diagonal
            ++row;      // Go one row down
            ++column;   // Go one column to the right

          // As long as we do not cross the border
        } while ((row < height) && (column < width));

        std::cout << '\n';

        // Calculate new start row and start column
        // If possible
        if (startRow > 0) {
            // Go up
           ++startRow;
        }
        else {
            // Else go right
            --startColumn;
        }
    } while (startColumn < width);

    return 0;
}