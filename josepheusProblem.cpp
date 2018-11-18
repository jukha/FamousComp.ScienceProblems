#include<iostream>
#include<cmath>
using namespace std; 
int main()
{
	int size;
   cout << "Enter size of the circular linked list: ";
   cin >> size;
   int y = pow(2,(floor(log2(size)))); //to find the nearest power of 2 to an integer
   int winner = 2*(size-y)+1; //general formula to find the winning position
   cout << "Winner is at position: " << winner << endl;
   
   

}

