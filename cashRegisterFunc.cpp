#include <iostream>

#include <cmath>

using namespace std;

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

  
  while(i < numItems)
  {

    cout << "PLEASE ENTER THE COST OF EACH ITEM: ";

    cin >> itemCost;

    i++;
  };

  cout << numItems; 
    
  }