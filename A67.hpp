//

#include <iomanip>
#include <iostream>
using namespace std;
void swap (int& n1, int& n2){
    int temp = 0;
  temp = n1;
  //cout << temp << endl;
  n1 = n2;
  //cout << n1 << endl;
  n2 = temp;
 // cout << n2;

}

void swap (int& n1, int& n2, int& n3) {
     int temp1 = 0;
  temp1 = n3;
     n3 = n2;
     n2 = n1;
     n1 = temp1;
    
}
void swap (int& n1, int& n2, int& n3, int& n4) {
   int temp2 = 0;
   temp2 = n1;
   n1 = n2;
   n2 = n3;
   n3 = n4;
   n4 = temp2;
}

