#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  string month1, month2, month3;
  double rainfall1, rainfall2, rainfall3;
  double avg;

  // TODO: Read three months and their rainfall values from standard input
cout << "give me months and rain: ";
cin >> month1 >> rainfall1;
cin >> month2 >> rainfall2;
cin >> month3 >> rainfall3;
  // TODO: Calculate the average rainfall
avg = (rainfall1 + rainfall2 + rainfall3) / 3;
  cout << fixed << setprecision(2);
  // TODO: Print the result in the required format
  cout << "average rainfall:" << month1 << ", " << month2 << ", " << month3 << " is " << avg << endl;
}
