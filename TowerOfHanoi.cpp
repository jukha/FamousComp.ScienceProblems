#include<iostream>
#include<cmath>
using namespace std;
void TOH(int n, char beg, char aux, char end)
{
	if(n == 1)
		cout << "move disk" << n <<" from " << beg << " to " << end << endl;
	else
	{
		TOH(n-1,beg,end,aux);
		cout << "move disk" << n <<" from " << beg << " to " << end << endl;
		TOH(n-1,aux,beg,end);
	}
}
int main()
{
		int x;
		cout << "Ente the total no of disks: ";
		cin >> x;
		TOH(x,'A','B','C');
		int y;
		y = (pow(2,x)-1);
		cout << "Total moves are: " << y ;
}
