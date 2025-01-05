#include <iostream>
using namespace std;
int main() {
// taking user inputs for price
float originalPrice;
cout<<"enter original price : ";
cin >> originalPrice;
float appliedDiscount = 0;
// compare original price with 5000 to apply the discount
if (originalPrice <= 5000 ) {
appliedDiscount = 5;
}else{
appliedDiscount = 10;
}
// applying discount process

float discount = originalPrice * (appliedDiscount/100);
float netPayable = originalPrice - discount;
cout << "net payable amount = " << netPayable << endl;
return 0;
}