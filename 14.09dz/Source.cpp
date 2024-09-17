#include <iostream>
using namespace std;

class Student
{
private:
    char fio[50];
    char birth[20];
    char phone[20];
    char city[50];
    char country[50];
    char university[50];
    char groupNum[10];

    void copy(char* destination, const char* source, size_t size)
    {
        for (size_t i = 0; i < size - 1 && source[i] != '\0'; ++i)
        {
            destination[i] = source[i];
        }
        destination[size - 1] = '\0';
    }

public:
    Student()
    {
        copy(fio, "", sizeof(fio));
        copy(birth, "", sizeof(birth));
        copy(phone, "", sizeof(phone));
        copy(city, "", sizeof(city));
        copy(country, "", sizeof(country));
        copy(university, "", sizeof(university));
        copy(groupNum, "", sizeof(groupNum));
    }

    Student(const char* name, const char* birt, const char* ph, const char* c, const char* cnt, const char* univrst, const char* group) {
        copy(fio, name, sizeof(fio));
        copy(birth, birt, sizeof(birth));
        copy(phone, ph, sizeof(phone));
        copy(city, c, sizeof(city));
        copy(country, cnt, sizeof(country));
        copy(university, univrst, sizeof(university));
        copy(groupNum, group, sizeof(groupNum));
    }

    void inputInformation()
    {
        cout << "Enter fio: ";
        cin.getline(fio, sizeof(fio));
        cout << "Enter date of birthday: ";
        cin.getline(birth, sizeof(birth));
        cout << "Enter contact phone number: ";
        cin.getline(phone, sizeof(phone));
        cout << "Enter city: ";
        cin.getline(city, sizeof(city));
        cout << "Enter country: ";
        cin.getline(country, sizeof(country));
        cout << "Enter university name: ";
        cin.getline(university, sizeof(university));
        cout << "Enter group number: ";
        cin.getline(groupNum, sizeof(groupNum));
    }

    void printInformation()
    {
        cout << "Fio: " << fio << endl;
        cout << "Date of Birthday: " << birth << endl;
        cout << "Contact phone number: " << phone << endl;
        cout << "City: " << city << endl;
        cout << "Country: " << country << endl;
        cout << "University: " << university << endl;
        cout << "Group number: " << groupNum << endl;
    }

    const char* getFio() const { return fio; }
    const char* getBirth() const { return birth; }
    const char* getPhone() const { return phone; }
    const char* getCity() const { return city; }
    const char* getCountry() const { return country; }
    const char* getUniversity() const { return university; }
    const char* getGroupNum() const { return groupNum; }
};

int main()
{
    Student student;
    student.inputInformation();
    cout << endl << "Student information: " << endl;
    student.printInformation();

    return 0;
}