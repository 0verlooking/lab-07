#include <iostream>
#include <cmath>

class Vector {
private:
    double x, y, z;

public:
    Vector(double xVal, double yVal, double zVal) : x(xVal), y(yVal), z(zVal) {}

    double calculateMagnitude() {
        return std::sqrt(x * x + y * y + z * z);
    }

    void normalize() {
        double magnitude = calculateMagnitude();
        if (magnitude != 0.0) {
            x /= magnitude;
            y /= magnitude;
            z /= magnitude;
        }
    }

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    double getZ() const {
        return z;
    }
};

int main() {
    // Створення об'єкту класу "Вектор" та ініціалізація його координат
    Vector v(3.0, 4.0, 5.0);

    // Обчислення та виведення модуля вектора
    double magnitude = v.calculateMagnitude();
    std::cout << "Magnitude: " << magnitude << std::endl;

    // Нормалізація вектора
    v.normalize();

    // Виведення нормалізованого вектора
    std::cout << "Normalized Vector: (" << v.getX() << ", " << v.getY() << ", " << v.getZ() << ")" << std::endl;

    return 0;
}