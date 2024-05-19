#include<iostream>
using namespace std;
template<class T>
class vector{
      public:
      T * arr;
      int s;
      vector(int x){
            s = x;
            arr = new T[s];
      }
      void sorted(){
            for(int i =0;i<s-1;i++){
                  for(int j = i+1;j<s;j++){
                        if(arr[i]>arr[j]){
                              int temp = arr[i];
                              arr[i] = arr[j];
                              arr[j] = temp;
                        }
                  }
            }
      }
};
template <class T1, class T2>
class paired{
      public:
      int size;
      T1 * key;
      T2 * value;
      paired(int x){
            size = x;
            key = new T1[size];
            value = new T2[size];
      }
      T2 val(int k){
            for(int i = 0;i<size;i++){
                  if(key[i] == k){
                        return value[i];
                  }
            }
            return -1;
      }
};
template <class T>
T add(T a, T b){
      return a+b;
}
int main(){
      float a = 2.4;
      float b = 3.4;
      float sum = add<float>(a,b);
      cout<<sum<<endl;
      vector <int> v(3);
      v.arr[0] = 1;
      v.arr[1] = 3;
      v.arr[2] = 2;
      v.sorted();
      for(int i = 0;i<v.s;i++){
            cout<<v.arr[i]<<endl;
      }
      paired <int, char> p(4);
      p.key[0] = 90;
      p.value[0] = 'S';
      p.key[1] = 80;
      p.value[1] = 'A';
      p.key[2] = 70;
      p.value[2] = 'B';
      p.key[3] = 60;
      p.value[3] = 'C';
      char grade = p.val(90);
      cout<<grade;

      return 0;
}

