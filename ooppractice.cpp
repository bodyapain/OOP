#include <fstream>
#include <iostream>
using namespace std;
class ExceptionDiv : public exception {
public:
    ExceptionDiv(const char* error) : exception(error) { this->error = error; }
    const char* error_msg() { return error.c_str(); }
private:
    string error;
};
template <typename T>
T proizv(T a, T b) {
    return a * b;
}

/*class Point {
public:
    Point(const Point& other) {
        this->size = other.size;
      
        this->coords = new int[size];
        for (unsigned short i = 0; i < size; ++i) {
            this->coords[i] = other.coords[i];
        }
    }
    Point() {
        size = 2;
        coords = new int[size];
    }
    Point(unsigned short size) {
        this->size = size;
        coords = new int[size];
    }
    Point(int* coords, unsigned short size) {
        this->size = size;
        this->coords = new int[size];
        for (unsigned short i = 0; i < size; ++i) {
            this->coords[i] = coords[i];
        }
    }
    ~Point() {
        delete[] coords;
    }
    const Point& operator = (const Point& other) {
        delete[] coords;
        this->size = other.size;
        this->coords = new int[this->size];
        for (unsigned short i = 0; i < this->size; ++i) {
            this->coords[i] = other.coords[i];
        }
        return *this;
    }
    const Point operator + (const Point& other) {
        unsigned short copy_size = (other.size < this->size) ? other.size : this->size;
        Point ret(copy_size);
        for (unsigned short i = 0; i < copy_size; ++i) {
            ret.coords[i] = this-> coords[i] + other.coords[i];
        }
        return ret;
    }
    bool operator == (const Point& other) {
        bool res = (this->size == other.size);
        if (!res) return false;
        for (int i = 0; i < this->size; ++i) {
            if (this->coords[i] != other.coords[i]) return false;

        }
        return true;
    }
    bool operator != (const Point& other) {
        return !(*this == other);
    }
    void showCoords() {
        for (unsigned short i = 0; i < size; ++i) {
            cout << coords[i] << " ";
        }
    }
private:
    unsigned short size;
    int* coords;
};
class Weapon {
public:
    virtual void Shoot() = 0;
};
class Gun : public Weapon {
public:
    void Shoot() override {
        cout << "Выстрел из пистолета!" << endl;
    }
};
class Rifle : public Weapon {
    void Shoot() override {
        cout << "Выстрел из ружья!" << endl;
    }
};
class Automat : public Weapon {
    void Shoot() override {
        cout << "Выстрел из автомата!" << endl;
    }
};
class MachineGun : public Weapon {
    void Shoot() override {
        cout << "Выстрел из пулемета!" << endl;
    }
};
class Player {
public:
    Player() { w = NULL; }
    void setWeapon(Weapon* w) { this->w = w; }
    void Shoot() {
        if (w == NULL) cout << "Нечем стрелять" << endl;
        else w->Shoot();
    }
private:
    Weapon* w;
};
int div_ab(int a, int b) {
    if (a <= 0 || b <= 0) throw ExceptionDiv("a <= 0 || b <= 0");
    if (b == 0) throw ExceptionDiv("b = 0!");
    return a / b;
}*/
class Point {
public:
    Point(T x, T y) { this->x = x; this->y = y; }
    void show() {
        cout << "тип x: " << typeid(x).name() << endl;
        cout << "тип y: " << typeid(y).name() << endl;
        cout << "x = " << x << " y = " << y << endl;
    }
private:
    T x, y;
};
int main()
{   
    setlocale(LC_ALL, "rus");
    /*int coords[] = {1,2}, coords2[] = {1,2,3};
    Point p1(coords, 2), p2(coords2, 3);
    Point c = p2 + p1;
    c.showCoords();
    */
    /*ifstream ifs;
    ifs.exceptions(ifstream::badbit | ifstream::failbit);
   
    try {
        cout << "Пробуем открыть файл\n";
        ifs.open("myfile.txt");
        cout << "Файл успешно открыт";
        ifs.close();
    }
    catch (const ifstream::failure& e) {
        cout << e.what() << endl;
        cout << "Невозможно открыть файл \n";
    }
    catch (const std::exception& e) {
        cout << e.what() << endl;
    }
    try {
        div_ab(1, 0);

    }
    catch (ExceptionDiv& e) {
        cout << e.error_msg() << endl;
    }
    catch (const exception& e) {
        
    }*/
    Point<int> pt(3, 4);
}

