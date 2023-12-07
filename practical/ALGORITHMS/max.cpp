#include<iostream>
using namespace std;

int reverseArray(int array[]){
    int size = sizeof(array)/sizeof(int);
    int start = 0;
    int end = size -1;


    while (start < end){
        int temp = array[start]; 
        array[end] = temp;
        array[start] = array[end];

        start++;
        end--;

    }
    {
        
    }
}
int main(){
    int size,max,min;
    int sum =0;
    int i;
    cout<<"Enter the size of an array:"<<endl;
    cin>>size;

    int arr[size];

    for(int i =0 ; i <size ; i++){
        cout<<"Enter an element: "<<endl;
        cin>>arr[i];
    }
    for(int i =0 ; i <size ; i++){
        sum += arr[i];
    }
    double average = sum/size;

    cout<<"Sum: "<<sum<<", Average: "<<average<<endl;

    max = arr[0];
    for (i = 1; i <size ; i++){
        if(max < arr[i]){
            max = arr[i];
        }
        continue;
    }

    cout<<"The largest element is "<<max<<endl;

    min=arr[0];
       for (i = 1; i <size ; i++){
        if(min > arr[i]){
            min = arr[i];
        }
        continue;
    }

        cout<<"The Lowest element is "<<min<<endl;
    reverseArray(arr);
    for (i =0 ; i < size ; i++){
        cout<<arr[i]<<endl;
    }


    return 0;

}