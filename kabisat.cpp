/*
         Tugas hr kabisat
         Ricky Novantino X-E9/29
*/

#include <iostream>
using namespace std;

bool cekkabisat(int tahun) {
    
    // tahun kabisat bisa dibagi 4 namun tidak dg 100 namun bisa dibagi dg 400

    if( (tahun%4 == 0) && (tahun%100!=0) || (tahun%400==0) ) 
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void) {
 
      int tahun;
      int bulan;
   
      //Masukan tahun dan bulan
      cout << "Masukan tahun\n";
      cin  >> tahun;
      cout << "Masukan bulan\n";
      cin  >> bulan;
      
      
      //beberapa kasus untuk menentukan jml hari
      if(bulan == 2) 
      {
        if(cekkabisat(tahun))
        {
            cout << tahun << " - " << bulan << " ,hari berjumlah 29";
        }
        else
        {
            cout << tahun << " - " << bulan << " ,hari berjumlah 28";
        }
      }
      else if(bulan >= 1 && bulan <= 12)
      {
        if(bulan == 4 ||bulan == 6 ||bulan == 9 ||bulan == 11)
        {
            cout << tahun << " - " << bulan << " ,hari berjumlah 30";
        }
        else
        {
            cout << tahun << " - " << bulan << " ,hari berjumlah 31";
        }
      }
      else
      {
        cout << "bulan salah";
      }

     return 0;     
}