// https://github.com/studys22/Synergy-Programming-technology

#include <locale.h>
#include <stdio.h>
#include <string.h>

enum Sex {
    male,
    female
};

class Person {
protected:
    char* name;
    unsigned char age, weight;
    Sex sex;
public:
    void setName(const char* name_) {
        strcpy(name, name_);
    }
    char* getName() {
        char* name_;
        strcpy(name_, name);
        return name_;
    }
    void setAge(const unsigned char age_) {
        age = age_;
    }
    void setWeight(const unsigned char weight_) {
        weight = weight_;
    }
};

class Student : Person {
protected:
    unsigned char age_on_start_education;

};

int main() {
	setlocale(LC_ALL, "ru-RU");

	
}
