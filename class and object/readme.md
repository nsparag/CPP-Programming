
## A simple program to declare a class and object

    class Cube{
        public:                    // making height, width, and length public so that they are accessible outside class as well.
            double height = 1.0;
            double width = 1.0;
            double length = 1.0;
    };
    
    int main() {
        Cube cube1;                 // cube1 is object of class Cube
        double volume = cube1.height*cube1.length*cube1.width;
        cout << "Volume = " << volume << endl;
        return 0;
    }


***

## a simple program to declare a class and object; class having data members as well as a member function

    class Cube{
        private:                    // making height, width, and length are private so they are accessible inside the class only.
            double height = 1.0;
            double width = 1.0;
            double length = 1.0;
        public:
        void volume(){              // public function
            double vol = height*length*width;
            cout << "Volume = " << volume << endl;
        }
    };
    
    int main() {
        Cube cube1;
        cube1.volume();
        return 0;
    }

## a simple program to declare a class and object; class having multiple data members as well as a member function

    class Cube{
        private:                    // making height, width, and length are private so they are accessible inside the class only.
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

    
