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
  void add() {
    print("sum=${data1! + data2!}");
  }
}

class Multiplication extends Addition {
  void multiply() {
    print("multiple=${data1! * data2!}");
  }
}

class Devision extends Multiplication {
  void devide() {
    print("devision=${data1! / data2!}");
  }
}

class Subtraction extends Devision {
  void subtractions() {
    print("substraction=${data1! - data2!}");
  }
}

class Modulus extends Subtraction {
  void module() {
    print("modules=${data1! % data2!}");
  }
}

void main() {
  Modulus module = Modulus();
  module.printData();
  module.add();
  module.multiply();
  module.devide();
  module.subtractions();
  module.module();
}

/*class Machinery{
  void generate(){
    print("\n all machine is worked on");
  }
}
class Spareparts extends Machinery{
  void running(){
      print("\n all machine is worked fast");
    }
}
class Kit extends Spareparts{
  void close(){
    print("\n all machine is worked off");
  }
  
}
void main(){
  Kit kit1 =Kit();
  kit1.generate();
  kit1.running();
  kit1.close();
}*/