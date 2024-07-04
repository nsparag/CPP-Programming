// Introduction to setter & getter
// setter - setting the value of a private variable
// getter - getting/accessing the value of a private variable

#include <iostream>
using namespace std;

class Cube{
    private:
        double height = 1.0;
        double width = 1.0;
        double length = 1.0;

    private:
        double volume(){
            double vol = height*length*width;
            return vol;
        }
    public:    
        void input(){
            cout << "Enter height :";
            cin >> height;
            cout << "Enter width :";
            cin >> width;
            cout << "Enter length :";
            cin >> length;
        }
        void displayVol(){
            cout << "Volume = " << volume() << endl;
        }
        //setter - to set values of private variables
        void set_height(double height_parameter){
            height = height_parameter;
        }
        void set_width(double width_parameter){
            width = width_parameter;
        }
        void set_length(double length_parameter){
            length = length_parameter;
        }        

        //setter - to get/access values of private variables
        double get_height(){
            return height;
        }
        double get_width(){
            return width;
        }
        double get_length(){
            return length;
        }  

};

int main() {
    Cube cube1;
    cube1.input();
    cube1.displayVol();

    cube1.set_height(10);   // calling setter
    cube1.displayVol();

    cout << cube1.get_height()<<endl;   // accessing privat evariable using getter

    return 0;
}
