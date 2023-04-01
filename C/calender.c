#include <stdio.h>
int main() {
  int d, m, year, k, l, n, o, yest, p, a, b, c, f, e;
  printf("Enter today's date (dd/mm/yy): ");
  scanf("%d/%d/%d", &d, &m, &year);
  k = year % 4;
  if ((d < 0 || d > 32) || (m <= 0 || m > 13)) {
    printf("Date is invalid\n");
  } else if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 ||
              m == 12) &&
             d > 31) {
    printf("Date is invalid\n");
  } else if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30) {
    printf("Date is invalid\n");
  } else if (m == 2 && d > 29 && k == 0) {
    printf("Date is invalid\n");
  } else if (m == 2 && d > 28 && k != 0) {
    printf("Date is invalid\n");
  } else if (m == 1 && d == 1 && year == 0) {
    printf("This is the start Date, so there is no yesterday. Tomorrow is "
           "2/1/0 \n");
  } else {
    if (k == 0) {
      if (d == 1) {
        if (m == 1) {
          k = 31;
          n = 12;
          o = year - 1;
          printf("Yesterday is %d/%d/%d", k, n, o);
        }
        else if (m == 2 || m == 4 || m == 6 || m == 8 || m == 9 || m == 11) {
          k = 31;
          n = m - 1;
          printf("Yesterday is %d/%d/%d", k, n, year);
        } else if (m == 3 || m == 5 || m == 7 || m == 10 || m == 12) {
          k = 29;
          n = m - 1;
          printf("Yesterday is %d/%d/%d", k, n, year);
        }
      } else {
        yest = d - 1;
        printf("Yesterday is %d/%d/%d", yest, m, year);
      }
    } else {
      if (d == 1) {
        if (m == 1) {
          k = 31;
          n = 12;
          o = year - 1;
          printf("Yesterday is %d/%d/%d", k, n, o);
        }
        if (m == 2 || m == 4 || m == 6 || m == 8 || m == 9 || m == 11) {
          k = 31;
          n = m - 1;
          printf("Yesterday is %d/%d/%d", k, n, year);
        }
        if (m == 3) {
          k = 28;
          n = m - 1;
          printf("Yesterday is %d/%d/%d", k, n, year);
        }
        if (m == 5 || m == 7 || m == 10 || m == 12) {
          k = 30;
          n = m - 1;
          printf("Yesterday is %d/%d/%d", k, n, year);
        }
      } else {
        yest = d - 1;
        printf("Yesterday is %d/%d/%d", yest, m, year);
      }
    }
    printf(".    ");
    if (k == 0) {
      if (d == 31) {
        if (m == 12) {
          a = 1;
          b = 1;
          c = year + 1;
          printf("Tomorrow is %d/%d/%d", a, b, c);
        } else if (m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 1)
        {
          a = 1;
          b = m + 1;
          printf("Tomorrow is %d/%d/%d", a, b, year);
        }
      } else if (d == 29) {
        if (m == 2) {
          a = 1;
          b = m + 1;
          printf("Tomorrow is %d/%d/%d", a, b, year);
        }
      } else if (d == 30) {
        if (m == 4 || m == 6 || m == 9 || m == 11) {
          a = 1;
          b = m + 1;
          printf("Tomorrow is %d/%d/%d", a, b, year);
        }
      } else {
        f = d + 1;
        printf("Tomorrow is %d/%d/%d", f, m, year);
      }
    } else {
      if (d == 31) {
        if (m == 12) {
          a = 1;
          b = 1;
          c = year + 1;
          printf("Tomorrow is %d/%d/%d", a, b, c);
        } else if (m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 1) {
          a = 1;
          b = m + 1;
          printf("Tomorrow is %d/%d/%d", a, b, year);
        }
      } else if (d == 28) {
        if (m == 2) {
          a = 1;
          b = m + 1;
          printf("Tomorrow is %d/%d/%d", a, b, year);
        }
      } else if (d == 30) {
        if (m == 4 || m == 6 || m == 9 || m == 11) {
          a = 1;
          b = m + 1;
          printf("Tomorrow is %d/%d/%d", a, b, year);
        }
      } else {
        f = d + 1;
        printf("Tomorrow is %d/%d/%d", f, m, year);
      }
    }
    printf("\n");
  }
}