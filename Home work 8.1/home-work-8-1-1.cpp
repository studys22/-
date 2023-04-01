// https://github.com/studys22/Synergy-Programming-technology

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char* itoa_(int val, int base){
	
	static char buf[32] = {0};	
	int i = 30;
	
	for(; val && i ; --i, val /= base)	
		buf[i] = "0123456789abcdef"[val % base];
	
	return &buf[i+1];
	
}

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
        int v = rand() % 100;
        if (v >= 95) {
            sex = sex == male ? female : male;
        }
        char* res = new char[sizeof(char)*100];
        res[0] = '\0';
        strcat(res, name);
        strcat(res, ". Age: ");
        strcat(res, itoa_(age, 10));
        strcat(res, ". Weight: ");
        strcat(res, itoa_(weight, 10));
        strcat(res, ". Sex: ");
        strcat(res, sex == male ? "male" : "female");
        return res;  
    }
};

int main() {
	setlocale(LC_ALL, "ru-RU");

    srand(time(NULL));

    Student s;
    s.setSex(male);
    s.setName("Иванов Иван");
    s.setAge(18);
    s.setWeight(70);

    for (int i = 0; i < 6; i++) {
        printf("After year %i: %s\n", i + 1, s.afterYear());
    }	
}
