#include <math.h>
#include <stdio.h>

int main() {
  int p = 21500;
  double r;
    if (scanf("%lf", &r) == 1) {
      double v = (4. / 3.) * M_PI * pow(r, 3);
      double m = p * v;
      double rounded_mass = round(m);
      printf("%.0lf", rounded_mass);
    } else {
      printf("n/a");
      return 0;
    }
}