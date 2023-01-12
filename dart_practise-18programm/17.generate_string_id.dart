import 'dart:math';

void main() {
  print(getRandomString(26));
  print(getRandomString(10));
  print(getRandomString(15));
}

String chars = 'AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz1234567890';
dynamic Random_rnd = Random();

String getRandomString(int length) => String.fromCharCodes(Iterable.generate(
    length, (_) => chars.codeUnitAt(Random_rnd.nextInt(chars.length))));
