#include<iostream>
using namespace std;
bool isPowerOfTwo(int n) {
        if((n&(n-1))==0){
            return true;
        }
        else{
            return false;
        }
    }
int main(){
      cout<<isPowerOfTwo(16);
      return 0;
}