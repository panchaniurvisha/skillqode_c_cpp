void main() {
  ///singleWhere,fold,reduce,caste.....
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

  ///forEach--method means for loop
  listEight.forEach((item) {
    print("${listEight.indexOf(item)}:$item");
  });

  List listNine = [1, 2, 3, 4, 5];

  ///get Range
  listNine.getRange(0, 5);
  print(listNine);

  List listTen = [1, 2, 3, 4, 5, 6, 5];

  ///only one index find
  print(listTen.indexOf(4));
  print(listTen.indexOf(5, 5)); //2 element same(element,index_starting)

  List listeleven = [1, 2, 3, 4, 5];

  ///check element list is it  or not
  print(listeleven.any((element) => element >= 4));
  print(listeleven.any((element) => element >= 7));

  List listTwelve = <String>["urvi", "piyu", "kairav"];
  var map = listTwelve.asMap();

  ///all index and value show
  print(map);
  print(map.keys.toList());

  ///all index show
  /*List listThirty=["urvisha"];//caste
  print(listThirty.cast<int>().remove("a"));*/

  //~~~~~~~~~~~~~~~EXPAND~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  List pairs = [
    [1, 2],
    [3, 4]
  ];

  ///expand combine lists
  var listFourty = pairs.expand((pair) => pair).toList();
  print(listFourty); // => [1, 2, 3, 4];
  List input = [1, 2, 3];
  var duplicated = input.expand((i) => [i, i]).toList();
  print(duplicated); // => [1, 1, 2, 2, 3, 3]

  List basket1 = ['Mango', 'Apple'];
  List basket2 = ['Orange', 'Avocado', 'Grape'];
  List basket3 = ['Lemon'];
  // converting the lists to an iterable
  var newBasketIterable = [basket1, basket2, basket3].expand((x) => x);
  // combining the lists
  var newBasket = newBasketIterable.toList();
  print("Iterable:  $newBasketIterable");
  print("Combined List:  $newBasket");

  List listFifteen = [1, 2, 3, 4];
  print(listFifteen);
  listFifteen.fillRange(0, 2, 10);

  ///untill range value update
  print(listFifteen);

  List numbers16 = <int>[1, 2, 3, 5, 6, 7];
  var result = numbers16.firstWhere((element) => element < 5); // 1
  print(result);
  result = numbers16.firstWhere((element) => element > 5); // 6
  print(result);
  result =
      numbers16.firstWhere((element) => element > 10, orElse: () => -1); // -1
  print(result);

  List<int> listSeventeen = [1, 2, 3, 4, 5];

  ///value maintain
  int number = listSeventeen.fold<int>(
      10, (previousValue, element) => previousValue + element);
  print("\n Sum :$number");

  List<String> listEighteen = ["vaidehi", "urvi", "piyu"];

  ///followed next String
  print(listEighteen);
  print(listEighteen.followedBy(["tom"]));

  List<String> listNinteen = [
    'Flutter Cookbook',
    'Dart NoteBook',
    'educative.io',
    'Dart language'
  ];

  ///in string show where is its index no
  print(listNinteen);
  int foundIndex =
      listNinteen.indexWhere((listNinteen) => listNinteen.endsWith("k"));
  print('Index: $foundIndex');
  int found =
      listNinteen.indexWhere((listNinteen) => listNinteen.startsWith("D"));
  print('Index: $found');
  int foundSecond =
      listNinteen.indexWhere((listNinteen) => listNinteen.startsWith("D"), 2);
  print('Index: $foundSecond');

  List<int> listTwenty = [1, 2, 3, 4, 5];
  print(listTwenty.join("-"));

  List<int> listTwentyOne = [1, 2, 3, 4, 5];
  print(listTwentyOne.lastIndexOf(3));

  List<int> listTwentyTwo = [1, 2, 3, 4, 5];
  print(listTwentyTwo.lastWhere((element) => element < 5));
  print(listTwentyTwo.lastWhere((element) => element > 2));
  print(listTwentyTwo.lastWhere((element) => element > 5, orElse: () => -1));

  List<String> listTwentyThree = ["vaidehi", "piyu", "urvi", "piyu"];
  print(listTwentyThree.lastIndexWhere((element) => element.startsWith('p')));
  print(
      listTwentyThree.lastIndexWhere((element) => element.startsWith('p'), 2));

  List<int> listTwentyFour = [25, 5, 10, 12];
  print(listTwentyFour.reduce((value, element) {
    print("7.value:$value ");
    print("element $element");
    print(element);
    return 0;
  }));

  List<String> listtwentyFive = ["vaidehi", "piyu", "urvi", "piyu"];
  listtwentyFive.removeWhere((element) => element.length == 4);
  print(listtwentyFive);

  List<String> listTwentySix = ["vaidehi", "piyu", "urvi", "piyu"];
  listTwentySix.retainWhere((element) => element.length == 4);
  print(listTwentySix);

  List<String> listTwentySeven = ["vaidehi", "piyu", "urvi", "piyu"];
  listTwentySeven.setAll(0, ["Apple", "banana", "orange"]);
  print(listTwentySeven);

  List list1 = <int>[1, 2, 3, 4];
  List list2 = <int>[5, 6, 7, 8, 9];
  // Copies the 3rd 4th and 5th items in list2 as the  1st 2nd and 3rd items  of list1.
  const skipCount = 2;
  list1.setRange(0, 3, list2, skipCount);
  print(list1);

  List listTwentyNine = <int>[1, 2, 3, 4];
  listTwentyNine.shuffle();
  print(listTwentyNine);

  List listThirty = [2, 2, 10, 4];
  result = listThirty.singleWhere((element) => element > 5);
  print(result);

  List listThirtyOne = [1, 2, 3, 4];
  result = listThirtyOne.skip(2);
  print(result);

  List listThirtyTwo = [1, 2, 3, 4, 5, 6, 7];
  print(listThirtyTwo.skipWhile((value) => value < 5));
  print(listThirtyTwo.skipWhile((value) => value != 4));
  print(listThirtyTwo.skipWhile((value) => value != 8));

  List listThirtyThree = <int>[11, 10, 8, 9];
  listThirtyThree.sort();
  print(listThirtyThree);

  List listThirtyFour = <String>["vaidehi", "piyu", "urvi", "piyu"];
  print(listThirtyFour.sublist(2));
  print(listThirtyFour.sublist(0, 2));

  List listThirtyFive = <int>[1, 2, 3, 4, 5, 6, 7];
  print(listThirtyFive.take(5));
  print(listThirtyFive.take(100));

  List listThirtySix = <int>[1, 2, 3, 5, 6, 7];
  var data = listThirtySix.takeWhile((value) => value < 5);
  print(data);
  data = listThirtySix.takeWhile((value) => value.isOdd);
  print(data);
  data = listThirtySix.takeWhile((value) => value != 4);
  print(data);

  List listThirtySeven = <int>[1, 2, 3, 5, 6, 7];
  var res = listThirtySeven.toString();
  print("New String: ${res}");

  List listThirtyEight = <int>[1, 2, 3, 5, 6, 7];
  var dataOne = listThirtyEight.where((element) => element > 5);
  print(dataOne);
  dataOne = listThirtyEight.where((element) => element < 7);
  print(dataOne);
  dataOne = listThirtyEight.where((element) => element.isEven);
  print(dataOne);
}
