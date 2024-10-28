#include <iostream>
using namespace std;
class Hair_Dryer {
public:
    string brand;
    int price;
    string color;
    string model;
    int power_in_w;
    string attachment1;
    string attachment2;
    double weight;
    string current_attachment;

    void turn_on_dryer() {
        cout << "The hair dryer is on!\n";
    }

    void choose_attachment(string attachment) {


        if (attachment == "Concentrator" || attachment == "concentrator") {
            cout << "You chose the first attachment: " << attachment << "!\n";
            current_attachment = attachment;
        }
        else if (attachment == "Diffuser" || attachment == "diffuser") {
            cout << "You chose the second attachment: " << attachment << "!\n";
            current_attachment = attachment;
        }
        else {
            throw "Invalid value!";
        }
    }

    void start_drying() {
        cout << "Drying your hair with: " << current_attachment << "!\n";
    }
    void dry_clothes() { // почему бы не посушить феном одежду?)) экспресс-метод
        cout << "Drying your clothes!\n";
    }
    void turn_off_dryer() {
        cout << "The hair dryer is off!\n\n";
    }
};

class Dog {
public:
    string name;
    double age;
    string sex;
    string breed;
    string fur_color;
    string owner;
    int paws;
    bool is_alive;
    string fav_food;
    string activity;
    int energy;
    void show_owner() {
        cout << "The owner(-s) of this dog: " << owner << "\n";
    }
    void show_name() {
        cout << "Name of this dog: " << name << "\n";
    }
    void show_fav_food() {
        cout << "Favourite food of this dog: " << fav_food << "\n";
    }
    void make_sound() {
        cout << "WOOF WOOF WOOF!\n"; // гав гав гав :)
    }
    void sleep() {
        if (energy <= 30) {
            cout << "Dog is sleeping right now, he/she is tired and needs some rest!\n";
        }
        else {
            cout << "Dog is full of energy and doesn't want to sleep now. He/She wants to play with you!\n";
        }
    }
    void do_activity() {
        cout << "What this dog is doing right now: " << activity << "\n";
    }
    void play() {
        if (energy >= 50) {
            cout << "Dog is full of energy at the moment! He/She is ready to play with you. Have fun!\n";
        }
        else {
            cout << "Oops! Dog is too tired to play with you!\n";
        }
    }
    void eat(string meal) {
        cout << "Dog is eating " << meal << " right now!\n\n";
    }
};

class Phone {
public:
    string brand;
    string model;
    string color;
    int storage_in_gb;
    double screen_diagonal;
    string operating_system;
    int cameras_number;
    int weight_grams;
    double width_in_mm;
    double height_in_mm;
    string screen_material;
    string corpus_material;
    double battery_capacity_mah;
    int charge;
    int apps_number;
    int photos_number;
    string current_app;

    void turn_on_phone() {
        cout << "You turned on the phone! You can use it now!\n";
    }
    void charge_phone() {
        if (charge < 100)
            cout << "The phone is charging now!\n";
        else
            cout << "The phone is already charged!\n";
    }
    void show_apps_number() {
        cout << "Number of the installed applications: " << apps_number << "\n";
    }
    void install_new_app() {
        if (apps_number < 500) {
            apps_number += 1;
            cout << "You have installed new application successfully! Number of the apps on your phone right now: " << apps_number << "\n";
        }
        else {
            cout << "You have installed the maximum number of applications! Your phone is out of free memory. To install a new application, you must clear the memory on your phone!\n";
        }
    }
    void delete_app(int delete_number) {
        if (delete_number <= 0)
            throw "You entered invalid value! Number must be positive!\n";
        else {
            apps_number -= delete_number;
            cout << "You have deleted the chosen applications successfully! Updated number of apps on your phone: " << apps_number << "\n";
        }
    }
    void turn_on_app() {
        cout << "Currently running application: " << current_app << "\n";
    }
    void make_photo(int photos_num) {

        if ((current_app == "camera" || current_app == "Camera") && photos_num > 0) {
            cout << "You have made " << photos_num << " photos successfully!\n";
        }
        else {
            cout << "You need to turn on the phone's camera to make a photo! / Number or photos you want to make must be positive!\n";
        }
    }
    void delete_photo(int delete_num) {

        if (delete_num <= 0) {
            throw "Invalid value! Number of photos you want to delete can't be negative or zero. Number must be positive!\n";
        }
        else if (photos_number > 0) {
            photos_number -= delete_num;
            cout << "You have deleted the chosen number of photos successfully! Updated number of photos: " << photos_number << "\n";
        }
        else {
            cout << "You don't have photos to delete!\n";
        }

    }

    void turn_on_music(string song_name) {
        cout << "Currently playing song: " << song_name << "\n";
    }
    void turn_off_music() {
        cout << "The music is turned off successfully!\n";
    }
    void turn_off_phone() {
        cout << "The phone is turned off successfully!\n\n";
    }

};
class Full_Name {
public:
    string name;
    string surname;
    string patronymic;
};
class Birthday_Date {
public:
    int day;
    int month;
    int year;
};
class Student {
public:
    Full_Name full_name;
    Birthday_Date birthday;
    int* grades;
    int age;
    string email;
    string phone_number;
    int attendance;
    bool late;

    void visit_class() {
        cout << "The student is currently in class.\n";
    }

    void skip_lesson() {
        attendance -= 10; // вычитается в процентах
        cout << "The student decided to skip the class!\n";
    }

    void is_late() {
        if (late == true)
            cout << "The student came late today!\n";
        else
            cout << "The student came on time today!\n";
    }

    void show_attendancy() {
        if (attendance == 0)
            cout << "Your attendance is at 0%. This is unacceptable. You must start attending classes to improve your progress.\n";
        else
            cout << "You don't have problems with attendance: " << attendance << " %. Keep it up!\n";
    }

    void print_full_name() {
        cout << "Name of the student: " << full_name.name << "\n";
        cout << "Surname of the student: " << full_name.surname << "\n";
        cout << "Patronymic of the student: " << full_name.patronymic << "\n";
    }

    void print_birthday_date() {
        cout << "Date of birthday of the student: " << birthday.day << "." << birthday.month << "." << birthday.year << "\n";
    }


    void fill_grades(int number) {
        grades = new int[number];
        cout << "Please enter " << number << " grades\n";
        for (int i = 0; i < number; ++i) {
            cout << "Grade " << (i + 1) << ": ";
            cin >> grades[i];
        }
    }

    void print_grades(int number) {
        for (int i = 0; i < number; ++i) {
            cout << "Grade " << (i + 1) << ": " << grades[i] << "\n";
        }
    }

    void free_memory() {
        delete[] grades;
        grades = nullptr;
    }
};
int main() {
    Hair_Dryer dryer;
    dryer.brand = "Philips";
    dryer.price = 2299;
    dryer.color = "black";
    dryer.model = "BHD274/00";
    dryer.power_in_w = 2200;
    dryer.attachment1 = "Concentrator";
    dryer.attachment2 = "Diffuser";
    dryer.weight = 0.85;
    dryer.turn_on_dryer();
    dryer.choose_attachment("Diffuser");
    dryer.start_drying();
    dryer.dry_clothes();
    dryer.turn_off_dryer();

    Dog dog;
    dog.name = "Booba";
    dog.age = 3.5;
    dog.sex = "Male";
    dog.breed = "Pug"; // мопсик
    dog.fur_color = "Black";
    dog.owner = "Bob";
    dog.paws = 4;
    dog.is_alive = true;
    dog.fav_food = "Meat-flavored dog food";
    dog.activity = "Lying on the sofa :)";
    dog.energy = 65;
    dog.show_owner();
    dog.show_name();
    dog.show_fav_food();
    dog.make_sound();
    dog.sleep();
    dog.do_activity();
    dog.eat("sausage");

    Phone phone;
    phone.brand = "iPhone";
    phone.model = "15 Pro Max";
    phone.color = "titanium blue";
    phone.storage_in_gb = 256;
    phone.screen_diagonal = 6.7;
    phone.operating_system = "IOS";
    phone.cameras_number = 3;
    phone.weight_grams = 221;
    phone.width_in_mm = 76.7;
    phone.height_in_mm = 159.9;
    phone.screen_material = "Ceramic Shield";
    phone.corpus_material = "aluminum and titanium";
    phone.battery_capacity_mah = 4.422;
    phone.charge = 54;
    phone.apps_number = 100;
    phone.photos_number = 2000;
    phone.current_app = "Camera";
    phone.turn_on_phone();
    phone.charge_phone();
    phone.show_apps_number();
    phone.install_new_app();
    phone.delete_app(7);
    phone.turn_on_app();
    phone.make_photo(100);
    phone.delete_photo(99);
    phone.turn_on_music("Never let me down again");
    phone.turn_off_music();
    phone.turn_off_phone();

    Student student;
    student.full_name.name = "Daryna";
    student.full_name.surname = "Onopko";
    student.full_name.patronymic = "Serhiivna";
    student.birthday.day = 29;
    student.birthday.month = 11;
    student.birthday.year = 1998;
    student.age = 25;
    student.email = "darynaonopko98@gmail.com";
    student.phone_number = "+380967092691";
    student.attendance = 90;
    student.late = false;
    student.visit_class();
    student.skip_lesson();
    student.is_late();
    student.show_attendancy();
    student.print_full_name();
    student.print_birthday_date();
    student.fill_grades(10);
    student.print_grades(10);
    student.free_memory();
}
