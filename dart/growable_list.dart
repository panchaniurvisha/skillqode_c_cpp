void main(){
  List listName =[11,12,13,14,15,16];
      print(listName);

  List listOne =[];
      listOne.add(11);
      listOne.add(12);
      listOne.add(13);
      print(listOne);

  List listTwo =[1,3,5,7,9];
      listTwo.add(15);///add one element
      listTwo.add(16);
      print(listTwo);

  List listThree =[1,3,5,7,9];
      listThree.addAll([15,16,17,18,19]);///add all value
      print(listThree);

  List listFour=[1,2,3,4,5];
      listFour.insert(2,14);///insert only one value
      listFour.insertAll(0,[20,21,22,23]);///insert all value
      print(listFour);

  List listFive =[1,2,3,4,5];
      listFive[3]=55;
      print(listFive);///updating list-----------------------
      listFive.replaceRange(0,5,[11,12,13,14,15]);///updating all value
      print(listFive);

  List listSix =[11,12,13,14,15];
      listSix.remove(13);
      print(listSix);
      //OR----index vise remove
      listSix.removeAt(3);
      print(listSix);

  List listSeven =[21,22,23,24,25];
      listSeven.removeLast();///remove last
      print(listSeven);
      listSeven.removeRange(0,2);///remove untill i want
      print(listSeven);

  List listEight =["Smith","Peter","Handscomb","Devansh","Cruise"];///forEach--method means for loop
      listEight.forEach((item)
      {print("${listEight.indexOf(item)}:$item");});

  List listNine=[1,2,3,4,5];///get Range 
      listNine.getRange(0, 5);
      print(listNine);

  List listTen=[1,2,3,4,5,6,5];///only one index find
      print(listTen.indexOf(4));
      print(listTen.indexOf(5,5));//2 element same(element,index_starting)

  List listeleven=[1,2,3,4,5];///check element list is it  or not 
      print(listeleven.any((element)=>element>=4));
      print(listeleven.any((element)=>element>=7));

  List listTwelve=<String>["urvi","piyu","kairav"]; 
      var map=listTwelve.asMap();///all index and value show
      print(map);
      print(map.keys.toList());///all index show 

  /*List listThirty=["urvisha"];//caste
  print(listThirty.cast<int>().remove("a"));*/

  //~~~~~~~~~~~~~~~EXPAND~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
  List pairs = [[1, 2], [3, 4]];///expand combine lists
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

  List listFifteen =[1,2,3,4];
      print(listFifteen);
      listFifteen.fillRange(0,2,10);///untill range value update
      print(listFifteen);

  List numbers16 = <int>[1, 2, 3, 5, 6, 7];
      var result = numbers16.firstWhere((element) => element < 5); // 1
      print(result);
      result = numbers16.firstWhere((element) => element > 5); // 6
      print(result);
      result =numbers16.firstWhere((element) => element > 10, orElse: () => -1); // -1
      print(result);
    
  List listSeventeen =[1,2,3,4,5];
  listSeventeen.fold(10, (previousValue, element) =>  previousValue + element);


 
 
 }
 


  


 

