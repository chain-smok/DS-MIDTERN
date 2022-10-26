#include <iostream>
#include <time.h>
using namespace std;
void arrayRand(int v[],int x){
  int i;
  for(i=0;i<x;i++){
    v[i]=rand()%100;
  }
}
void arrayPrint(int v[],int x){
  int i;
  for(i=0;i<x;i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
}
int arrayMax(int v[],int x){
    int max=v[0],i;
    for(i=1;i<x;i++){
         if(v[i]>max){
           max=v[i];
         }
    }
    return max;
}
int main(){
  srand(time(0));
  int number;
  cout<<"輸入要產生的數字數量:";
  cin>>number;
  int num[100];
  arrayRand(num,number);
  arrayPrint(num,number);
  cout<<"Max:"<<arrayMax(num,number);
}