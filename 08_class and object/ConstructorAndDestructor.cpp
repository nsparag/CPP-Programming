// introduction to Constructor & Destructor
// Constructor - Constructor helps to initialize the object of a class
// Destructor - It helps to deallocate the memory of an object.

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

        // Constructor - executes when the object is created
        Cube(){
            cout << "Cube object created; Constructor executed successfully."<<endl;
        }
        // Destructor - executes when the program terminates
        ~Cube(){
            cout << "Cube object destroyed; Destructor executed successfully."<<endl;
        }
};

int main() {
    Cube cube1;
    cube1.input();
    cube1.displayVol();
    return 0;
}
