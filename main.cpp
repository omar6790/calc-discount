//FCAI-CU(2021:2025)

#include <iostream>
//this programming work on calc the discount sometimes
using namespace std;
int main() {

    float meters = 0;
    float discount = 0;
    float price = 0 ;
    float percent_of_discount;
    string measure ;
    float price_of_meter;
    float min_meter_have_discount;
    //choice your unit of measurement and put it  in the next syntax

    cout << "ahlan ya user ya 7abibi, please enter the unit 0f measurement (kilo , meter , cm , gram , cm^3 , cm^2 , m^2 or m^3): "
         <<endl;
    cin >> measure;
    cout << "please enter num of " << measure << ": " << endl ;
    char real_price_is ;
    cin >> meters ;
    cout << "please enter " << measure << " price: " << endl;
    cin >> price_of_meter;
    cout << "please enter minimum " << measure << " you can have discount on it: " << endl;
    cin >> min_meter_have_discount;
    cout << "please enter percent of discount: ";
    cin >> percent_of_discount;

    if ( meters > min_meter_have_discount){
    discount = percent_of_discount * price_of_meter * (meters - min_meter_have_discount) ;
    price = (meters * price_of_meter) - discount ;
    cout << "real price is: " << endl;
    cout << meters * price_of_meter ;
    cout << "\nyou will bay ;): " << endl;
    cout << price ; }
    if (meters <= min_meter_have_discount){
        cout << meters * price_of_meter;
        cout << "\nu don't have discount \nsorry client" << endl;
    }
       return 0;
}
