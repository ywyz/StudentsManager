//
// Created by yw980 on 2022/12/4.
//

#ifndef STUDENTSMANAGER_COURSE_H
#define STUDENTSMANAGER_COURSE_H

#include <iostream>
#include <string>


using namespace std;


class Course {
private:
    string CourseName;
    long CourseID;
    float CourseGrade;
public:
    Course(string name, long id, float grade);

    void setCourseName(string name);

    string getCourseName();

    void setCourseID(long id);

    long getCourseID();

    void setCourseGrade(float grade);

    float getCourseGrade();
};


#endif //STUDENTSMANAGER_COURSE_H
