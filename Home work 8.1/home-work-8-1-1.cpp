// https://github.com/studys22/Synergy-Programming-technology

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
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
    void setSex(Sex _sex) {
       sex = _sex;
    }
    void setName(const char* name_) {
        name = (char*)malloc(strlen(name_) + 1);
        strcpy(name, name_);
    }
    char* getName() {
        char* name_= (char*)malloc(strlen(name) + 1);
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

class Student : public Person {
protected:
    unsigned char age_on_start_education;
    
public:
    char* afterYear() {
        age++;
        weight += rand() % 10 - 5;
        char* res;
        strcat(res, name);
        strcat(res, ". Age: ");
        char t[3];
        strcat(res, itoa(age, t, 10));
        strcat(res, ". Weight: ");
        strcat(res, itoa(weight, t, 10));
        strcat(res, ". Sex: ");
        strcat(res, sex == male ? "male" : "female");
        return res;  
    }
};

int main() {
	setlocale(LC_ALL, "ru-RU");

    srand(NULL);

    Student s;
    s.setSex(male);
    s.setName("Иванов Иван");
    s.setAge(18);
    s.setWeight(70);

    char* t = s.afterYear();

    printf("%s\n", t);
    printf("%s\n", s.afterYear());
    printf("%s\n", s.afterYear());	
}
