#include<bits/stdc++.h>
using namespace std;
int fib(int n){
      if(n == 0){
            return 0;
      }
      else{
            return (n + fib(n-1));
      }
}
int main(){
      cout<<fib(5);
      return 0;
}