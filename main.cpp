#include <iostream>
using namespace std;

int main()
{
  cout << "Array of intergers" << endl;
  cout << "==================" << endl;
  int values[3];

  values[0] = 88;
  values[1] = 123;
  values[2] = 7;

  cout << values [0] << endl;
  cout << values [1] << endl;
  cout << values [2] << endl;

  cout << "Array of double" << endl;
  cout << "==================" << endl;

  double numbers [4]{4.6, 3.4 , 2.3, 1.2};
  
  for(int i=0; i<4; i++){
    cout << "Element at index " << i << numbers[i] << endl;
  }
  cout << endl << "initializing with zero values" << endl;
  cout << "=============" << endl;

  int numberArray[8] = {};
  for (int i =0; i < 8; i ++) {
    cout << "element of index" << ": " << numberArray[i] << endl;
  }
   cout << "Array of strings" << endl;
  cout << "==================" << endl;
  //Array of strings
  string texts[]={"apple", "candy", "soda"};

    for (int i =0; i < 3; i ++) {
    cout << "element of index" << ": " << texts[i] << endl;
    }

cout << endl;
cout << "Two Diminital Arrays" << endl;
cout << "================" << endl;

string animals[2][3] = {
{"fox", "dog", "cat"},
  {"mouse", "bat", "bird"}
};
    for(int j=0; j<2; j++) {
      for(int d=0; d<3; d++) {
    cout << animals[j][d] << " " << flush;
  }
  cout << endl;
}
cout <<endl;
string SmallThingThatGoInFruitBowls[3][3] = {
  {"peach", "Apple", "Orange"},
  {"lemon", "Lime", "Banaha"}
};
 for( int f=0; f<3; f++){
   for (int g=0; g<3; g++) {
     cout << SmallThingThatGoInFruitBowls[f][g] <<endl;
   }
 }
return 0;
}

// int MultiplicationTable()
// {
//   table[12]
//   return 0
// }