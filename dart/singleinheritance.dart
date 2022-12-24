/*class Realince {
  void progress() {
    print("our profit is up");
  }
}
class SellingDepartment extends Realince {
  
  void running() {
    print("market is down");
  }
}
void main() {
  SellingDepartment employee = SellingDepartment();
  employee.progress();
  employee.running
}*/

/*class Animal {
  void speak() {
    print("Animal is speaking");
  }
}
class Cow extends Animal {
  void listen() {
    print("cow is listening");
  }
}
void main() {
  Cow gir = Cow();
  gir.speak();
  gir.listen();
}*/
class Human {
  void eating() {
    print("\n humans are eating mango");
  }
}

class Men extends Human {
  void sleeping() {
    print("\n women are sleeping at night");
  }
}

void main() {
  Men piyush = Men();
  piyush.eating();
  piyush.sleeping();
}
