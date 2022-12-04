//
// Created by yw980 on 2022/12/4.
//

#include "Course.h"

using namespace std;

Course::Course(string name, long id, float grade) {
    this->CourseName = name;
    this->CourseID = id;
    this->CourseGrade = grade;
}

void Course::setCourseName(string name) {
    this->CourseName = name;
}

void Course::setCourseID(long id) {
    this->CourseID = id;
}

void Course::setCourseGrade(float grade) {
    this->CourseGrade = grade;
}

string Course::getCourseName() {
    return this->CourseName;
}

float Course::getCourseGrade() {
    return this->CourseGrade;
}

long Course::getCourseID() {
    return this->CourseID;
}