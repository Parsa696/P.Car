#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    // ویژگی‌ها
    string brand;
    string model;
    int mileage;

    // سازنده‌ی کلاس
    Car(string b, string m, int d) : brand(b), model(m), mileage(d) {}

    // متود drive برای افزایش کیلومتر کارکرد
    void drive(int distance) {
        mileage += distance;
    }

    // متود showData برای نمایش اطلاعات خودرو
    void showData() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Distance driven: " << mileage << "km" << endl;
    }
};

int main() {
    string brand, model;
    int mileage, distance;

    // دریافت اطلاعات خودرو از کاربر
    cout << "Enter the brand of the car: ";
    getline(cin, brand);
    cout << "Enter the model of the car: ";
    getline(cin, model);
    cout << "Enter the initial mileage of the car: ";
    cin >> mileage;

    // ایجاد شیء خودرو با اطلاعات وارد شده
    Car myCar(brand, model, mileage);

    // نمایش اطلاعات اولیه خودرو
    myCar.showData();

    // دریافت مقدار مسافت رانده شده از کاربر و به روز رسانی کیلومتر کارکرد
    cout << "Enter the distance to drive: ";
    cin >> distance;
    myCar.drive(distance);

    // نمایش اطلاعات به روز شده خودرو
    myCar.showData();

    return 0;
}
