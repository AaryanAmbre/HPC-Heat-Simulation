#include <cstddef>
#include <iostream>
#include <vector>
// First lets initlize Vector with 16 elements with value 0
/*
    Map row and column to 1D array index
    formula : index = row * columns + column

*/

constexpr std::size_t indexOf(std::size_t row, std::size_t column,
                              std::size_t columns) {
  return row * columns + column;
}
int main() {
  constexpr std::size_t rows = 4;
  constexpr std::size_t columns = 4;

  std::vector<double> temperature(16, 0);

  std::size_t index = indexOf(0, 0, columns);

  for (std::size_t row = 0; row < 1; ++row) {
    for (std::size_t column = 0; column < columns; ++column) {
      std::size_t i = indexOf(row, column, columns);
      temperature[i]=100;
    }
  }


  for (std::size_t row = 0; row < rows; ++row) {
    for (std::size_t column = 0; column < columns; ++column) {
      std::size_t i = indexOf(row, column, columns);
      std::cout << temperature[i] << "\t";
    }
    std::cout << '\n';
  }

  std::cout << std::endl;
  return 0;
}