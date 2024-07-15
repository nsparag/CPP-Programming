# Class and object

* A **class** can be described as **data and some functionality on that data, wrapped into one**.
  * A class is a user-defined type.
  * It consists of members.
  * The members are data members and member functions.
* An **instance of a class** is called an **object**.

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

## Constructor And Destructor

* Constructor - Constructor helps to initialize the object of a class
* Destructor - It helps to deallocate the memory of an object.
* defined inside the class

  Constructor - executes when the object is created
  
        Cube(){
            cout << "Cube object created; Constructor executed successfully."<<endl;
        }

  Destructor - executes when the program terminates
  
        ~Cube(){
            cout << "Cube object destroyed; Destructor executed successfully."<<endl;
        }
**Example Constructor Function**

    class Cube{
        private:
            double height = 1.0;
            double width = 1.0;
            double length = 1.0;
        public:    
            Cube(){
                height = 10;
                width = 10;
                length = 10;
            }
            Cube(double h, double w, double l){
                height = h;
                width = w;
                length = l;
            }
    };
    
    int main() {
        Cube cube1;                 // cube1 object is initialised with height = 10, width = 10 and length = 10
        Cube cube2(20,20,10);       // cube2 object is initialised with height = 20, width = 20 and length = 20
        return 0;
    }

**Copy Constructors**
* a copy constructor is a special member function that creates a new object of the same class by initializing it with an existing object of the same class.
* It's essentially used to copy the state of one object to another.

Example Constructor Function

    class Cube{
        private:
            double height = 1.0;
            double width = 1.0;
            double length = 1.0;
        public:    
            Cube(double h, double w, double l){
                height = h;
                width = w;
                length = l;
            }
            Cube(const Cube& cb){
                height = cb.height;
                width = cb.width;
                length = cb.length;
            }
    };
    
    int main() {
        Cube cube2(20,20,10);       // cube2 object is initialised with height = 20, width = 20 and length = 20
        Cube cube3(cube2);          // cube2 object is initialised with height = 20, width = 20 and length = 20; same as that of cube2
        return 0;
    }
