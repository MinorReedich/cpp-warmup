// Name: Minor Reedich
// Date: 02/05/2021

#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
   int X, Y, N;
   cin >> X;
   cin >> Y;
   cin >> N;
   
   cout << endl;

   for (int i = 1; i <= N; i++)
   {
      if(i/X == double(i)/X && i/Y == double(i)/Y){
         cout << "FizzBuzz" << endl;
      }
      else if(i/X == double(i)/X){
         cout << "Fizz" << endl;
      }
      else if(i/Y == double(i)/Y){
         cout << "Buzz" << endl;
      }
      else {
         cout << i << endl;
      }
   }
}

