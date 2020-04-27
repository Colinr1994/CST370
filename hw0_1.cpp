/* Title: hw0_1.cpp
 * Abstract: This program reads the user's input data and
 *           conducts sum and difference operations, depending
 *           on the command key.
 * Author: Colin Reed
 * ID: 004012715
 * Date: 04/27/2020
 */

#include <iostream>
using namespace std;

int main(){
   int cont, in1, in2;


   do {
     cin >> cont;
     if( cont == 1 ){
       cin >> in1;
       cin >> in2;
        cout<<in1+in2<<endl;
     }
     else if( cont == 2){
       cin >> in1;
       cin >> in2;
        cout<<in1-in2<<endl;
     }
   } while(cont != 9);

   return 0;
}
