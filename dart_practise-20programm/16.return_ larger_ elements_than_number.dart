void main() {
  List listThirtyTwo = [1, 2, 3, 4, 5, 6, 7];
  dynamic number = listThirtyTwo.skipWhile((value) => value <= 2);
  print("larger elements :$number");
}
