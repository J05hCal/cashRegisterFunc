#include <iostream>
#include <cmath>
using namespace std;

<<<<<<< HEAD
// global variables needed 
int numItems;
int itemScan;
int i;
double itemCost;
double subtotal;
double taxPercent;
double tax;
double total;
double payment;
double change;
char response;

int main()
{
  int numItems;
  int itemScan;
  int i;
  double itemCost;
  double subtotal;
  double taxPercent;
  double tax;
  double total;
  double payment;
  double change;
  char response;
>>>>>>> cbe39b9f451f19f1a417c0397b185a0d558a3e5e

/*--------------------------------------MAIN PROGRAM BODY----------------------------------------*/

int main()
{
  // Sets the precise decimal points
  cout.setf(ios::showpoint);
  cout.setf(ios::fixed);
  cout.precision(2);

  // Adds the tax percent for the total cost. 
  taxPercent = 0.0775;

  subtotal;

  i = 0;

  cout << endl << "HOW MANY ITEMS?: ";
  cin >> numItems;

<<<<<<< HEAD
  do
  {
    cout << "ITEM SCANNING..." << endl << endl; //Scans items
    itemScan;
    cout << endl << endl << "ITEMSCAN COMPLETE." << endl;
    return 0;
  }
  while(i < numItems)
  {
    cout << "PLEASE ENTER THE COST OF EACH ITEM: ";
    cin >> itemCost;
    i++;
  };
  cout << numItems
  }
=======

>>>>>>> cbe39b9f451f19f1a417c0397b185a0d558a3e5e
}  
