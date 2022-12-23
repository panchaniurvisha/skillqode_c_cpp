import 'dart:io';

class Arithmatic {
  int? data1, data2;
  void printData() {
    print("\ndata1=");
    data1 = int.parse(stdin.readLineSync()!);
    print("\ndata2 =");
    data2 = int.parse(stdin.readLineSync()!);
  }
}

class Addition extends Arithmatic {
  void showResult() {
    print("sum=${data1! + data2!}");
  }
}

class Multiplication extends Arithmatic {
  void multiply() {
    print("multiple=${data1! * data2!}");
  }
}

class Devision extends Arithmatic {
  void devide() {
    print("devision=${data1! / data2!}");
  }
}

class Subtraction extends Arithmatic {
  void subtractions() {
    print("substraction=${data1! - data2!}");
  }
}

class Modulus extends Arithmatic {
  void module() {
    print("modules=${data1! % data2!}");
  }
}

void main() {
  Addition add = Addition();
  add.printData();
  add.showResult();
  Multiplication multiply1 = Multiplication();
  multiply1.printData();
  multiply1.multiply();
  Devision devide1 = Devision();
  devide1.printData();
  devide1.devide();
  Subtraction subtract1 = Subtraction();
  subtract1.printData();
  subtract1.subtractions();
  Modulus module1 = Modulus();
  module1.printData();
  module1.module();
}
/*class Machinery {
  void generate() {
    print("\n all machine is worked on");
  }
}

class Spareparts extends Machinery {
  @override
  void generate() {
    print("\n All sparparts are different");
    super.generate();
  }

  void close() {
    print("\n all machine is worked off");
  }
}

class Kit extends Machinery {
  @override
  void generate() {
    print("\n kit is old ");
    super.generate();
  }

  void open() {
    print("\n kit is over");
  }
}

void main() {
  Kit kit1 = Kit();
  kit1.generate();
  kit1.open();
  Spareparts one = Spareparts();
  one.generate();
  one.close();
}*/
