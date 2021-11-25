#include "common.hpp"

void compute_lu(double const* a, double* l, double* u, std::size_t size);

int main()
{
  double* matrix_a = nullptr;
  double* matrix_l = nullptr;
  double* matrix_u = nullptr;

  int size = 4;

  matrix_a = (double*)malloc(size * size * sizeof(double));
  matrix_l = (double*)malloc(size * size * sizeof(double));
  matrix_u = (double*)malloc(size * size * sizeof(double));

  random_matrix(matrix_a, size, 0, 10);
  eye(matrix_l, size);
  eye(matrix_u, size);

  print_matrix("A", matrix_a, size);
  print_matrix("L", matrix_l, size);
  print_matrix("U", matrix_u, size);

  compute_lu(matrix_a, matrix_l, matrix_u, size);

  print_matrix("A", matrix_a, size);
  print_matrix("L", matrix_l, size);
  print_matrix("U", matrix_u, size);

  free(matrix_a);
  free(matrix_l);
  free(matrix_u);
  return EXIT_SUCCESS;
}
