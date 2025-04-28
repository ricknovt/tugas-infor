/*
         Tugas diskon
         Ricky Novantino X-E9/29⠀
*/

#include <iostream>
using namespace std;

int main(void) {
 
    double total, totalb;
    float diskon;
    cout << "Masukan total belanja : ";
    cin  >> total;
    
    if(total < 100000){
     diskon = 0;
    }
    else if(total >= 100000 && total < 250000){
     diskon = 0.10;
    }
    else if(total >= 250000 && total < 500000){
     diskon = 0.15;
    }
    else if(total >= 500000){
     diskon = 0.20;
    }

    totalb = total - (total * diskon);

    cout << "Total belanja : Rp" << total << endl;
    cout << "Diskon: " << (diskon * 100) << "%" << endl;
    cout << "Harga stlh diskon: Rp" << totalb << endl;

    return 0;     
}