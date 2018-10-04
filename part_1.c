#include <iostream>

using namespace std;

//Parent class
class shape {

    public:
        //Constructors

        shape() {
            this->x = 0;
            this->y = 0;
        }

        shape( float x_int, float y_int ) {
            setVal(x_int, y_int);
        }

        //Destructor
        ~shape() {
            cout << "Class removed" << endl;
        }

        //Setter function:
        void setVal(float x_int, float y_int ) {
            this->x = x_int;
            this->y = y_int;
            cout << "Input values: " << endl;
            cout << "X value = " << this->x << endl;
            cout << "Y value = " << this->y << endl;
        }

        //Getter functions:
        float getX( void ) {
            return this->x;
        }

        float getY( void ) {
            return this->y;
        }

    protected:
        float x, y;
};

//Child classes:
class rectangle : public shape {
    public:
    //Area functions:
    float area( float x_in, float y_in ) {
        return x_in*y_in;
    }

    float area( void ) {
        return rectangle::area( this->x, this->y );
    }
};

class triangle : public shape {
    public:
    //Area functions:
    float area( float x_in, float y_in ) {
        return x_in*y_in/2.0;
    }

    float area( void ) {
        return triangle::area(this->x, this->y );
    }
};

//----

int main()
{
    //Classes
    rectangle rect_1;
    triangle tri_1;

    //Dimensions
    float width = 10, height = 10;

    //Loading size
    cout << "Rectangle" << endl;
    rect_1.setVal(width, height);
    cout << "Triangle" << endl;
    tri_1.setVal(width, height);

    //Printing area
    cout << "Area values:" << endl;
    cout << "Rectangle area = " << rect_1.area() << endl;
    cout << "Triangle area = " << tri_1.area() << endl;

    return 0;
}

