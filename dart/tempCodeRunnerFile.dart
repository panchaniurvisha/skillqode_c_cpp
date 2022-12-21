/*class Realince {
  void progress() {
    print("our profit is up");
  }
}

class SellingDepartment extends Realince {
  @override
  void progress() {
    print("market is down");
    super.progress();
  }
}
void main() {
  SellingDepartment employee = SellingDepartment();
  employee.progress();
}*/

/*class Animal {
  void speak() {
    print("Animal is speaking");
  }
}

class Cow extends Animal {
  @override
  void speak() {
    print("cow is speaking");
    super.speak();
  }
}

void main() {
  Cow gir = Cow();
  gir.speak();
}*/
class Stationary {
  void purchase() {
    print("lots of things are purchased");
  }
}

class Pen extends Stationary {
  @override
  void purchase() {
    print("customer are purchasing lots of pens");
    super.purchase();
  }
}

void main() {
  Pen synosoftec = Pen();
  synosoftec.purchase();
}
