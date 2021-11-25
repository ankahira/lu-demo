#include "common.hpp"
#include <cstddef>

void compute_lu(double const* a, double* l, double* u, std::size_t size)
{
  for (std::size_t row = 0; row < size; ++row) {
    for (std::size_t column = 0; column < size; ++column) {
      std::size_t index = row_column_to_index(row, column, size);
      l[index] = a[index] - 1;
      u[index] = a[index] + 1;
    }
  }
}
