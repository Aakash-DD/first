#include <bits/stdc++.h>
using namespace std;

bool mycompare(pair<string,int> p1,pair<string,int> p2){
  
  if(p1.second==p2.second){
      //founded length badi gya phela
      //if(p1.first.find(p2.first)!=-1 || p2.first.find(p1.first)!=-1){
        if(p1.first[0]==p2.first[0]){
        
          return p1.first.length() > p2.first.length() ; 
      } 
      else{
        return p1.first < p2.first ; //
      }

    //  if(p1.first.length()>p2.first.length())
    //  return p1.first.length() < p2.first.length() ;
  }
  return p1.second > p2.second ;

}

int main(){
  
  int n;
  pair<string ,int> emp[100005];
  cin>>n;  

  string name;  int salary;
  for(int i=0;i<n;i++){
    cin>>name>>salary;
    emp[i].first=name;
    emp[i].second=salary;

  }
  sort(emp,emp+n,mycompare);
  for(int i=0;i<n;i++){
    cout<<emp[i].first<<" "<<emp[i].second<<endl;
  }

}