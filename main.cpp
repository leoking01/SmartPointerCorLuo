#include <iostream>

using namespace std;
#include "Curve.h"
int main()
{
    cout << "Hello World!" << endl;

  SKDVision::  Curve  cv(20,30,3 );
 bool  res =  cv.isValid();
  cout << "res = " << res<<  endl;

    return 0;
}
