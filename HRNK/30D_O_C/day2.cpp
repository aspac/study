#include <iostream>
#include <math.h>
using namespace std;

int main(){

  double mealCost, totalCost;
  int tipPercent, taxPercent;
  cin >> mealCost;
  cin >> tipPercent;
  cin >> taxPercent;

  totalCost = mealCost + (tipPercent/100.0)*mealCost +
              (taxPercent/100.0)*mealCost;

  cout.precision(0);
  cout << "The total meal cost is " << fixed << round(totalCost) << " dollars." << endl;

  return 0;
}
