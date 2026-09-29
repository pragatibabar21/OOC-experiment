#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
 {
        std::cout << "Rectangle object destroyed." << std::endl;
    }

 
    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    void setLength(double len) {
        length = len;
    }

    void setWidth(double wid) {
        width = wid;
    }
};
#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
 {
        std::cout << "Rectangle object destroyed." << std::endl;
    }

 
    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    void setLength(double len) {
        length = len;
    }

    void setWidth(double wid) {
        width = wid;
    }
};
#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
 {
        std::cout << "Rectangle object destroyed." << std::endl;
    }

 
    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    void setLength(double len) {
        length = len;
    }

    void setWidth(double wid) {
        width = wid;
    }
};
construct()
{
    area = 0;
}

construct(int a, int b)
{
    area = a * b;
}

void disp()
{
    cout << area << endl;
}
};

int main()
{
    construct o;
    construct o2(10, 20);

    o.disp();
    o2.disp();
    return 1;
}