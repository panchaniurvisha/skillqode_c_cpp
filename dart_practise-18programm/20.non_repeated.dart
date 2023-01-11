void main() {
  String str = 'abacddbec';
  var List = str.split('');
  var Set = List.toSet();
  var CharactersList = [];
  for (var character in Set) {
    if (List.indexOf(character) == List.lastIndexOf(character)) {
      CharactersList.add(character);
    }
  }
  print(CharactersList);
}
