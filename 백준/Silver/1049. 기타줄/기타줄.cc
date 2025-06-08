#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int n, m, a, b, answer;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin >> n >> m;
  int package[m];
  int indiv[m];
  
  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    package[i] = a;
    indiv[i] = b;
  }
  sort(package, package + m); 
  sort(indiv, indiv + m); 

  int onlyPackage = ((n + 5) / 6) * package[0];
  int onlyIndiv = n * indiv[0];
  int mixed = (n / 6) * package[0] + (n % 6) * indiv[0];

  answer = min({onlyPackage, onlyIndiv, mixed});
  cout << answer << endl;
  return 0;
}