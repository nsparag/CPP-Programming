// a simple program to declare a class and object; clas having data members as well as member function

#include <iostream>
using namespace std;

class Cube{
    private:                    // making height, width, and length private so that they are accessible inside class only.
        double height = 1.0;
        double width = 1.0;
        double length = 1.0;
    public:
    void displayVol(double vol){
        cout << "Volume = " << vol << endl;
    }
    double volume(){              // public function
        double vol = height*length*width;
        return vol;
    }
    void input(){
        cout << "Enter height :";
        cin >> height;
        cout << "Enter width :";
        cin >> width;
        cout << "Enter length :";
        cin >> length;
    }

};

int main() {
    Cube cube1;
    cube1.input();
    double vol = cube1.volume();
    cube1.displayVol(vol);
    return 0;
}
