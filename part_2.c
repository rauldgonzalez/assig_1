#include <iostream>
#include <string>
using namespace std;

//Parent class
class animal {
    public:
        //Constructor
        animal() {
        this->name = "No name";
        this->age = 0;
        }
        //Destructor
        ~animal() {
            cout << "Class removed" << endl;
        }

        //Set function
        virtual void set_value() {}

    protected:
        //Values:
        string name;
        int age;
};

//Child classes

//  Zebra:
class zebra : public animal {
    public:
        //Constructors
        zebra() {
            this->animal_type = "Zebra";
            this->place = "Africa";
        }

        void set_value( void ) {
            cout << "Age of " << this->animal_type << ": ";
            cin >> age;
            cout << "Name of " << this->animal_type << ": ";
            cin >> name;
        }

        void data( void ) {
            cout << "Animal type: " << animal_type << endl;
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Place of origin: " << place << endl;
        }

    private:
        string animal_type;
        string place;
};

//  Dolphin
class dolphin : public animal {
    public:
        //Constructors
        dolphin() {
            this->animal_type = "Dolphin";
            this->place = "Ocean";
        }

        void set_value( void ) {
            cout << "Age of " << this->animal_type << ": ";
            cin >> age;
            cout << "Name of " << this->animal_type << ": ";
            cin >> name;
        }

        void data( void ) {
            cout << "Animal type: " << animal_type << endl;
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Place of origin: " << place << endl;
        }

    private:
        string animal_type;
        string place;
};

//Main:
int main()
{
    //Classes
    zebra ze_1;
    dolphin dol_1;

    //Loading info
    cout << "Loading information: " << endl;
    ze_1.set_value();
    cout << endl;
    dol_1.set_value();
    cout << endl;

    //Printing info
    cout << "Animal information: " << endl;
    ze_1.data();
    cout << endl;
    dol_1.data();

    return 0;
}

