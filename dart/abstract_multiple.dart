abstract class Father {
  void eating(String fruit);
  void working(String object);
  void sleeping();
}

abstract class Mother {
  void running();
}

class Child implements Father, Mother {
  @override
  void eating(String fruit) {
    print("\nurvish is eating $fruit");
  }

  @override
  void running() {
    print("\nurvish is running");
  }

  @override
  void sleeping() {
    print("\nurvish is  sleeping at 10p.m");
  }

  @override
  void working(String object) {
    print("\nurvish is working on $object");
  }
}

void main() {
  Child child = Child();
  child.eating("Apple");
  child.running();
  child.sleeping();
  child.working("Laptop");
}
