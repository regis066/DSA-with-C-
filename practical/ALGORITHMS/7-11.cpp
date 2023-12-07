#include<iostream>
using namespace std;
int main(){
    int scores[5] = {10,20,30,40,50};
    int *pScore;
    pScore = scores;
    for (int i = 0; i <5 ; i++){
        cout<<" "<<scores[i]; 
    }

    cout<<"the first element "<< *(pScore)<<endl;
    cout<<"THE SECOND ELEMENT "<<*(pScore+1)<<endl;
    cout<<"the third "<< *(pScore+2)<<endl;
    cout<<"the fourth"<< *(pScore+3) <<endl;
    cout<<"the fifth "<<  *(pScore+4)<<endl;
    cout<<"the address of the first element "<<pScore<<endl;


    return 0;
}