class interfaceMachinery {
  void generate() {
    print("\n all machine is worked on");
  }

  void close() {
    print("\n all machine is off");
  }
}

class Spareparts implements interfaceMachinery {
  @override
  void generate() {
    print("\n all machine is Started by employee");
  }

  @override
  void close() {
    print("\n all machine is off");
  }
}

class Kit implements interfaceMachinery {
  @override
  void generate() {
    print("\n kit is open");
  }

  @override
  void close() {
    print("\n all machine is off");
  }
}

void main() {
  Kit kit1 = Kit();
  kit1.generate();
  kit1.close();
  Spareparts one = Spareparts();
  one.generate();
  one.close();
}
