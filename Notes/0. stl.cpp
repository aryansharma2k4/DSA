#include<bits/stdc++.h>
using namespace std;
class STL{
      public:
      void pairs(){
            pair<int,int> p = {1,3};
            cout<<p.first<<endl<<p.second;
            pair<int,pair<int,int>> p1 = {1,{1,3}};
            cout<<p1.second.first<<endl;
      }
      void vectors(){
            vector<int> v;
            v.push_back(1);  //{1}
            v.emplace_back(1); //{1,1}
            vector<int> v1(5,2); //{2,2,2,2,2}
            for(vector<int> :: iterator it = v1.begin(); it!= v1.end() ; it++){
                  cout<<*(it) <<endl;
            } 
            for(auto it = v1.begin(); it!= v1.end() ; it++){
                  cout<<*(it) <<endl;
            }
      }
      void maps(){
            map<int,int> mpp; //! HERE THE FIRST VALUE IS A KEY AND THE OTHER IS THE VALUE CORRESPODING THE OTHER KEY
            mpp[1] = 2;
            for(auto it:mpp){
                  cout<<it.first<<endl;
            }
      }
};
int main(){
      STL var;
      var.maps();
      var.pairs();
      var.vectors();
      return 0;
}