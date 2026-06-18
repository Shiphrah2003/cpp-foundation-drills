#include <iostream>
#include <string>

using namespace std;
 
int main () {
   double exchangeratedollars = 1751;
   double exchangerate = 1900;

    double amountinKwacha;

    cout << "enter amount in kwacha" << endl;
    cin >> amountinKwacha;
    
    
    double AmountinDollas = (amountinKwacha / exchangeratedollars) * 1;
    double AmountinCanadianDollars = ( amountinKwacha / exchangerate) * 1;

    cout <<"AmountinCanadianDollas:"<< AmountinCanadianDollars << endl;
    cout <<"AmountinDollas:" << AmountinDollas << endl;

    return 0;
};