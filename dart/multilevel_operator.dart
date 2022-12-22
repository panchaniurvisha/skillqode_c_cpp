import 'dart:io';

class Arithmatic {
  int? data1, data2, sum, multiple, devision, modulus;
  void printData() {}
}

class Sum extends Arithmatic {
  @override
  void printData() {
    print("\ndata1=");
    data1 = int.parse(stdin.readLineSync()!);
    print("\ndata2 =");
    data2 = int.parse(stdin.readLineSync()!);
    super.printData();
  }

  void showResult() {}
}

class Addition extends Sum {
  @override
  void showResult() {
    print("sum=${data1! + data2!}");
    super.showResult();
  }

  void multiply() {}
}

class Multiplication extends Addition {
  @override
  void multiply() {
    print("multiple=${sum! * data2!}");
    super.showResult();
  }

  void devide() {}
}

class Devision extends Multiplication {
  @override
  void devide() {
    print("devision=${multiple! / data2!}");
    super.showResult();
  }

  void subtraction() {}
}

class Subtraction extends Devision {
  @override
  void subtraction() {
    print("substraction=${devision! - data2!}");
    super.showResult();
  }

  void modulue() {}
}

class Modulus extends Subtraction {
  @override
  void modulue() {
    print("substraction=${modulus! % data2!}");
    super.modulue();
  }
}

void main() {
  Sum sum1 = Sum();
  sum1.printData();
  sum1.showResult();
}
