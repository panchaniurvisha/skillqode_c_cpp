import "dart:math";

void main() {
  // create integers
  int aNumber = 2;
  int aExponent = 3;

  // create doubles
  double bNumber = 20.00;
  double bExponent = 2.00;

  // negative integers
  int cNumber = -4;
  int cExponent = -2;

  // negative doubles
  double dNumber = -6.0;
  double dExponent = -3.0;
  print("$aNumber to the power of $aExponent is ${pow(aNumber, aExponent)}");
  print("$bNumber to the power of $bExponent is ${pow(bNumber, bExponent)}");
  print("$cNumber to the power of $cExponent is ${pow(cNumber, cExponent)}");
  print("$dNumber to the power of $dExponent is ${pow(dNumber, dExponent)}");
}
