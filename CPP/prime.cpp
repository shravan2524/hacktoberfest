#include<bits/stdc++.h>
using namespace std;

int main(){
  cout << "Enter A Number :" ;
  int n ;
  cin >> n ;
  int flag = 1;
  // checkign if number is prime or not
  for(int i=2;i<sqrt(n);i++){
    if(n%i==0){
      cout << "No";
      flag = 0;
      break;
    }
  }
  if(flag){
    cout << "Yes";
  }
  return 0; 
}
