#include    <iostream>
using namespace std;

int main()
{
   
   int N, i, j;
   cin >> N; 
     for (i = 1; i <= N; i++){
      for (j=1; j <= i; j++){
      cout << (char) ('A' + j - 1) << " ";
      }
      cout << endl;
   }
   return(0);
}
