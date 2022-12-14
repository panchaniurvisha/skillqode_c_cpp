void main(){
   //arithmatic operator
   dynamic data1=5,data2=20,data3=10;
   print("${data1+data2}");
   print("${data1/data2}");
   print("${data1-data2}");
   print("${data1*data2}");
   print("${data1%data2}-------------");
   
   //relational operator
   print("${data1<data2}");
   print("${data1<=data2}");
   print("${data1>data2}");
   print("${data1>=data2}");
   print("${data1==data2}");
   print("${data1!=data2}-------------");
  
   //logical operator
   print("${data1>data2 && data1>data2}");
   print("${data1>data2 || data1<data2}");
   print("${!(data1<data2)}------------");
  
   //type test operator
   print("${data1 is int}");
   print("${data2 is! int}");
   (data1>data2)?print("$data1 is greater"):print("$data2 is greater");
  
   //conditional operator
   (data1>data2 && data1>data3)?print("$data1 is greater"):(data2>data3)?("$data2 is greater"):("$data3 is grater");
   
   //Bitwise operator
   print("${data1&data2}");
   print("${data1|data2}");
   print("data1 ^ data2 = ${data1 ^ data2}");
   print("~x = ${(~data1)}");
   print("data1 << 2 = ${data1 << 2}");
   print("data2 >> 2 = ${data2 >> 2}");
   
   //Assignment operator
   print("${data1=100}");
   print("${data1+=data2}");
   print("${data1-=data2}");
   print("${data1*=data2}");
   print("${data1/=data2}");
   print("${data1%=data2}-------------");
   
 
  
   
   
}