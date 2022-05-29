#include <iostream>

struct adress
{
    std::string country;
    std::string city;
    std::string street;
    int building;
    int appartment;
    int index;
};

void print(adress &a) {
    std::cout << "Город: " << a.city << "\n"
        << "Улица: " << a.street << "\n"
        << "Номер дома: " << a.building << "\n"
        << "Номер квартиры: " << a.appartment << "\n"
        << "Индекс: " << a.appartment << "\n\n";
}

int main() {
    adress a1 = {"Россия", "Москва", "Арбат", 12, 8, 123456};
    adress a2 = {"Россия", "Ижевск", "Пушкина", 59, 143, 953769};
    print(a1);
    print(a2);

    return 0;
}