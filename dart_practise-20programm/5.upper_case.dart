//String Str1 = "the quick brown fox";
//all letter are capitalization
//print(Str1.toUpperCase());
void main() {
  String totTitle(String input) {
    final List<String> splitStr = input.split(' ');
    for (int i = 0; i < splitStr.length; i++) {
      splitStr[i] =
          '${splitStr[i][0].toUpperCase()}${splitStr[i].substring(1)}';
    }
    final output = splitStr.join(' ');
    return output;
  }

  const str1 = "the quick brown fox";
  print(totTitle(str1));
}
