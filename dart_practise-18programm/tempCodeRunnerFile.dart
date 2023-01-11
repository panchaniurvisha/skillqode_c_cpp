void main() {
  List listThirtySix = <int>[1, 2, 3, 5, 6, 7];
  var data = listThirtySix.takeWhile((value) => value > 2);
  print(data);
}
