#include <iostream>
using namespace std;
int main(){
    int scores[5] = {10,20,30,40,50};
    for (int i= 0 ; i < 5; i++){
        cout<<*(scores+i)<<endl;
    }
    return 0;
}