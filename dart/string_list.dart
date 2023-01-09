void main() {
  String data = "Hello World";

  print('hashCode()--->${data.hashCode}');
  print('is empty()--->${data.isEmpty}');
  print('is not empty()--->${data.isNotEmpty}');
  print('length()--->${data.length}');
  print('runtimeType()--->${data.runtimeType}');
  String str='Hello World Hello';
    Iterable<Match> matches = "Hello".allMatches(str);
    for(final Match m in matches){
      print(m[0]);
    }
  print('compareTo()--->${data.compareTo("Hello World")}');

  ///same 0
  print('compareTo()--->${data.compareTo("Hello ")}');

  ///current>specified=1
  print('compareTo()--->${data.compareTo("Hello World dart")}');

  ///current<specified=-1
  print('contains()--->${data.contains('W')}'); //check character is OR not
  print('endsWith()--->${data.endsWith('World')}');
  print('indexOf()--->${data.indexOf("l")}');
  print('indexOf()--->${data.indexOf("l", 4)}');
  //OR
  print('lastIndexOf()--->${data.lastIndexOf("l")}');

  print('padLeft()--->${data.padLeft(14, "=")}');
  print('padRight()--->${data.padRight(14, "=")}');
  print('replaceAll()--->${data.replaceAll(" ", "~")}');
  print('replaceAll()--->${data.replaceAll("l", "~")}');
  print('replaceRange()--->${data.replaceRange(11, null, " How are you")}');
  print('replaceFirst()--->${data.replaceFirst("H", "*")}');
  print('split()--->${data.split("")}');
  print('startsWith()--->${data.startsWith("Hello")}');
  print('sunstring()--->${data.substring(1)}');
  print('sunstring()---->${data.substring(1, 5)}');
  print('toLowerCase()--->${data.toLowerCase()}');
  print('toUpperCase()--->${data.toUpperCase()}');
  print('trim--->${'  data  '.trim()}');

  ///space remove end and starting
  print('trimLeft--->${'  data  '.trimLeft()}');
  print('trimRight--->${'  data  '.trimRight()}');
  print('trim--->${'  data  '.trim()}');
  print('6.trim--->${data.codeUnits}');
    
 var mixList = [1, "a", 2, "b", 3, "c", 4, "d"];
 var num = mixList.whereType<int>();
  print(num); 
 var num1 = mixList.whereType<String>();
  print(num1); 
}
