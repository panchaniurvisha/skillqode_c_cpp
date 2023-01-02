void main() {
  String number = 'dog';
  List<String> listnumber = number.split("");
  List<String> output = [];
  for (int i = 0; i < listnumber.length; i++) {
    if (i != listnumber.length - 1) {
      output.add(listnumber[i]);
    }
    List<String> temp = [listnumber[i]];
    for (int j = i + 1; j < listnumber.length; j++) {
      temp.add(listnumber[j]);
      output.add(temp.join());
    }
  }
  print(output.toString());
}
