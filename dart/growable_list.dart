void main() {
  List listName = [11, 12, 13, 14, 15, 16];
  print(listName);

  List listOne = [];
  listOne.add(11);
  listOne.add(12);
  listOne.add(13);
  print(listOne);

  List listTwo = [1, 3, 5, 7, 9];
  listTwo.add(15);

  ///add one element
  listTwo.add(16);
  print(listTwo);

  List listThree = [1, 3, 5, 7, 9];
  listThree.addAll([15, 16, 17, 18, 19]);

  ///add all value
  print(listThree);

  List listFour = [1, 2, 3, 4, 5];
  listFour.insert(2, 14);

  ///insert only one value
  listFour.insertAll(0, [20, 21, 22, 23]);

  ///insert all value
  print(listFour);

  List listFive = [1, 2, 3, 4, 5];
  listFive[3] = 55;
  print(listFive);

  ///updating list-----------------------
  listFive.replaceRange(0, 5, [11, 12, 13, 14, 15]);

  ///updating all value
  print(listFive);

  List listSix = [11, 12, 13, 14, 15];
  listSix.remove(13);
  print(listSix);
  //OR----index vise remove
  listSix.removeAt(3);
  print(listSix);

  List listSeven = [21, 22, 23, 24, 25];
  listSeven.removeLast();

  ///remove last
  print(listSeven);
  listSeven.removeRange(0, 2);

  ///remove untill i want
  print(listSeven);

  List listEight = ["Smith", "Peter", "Handscomb", "Devansh", "Cruise"];

  ///forEach--method
  listEight.forEach((item) {
    print("${listEight.indexOf(item)}:$item");
  });
}
