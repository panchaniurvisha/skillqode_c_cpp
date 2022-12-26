/*import 'dart:io';

int main() {
  int n, reverse = 0, remainder;

  print("Enter an integer: ");
  n = int.parse(stdin.readLineSync()!);

  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  print("Reversed number = $reverse");

  return 0;
}*/
void main() {
  //a list
  var myList = [3, 2, 2, 4, 3];

  //intialize a new list from iterable to the items of reversed order
  var reversedList = new List.from(myList.reversed);

  print(reversedList);
}
