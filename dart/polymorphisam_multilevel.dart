/*import 'dart:io';
class Arithmatic {
  int ?data1, data2;
  void printData() {
    print("\ndata1=");
    data1 = int.parse(stdin.readLineSync()!);
    print("\ndata2 =");
    data2 = int.parse(stdin.readLineSync()!);
  }
}
class Sum extends Arithmatic {
  @override
  void printData() {
    super.printData();
  }
  void showResult() {
    print("sum=${data1! + data2!}");
  }
}
class Addition extends Sum {
  @override
  void showResult() {
    super.showResult();
  }
  void multiply() {
     print("multiple=${data1! * data2!}");
  }
}
class Multiplication extends Addition {
  @override
  void multiply() {
    super.multiply();
  }
  void devide() {
    print("devision=${data1! / data2!}");
  }
}
class Devision extends Multiplication {
  @override
  void devide() {
    super.devide();
  }
  void subtractions() {
    print("substraction=${data1! - data2!}");
  }
}
class Subtraction extends Devision {
  @override
  void subtractions() {
    super.subtractions();
  }
  void module() {
      print("modules=${data1! % data2!}");
  }
}
class Modulus extends Subtraction {
  @override
  void module() {
    super.module();
  }
}
void main() {
  Modulus module =Modulus();
  module.printData();
  module.showResult();
  module.multiply();
  module.devide();
  module.subtractions();
  module.module();
}*/

class Machinery {
  void generate() {
    print("\n all machine is worked on");
  }
}

class Spareparts extends Machinery {
  @override
  void generate() {
    super.generate();
    print("\n all machine is progress fast way");
  }

  void close() {
    print("\n all machine is worked off");
  }
}

class Kit extends Spareparts {
  @override
  void close() {
    print("\n all machine is stopped");
    super.close();
  }
}

void main() {
  Kit kit1 = Kit();
  kit1.generate();
  kit1.close();
}
