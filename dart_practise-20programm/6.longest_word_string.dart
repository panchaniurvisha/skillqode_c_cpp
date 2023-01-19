dynamic find_longest_word(str) {
  final List<String> splitStr = str.split(' ');
  var longest = splitStr[0];
  for (var i = 1; i < splitStr.length; i++) {
    if (splitStr[i].length > longest.length) {
      longest = splitStr[i];
    }
  }
  return longest;
}

void main() {
  print(find_longest_word('Web Development Tutorial'));
}
