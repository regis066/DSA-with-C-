#include <iostream>
using namespace std;

class Rectangle{

    private:
    int length;
    int width;

    public:
    Rectangle(int w, int l){
        width = w;
        length = l;
    }

    // can also use Rectangle(int width, int length)

    public:
    int area (){
        return length*width;
    }

    void setValues(int w, int l);

};
    void Rectangle::setValues(int w, int l){
        width = w;
        length = l;
    };

int main(){
    Rectangle recta(10,5);
    cout<<"The Area is: "<<recta.area()<<endl;
    Rectangle rectb{10,5};
    cout<<"The Area is: "<<rectb.area()<<endl;
    Rectangle* rectc = new Rectangle(10,5);
    cout<<"The Area is: "<<rectc -> area()<<endl;
}