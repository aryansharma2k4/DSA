#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class pnt{
      public:
      string name;
      pnt(string n){
            name = n;
      }//!Using two functions with the same name give us more 
      //!flexibility in the namng but differnce lies between their 
      //!arguments which differentiats each other.
      void print (){
            cout<<"Print";
      }
      void print (string name){
            cout<<"Printed Again";
      }
};
int main(){
      pnt obj("aryan");
      obj.print();
      obj.print("smth");
      return 0;
}