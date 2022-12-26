class Animal {
  void printData() {
    print("There are lots of animal in our garden");
  }
}

class Cow implements Animal {
  @override
  void printData() {
    print("There are lots of cow in our garden");
  }
}

class Gir implements Cow {
  @override
  void printData() {
    print("There is only one Gir in our garden");
  }
}

class Calf implements Gir {
  @override
  void printData() {
    print("There is only one calf in our garden");
  }
}

void main() {
  Calf calfone = Calf();
  calfone.printData();
}
