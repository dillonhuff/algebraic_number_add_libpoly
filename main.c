// Compile with clang main.c -lpoly

#include <poly/polynomial.h>

int main() {

  
  lp_dyadic_rational_t d_one;
  lp_dyadic_rational_construct_from_int(&d_one, 1, 0);

  lp_dyadic_rational_t d_two;
  lp_dyadic_rational_construct_from_int(&d_two, 2, 0);

  printf("Dyadic rationals\n");

  lp_dyadic_rational_print(&d_one, stdout);
  printf("\n");

  lp_dyadic_rational_print(&d_two, stdout);
  printf("\n");


  lp_algebraic_number_t a_one;
  lp_algebraic_number_construct_from_dyadic_rational(&a_one, &d_one);

  lp_algebraic_number_t a_two;
  lp_algebraic_number_construct_from_dyadic_rational(&a_two, &d_two);

  printf("Algebraic numbers\n");

  lp_algebraic_number_print(&a_one, stdout);
  printf("\n");
  
  lp_algebraic_number_print(&a_two, stdout);
  printf("\n");

  lp_algebraic_number_t a_three;
  lp_algebraic_number_add(&a_three, &a_one, &a_two);

  lp_algebraic_number_print(&a_three, stdout);
  printf("\n");
  
  lp_algebraic_number_destruct(&a_one);
  lp_algebraic_number_destruct(&a_two);
  lp_algebraic_number_destruct(&a_three);

  lp_dyadic_rational_destruct(&d_one);
  lp_dyadic_rational_destruct(&d_two);

}
