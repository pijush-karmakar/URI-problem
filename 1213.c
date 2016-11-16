#include <iostream>
#include <cmath>

using namespace std;

int main(){
  long long s;
  int i, C;

  while (cin>>C){
     i=1;
     s=1;
     if (C%2!=0 && C%5!=0){
        while (s%C!=0){
           s=s%C;
           s+=((unsigned long long)pow(10.0,i))%C;
           i++;
        }
     }
     cout <<i <<endl;
  }
}
