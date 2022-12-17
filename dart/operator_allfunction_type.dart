//no return no parameter
/*class Maths{
   dynamic data1=100,data2=20,data3=10;
   void arithmaticOperator(){
         print("${data1+data2}");
         print("${data1/data2}");
         print("${data1-data2}");
         print("${data1*data2}");
         print("${data1%data2}-------------");
   }
   void relationalOperator(){
         print("\n${data1<data2}");
         print("${data1<=data2}");
         print("${data1>data2}");
         print("${data1>=data2}");
         print("${data1==data2}");
         print("${data1!=data2}-------------");
   }
   void logicalOperator(){     
         print("\n${data1>data2 && data1>data2}");
         print("${data1>data2 || data1<data2}");
         print("${!(data1<data2)}------------");
   }
   void typeTestOperator(){   
         print("\n${data1 is int}");
         print("${data2 is! int}");
         (data1>data2)?print("$data1 is greater"):print("$data2 is greater");
   }
   void conditionalOperator(){     
         (data1>data2 && data1>data3)?print("\n$data1 is greater"):print(data2>data3)?("\n$data2 is greater"):print("\n$data3 is grater");
   }
    void bitwiseOperator(){
         print("\n${data1&data2}");
         print("${data1|data2}");
         print("data1 ^ data2 = ${data1 ^ data2}");
         print("~x = ${(~data1)}");
         print("data1 << 2 = ${data1 << 2}");
         print("data2 >> 2 = ${data2 >> 2}----------");
   }      
    void assignmentOperator(){     
         print("\n${data1=100}");
         print("${data1+=data2}");
         print("${data1-=data2}");
         print("${data1*=data2}");
         print("${data1/=data2}");
         print("${data1%=data2}-------------"); 
  }
}
void main(){
   Maths operator =Maths();
          operator.arithmaticOperator();
          operator.relationalOperator();
          operator.logicalOperator();
          operator.typeTestOperator();
          operator.conditionalOperator();
          operator.bitwiseOperator();
          operator.assignmentOperator();
}*/


//no return with parameter
/*class Maths{
   void arithmaticOperator(int data1,int data2){
         print("${data1+data2}");
         print("${data1/data2}");
         print("${data1-data2}");
         print("${data1*data2}");
         print("${data1%data2}-------------");
   }
   void relationalOperator(int data1,int data2){
         print("\n${data1<data2}");
         print("${data1<=data2}");
         print("${data1>data2}");
         print("${data1>=data2}");
         print("${data1==data2}");
         print("${data1!=data2}-------------");
   }
   void logicalOperator(int data1,int data2){     
         print("\n${data1>data2 && data1>data2}");
         print("${data1>data2 || data1<data2}");
         print("${!(data1<data2)}------------");
   }
   void typeTestOperator(int data1,int data2){   
         print("\n${data1 is int}");
         print("${data2 is! int}");
         (data1>data2)?print("$data1 is greater"):print("$data2 is greater");
   }
   void conditionalOperator(int data1,int data2,int data3){     
         (data1>data2 && data1>data3)?print("\n$data1 is greater"):(data2>data3)?print("\n$data2 is greater"):print("\n$data3 is grater");
   }
    void bitwiseOperator(int data1,int data2){
         print("\n${data1&data2}");
         print("${data1|data2}");
         print("data1 ^ data2 = ${data1 ^ data2}");
         print("~x = ${(~data1)}");
         print("data1 << 2 = ${data1 << 2}");
         print("data2 >> 2 = ${data2 >> 2}-----------");
   }      
    void assignmentOperator(dynamic data1,dynamic data2){     
         print("\n${data1=100}");
         print("${data1+=data2}");
         print("${data1-=data2}");
         print("${data1*=data2}");
         print("${data1/=data2}");
         print("${data1%=data2}-------------"); 
  }
}
void main(){
   Maths operator =Maths();
          operator.arithmaticOperator(100,20);
          operator.relationalOperator(100,20);
          operator.logicalOperator(100,20);
          operator.typeTestOperator(100,20);
          operator.conditionalOperator(100,20,10);
          operator.bitwiseOperator(100,20);
          operator.assignmentOperator(100,20);
}*/

//with return with parameter
/*class Maths{
   int arithmaticOperator(int data1,int data2){
         print("\n${data1+data2}");
         print("${data1/data2}");
         print("${data1-data2}");
         print("${data1*data2}");
         return data1%data2;
   }
   bool relationalOperator(int data1,int data2){
         print("\n${data1<data2}");
         print("${data1<=data2}");
         print("${data1>data2}");
         print("${data1>=data2}");
         print("${data1==data2}");
         return data1!=data2;
   }
  bool logicalOperator(int data1,int data2){     
         print("\n${data1>data2 && data1>data2}");
         print("${data1>data2 || data1<data2}");
         return !(data1<data2);
  }
  dynamic typeTestOperator(int data1,int data2){ 
         
         print("\n${data1 is int}");
         print("${data2 is! int}");
         dynamic max=(data1>data2)?("$data1 is greater"):("$data2 is greater");
         return max;
        
   }
   dynamic conditionalOperator(int data1,int data2,int data3){ 
        
         dynamic max=(data1>data2 && data1>data3)?("$data1 is greater"):(data2>data3)?("$data2 is greater"):("$data3 is grater");
         return max;
   }
    int bitwiseOperator(int data1,int data2){
         print("\n${data1&data2}");
         print("${data1|data2}");
         print("data1 ^ data2 = ${data1 ^ data2}");
         print("~x = ${(~data1)}");
         print("data1 << 2 = ${data1 << 2}");
         return data2 >> 2;
   }      
   int assignmentOperator(dynamic data1,dynamic data2){     
         print("\n${data1=100}");
         print("${data1+=data2}");
         print("${data1-=data2}");
         print("${data1*=data2}");
         print("${data1/=data2}");
         return data1%=data2;
  }
}
void main(){
   Maths operator =Maths();
          print ("data1%data2 :${operator.arithmaticOperator(100,20)}");
          print("data1!=data2 :${operator.relationalOperator(100,20)}");
          print("!(data1<data2) :${operator.logicalOperator(100,20)}");
          print("maximum value:${operator.typeTestOperator(100,20)}");
          print("\nmaximum value :${operator.conditionalOperator(100,20,500)}");
          print("data2 >> 2 :${operator.bitwiseOperator(100,20)}");
          print("data1%=data2 :${operator.assignmentOperator(100,20)}");
}



//with return no parameter
class Maths{
   dynamic data1=100,data2=20,data3=300,max;
   int arithmaticOperator(){
         print("${data1+data2}");
         print("${data1/data2}");
         print("${data1-data2}");
         print("${data1*data2}");
         return data1%data2;
   }
   bool relationalOperator(){
         print("\n${data1<data2}");
         print("${data1<=data2}");
         print("${data1>data2}");
         print("${data1>=data2}");
         print("${data1==data2}");
         return data1!=data2;
   }
  bool logicalOperator(){     
         print("\n${data1>data2 && data1>data2}");
         print("${data1>data2 || data1<data2}");
         return !(data1<data2);
  }
   dynamic typeTestOperator(){   
         print("\n${data1 is int}");
         print("${data2 is! int}");
         max=(data1>data2)?("$data1 is greater"):("$data2 is greater");
         /*if(data1>data2){
           return data1;
         }
         else{
           return data2;
         }*/
         return max;
   }
   dynamic conditionalOperator(){     
         max=(data1>data2 && data1>data3)?("$data1 is greater"):(data2>data3)?("$data2 is greater"):("$data3 is grater");
         /*if(data1>data2 && data1>data3){
           return data1;
         }
         else if(data2>data3){
           return data2;
         }
         else{
           return data3;
         }*/
        return max;
   }
    int bitwiseOperator(){
         print("\n${data1&data2}");
         print("${data1|data2}");
         print("data1 ^ data2 = ${data1 ^ data2}");
         print("~x = ${(~data1)}");
         print("data1 << 2 = ${data1 << 2}");
         return data2 >> 2;
   }      
   int assignmentOperator(){     
         print("\n${data1=100}");
         print("${data1+=data2}");
         print("${data1-=data2}");
         print("${data1*=data2}");
         print("${data1/=data2}");
         return data1%=data2;
  }
}
void main(){
   Maths operator =Maths();
          print ("data1%data2 :${operator.arithmaticOperator()}---------");
          print("data1!=data2 :${operator.relationalOperator()}----------");
          print("!(data1<data2) :${operator.logicalOperator()}-----------");
          print("maximum value:${operator.typeTestOperator()}------------");
          print("\nmaximum value :${operator.conditionalOperator()}---------");
          print("data2 >> 2 :${operator.bitwiseOperator()}-----------");
          print("data1%=data2 :${operator.assignmentOperator()}-------");
}*/
