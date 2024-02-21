#include <iostream>
#include <cmath>
using namespace std;

int main()
{    
  int i;    
  i = 1;
  double tax;   
  
  //Automatically evaluates the total with tax
  double itemScan(int numItems, double costItem);
  {
    const double taxPercent = 0.0775; //7.75%
    double subtotal;
    subtotal = 0;
    cout << "ENTER AMOUNT OF ITEMS: \n";
    cin >> numItems;
    while (i <= numItems)
    {
      cout << "ENTER THE COST OF EACH ITEM#" << i <<": $";
      cin >> costItem;
      i++;
    }
    cout << endl << "SCANNING..." << itemScan() << endl;
    subtotal = costItem * numItems;
    cout << endl << "SCANNING COMPLETE\n";
    cout << endl << "SUBTOTAL: $" << subtotal << endl;
  
    tax = taxPercent * subtotal;
    total = subtotal + tax;
    cout << "FINAL TOTAL: $" << total << endl << endl;
    
    return(subtotal + subtotal * taxPercent);
  }
  cout.setf(ios::showpoint);
  cout.setf(ios::fixed);
  cout.precision(2);

  //different kinds of payments in one function
  double payment(char response, double change);
  {
    cout << "CASH OR CREDIT? ENTER 'C' FOR CASH OR 'T' FOR CREDIT: ";
    cin >> response;

    if (response == 'C' || response == 'c')
    {
        cout << endl << "CASH: $";
        cin >> payment;

        if (payment < total)
        {
            cout << endl << "WRONG AMOUNT, ENTER THE RIGHT AMOUNT OF CASH: $";
            cin >> payment;
        }
        change = payment - total;
        cout << "CHANGE: $" << change << endl;
    }
    else if (response == 'T' || response == 't')
    {
        cout << "CARD PAYMENT: $" << total << endl;
    }
    else
    {
        cout << "ERROR. INCORRECT SELECTION." << endl;
    }
  }
  return 0;
}
