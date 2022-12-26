/*import 'dart:io';
class interfaceBike{
  String ?name;
  void printData(){
    print("\n Bike Name :\t");
    name =stdin.readLineSync()!;
    
  }
}
class Platina implements interfaceBike{
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
class interfaceBike {
  void printData() {
    print("\n Bike Name :platina\t");
  }
}

class Platina implements interfaceBike {
  @override
  void printData() {
    print("\n Bike Nmae :Yamaha");
  }
}

void main() {
  Platina platina1 = Platina();
  platina1.printData();
}
