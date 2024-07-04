# class and object

#### A simple program to declare a class and object

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

#### a simple program to declare a class and object; class having data members as well as a member function

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

#### a simple program to declare a class and object; class having multiple data members as well as a member function

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

## Constructor And Destructor

* Constructor - Constructor helps to initialize the object of a class
* Destructor - It helps to deallocate the memory of an object.
* defined inside the class

          // Constructor - executes when the object is created
        Cube(){
            cout << "Cube object created; Constructor executed successfully."<<endl;
        }
        // Destructor - executes when the program terminates
        ~Cube(){
            cout << "Cube object destroyed; Destructor executed successfully."<<endl;
        }    

## Setter and Getter
* setter - setting the value of a private variable
* getter - getting/accessing the value of a private variable

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
