#include <iostream>
#include <time.h>
using namespace std;
int main(){
    srand(time(0));
    int dice_faces;
    int times;
    cout<<"輸入骰子的面數:";
    cin>>dice_faces;
    cout<<"輸入骰子的次數:";
    cin>>times;
    int i,counter[100];
    for(int i=0;i<dice_faces;i++){
        counter[i]=0;
    }
    int number;
    for(i=1;i<=times;i++){
        int dice=rand()%dice_faces+1;
        for(number=1;number<=dice_faces;number++){
            if(dice==number){
                counter[number-1]++;
            }
        }
    }
    for(i=0;i<dice_faces;i++){
        cout<<i+1<<" "<<counter[i]<<endl;
    }
}