#include <stdio.h>

int main() {

  int days, years, days_in_years, remaining_days, months, days_in_months, remaining_days_months;

  printf("Enter your day: ");
  scanf("%d", &days);
  
  years = days / 365;
  days_in_years = (years * 365);
  remaining_days = days - days_in_years;

  months = remaining_days / 30;
  days_in_months = (months * 30);
  remaining_days_months = remaining_days - days_in_months;

  

  printf("Total days is %d.\n years %d.\n days in years %d.\n remaining days %d.\n months %d.\n days in months %d.\n remaining days in months %d.", days, years, days_in_years, remaining_days, months, days_in_months, remaining_days_months);
  
  return 0;
}
