#include<bits/stdc++.h>
using namespace std;
class Quadilateral{
      public: 
      int length;
      int breadth;
      Quadilateral(int l, int b){
            length = l;
            breadth = b;
      }
      //!The virtual keyword shows that this member of the class can be used by another class which has inherited from this class and can be overidden
      virtual int calcArea(){
            return (this->length*this->breadth);
      }
};
class Square: public Quadilateral{
      public:
      int side;
      //?This line of the code means that we are initializing the class square with three data members out of which 2 are from the base class and the length and breadth will be initialized to the quadilateral. This is a basic syntax is always used when using parameterised constructor for a derived class.
      Square(int s, int l, int b): Quadilateral(l, b){
            side = s;
            length = l;
            breadth = b;
      }
      //**The overriden keyword tells us that there is a function in the base class which is virtual and we are overriding that function using the keyword override means if we make a object of the derived class then this function will be called else the base class fucntion will be can be used in as many classes as there are and easily use the functions
      int calcArea() override{
            return (this->length*this->breadth);
      }
};
int main(){
      Quadilateral wxyz(20,30);
      int qarea =  wxyz.calcArea();
      Square abcd(20, 40, 40);
      int area = abcd.calcArea();
      cout<<"The area is: "<<qarea<<endl;
      cout<<"The area is: "<<area<<endl;
      return 0;
}