#include<bits/stdc++.h>
using namespace std;
class Number{
      public:
      int n;
      Number(int num){
            n = num;
      }
      //!This operator + redefines the + operator and take one input as the object itself and the other as the other object which we provided
      Number operator + (const Number& num1){
            return (this->n + num1.n);
      }
      //**This redefines the operator == and it's result which we can store in the bool operator which we made in the main code
      bool operator ==(const Number& num1){
            if(this->n == num1.n){
                  return true;
            }
            else{
                  return false;
            }
      }
};          
int main(){
      Number a(5);
      Number b(10);
      Number c(0);
      bool flag = (a == b);
      if(flag){
            cout<<0;
      }
      else{
            cout<<1;
      }
      return 0;
}