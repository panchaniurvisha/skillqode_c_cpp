/*import 'dart:io';
class Bike{
  String ?name;
  void printData(){
    print("\n Bike Name :\t");
    name =stdin.readLineSync()!;
    
  }
}
class Platina implements Bike{
  @override
  String? name;
  @override
  void printData() {
    print("\n Bike Name :\t");
    name =stdin.readLineSync()!;
  }
}
void main(){
  Platina platina1 =Platina();
  platina1.printData();
}*/

///without using stdin......
class Bike {
  void printData() {
    print("\n Bike Name :platina\t");
  }
}

class Platina implements Bike {
  @override
  void printData() {
    print("\n Bike Nmae :Yamaha");
  }
}

void main() {
  Platina platina1 = Platina();
  platina1.printData();
}
