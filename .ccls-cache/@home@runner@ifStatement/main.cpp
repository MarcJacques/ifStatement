#include <iostream>
using namespace std;

int main() 
{
  int x, y;
  cin >> x >> y;

  if (x + y > 100) {
    x -= 5;
    y -= 10;
  }
  
  cout << x << " " << y << endl;
    return 0;
}