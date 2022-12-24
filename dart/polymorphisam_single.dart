//with super keyword------------------
/*class Stationary {
  void purchase() {
    print("lots of things are purchased by shopper");
  }
class Pen extends Stationary {
  @override
  void purchase() {
    //super.purchase();
    print("customer are purchasing lots of pens");
    super.purchase();
  }
}
void main() {
  Pen synosoftec = Pen();
  synosoftec.purchase();
}*/

//without super keyword-----------------
class Stationary {
  void purchase() {
    print("lots of things are purchased by shopper");
  }
}

class Pen extends Stationary {
  @override
  void purchase() {
    print("customer are purchasing lots of pens");
  }
}

void main() {
  Pen synosoftec = Pen();
  synosoftec.purchase();
}
