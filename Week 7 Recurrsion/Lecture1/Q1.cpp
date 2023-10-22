#include <iostream>
using namespace std;

int factorial(int n){
  // base condition 
  if(n==1){
    return 1;
  }

  // Recursive relation 
  int chotiProblem = factorial(n-1);
  int badiProblem = n * chotiProblem;

  return badiProblem;
}
int main() {
  int n = 5;
  int ans = factorial(n);
  cout << ans << endl;
}