#include <iostream>
#include <string>
#include <iomanip>

// Func Prototype
void printLecture(const struct Lecture& lecture);
struct Lecture createLecture(std::string title, std::string author, int duration);

// Create a structure
struct Lecture{
    std::string title;
    std::string author;
    int duration;
};


int main(){
    int a;
    //Create lecture Obj
    struct Lecture oop_the_best = createLecture("Structures", "Igor", 50);
    
    
    // Access the properties of an object
    printLecture(oop_the_best);
    
    return 0;
}

void printLecture(const struct Lecture& lecture){
    std::cout << std::setw(20) << std::left << "Title: " << lecture.title << std::endl;
    std::cout << std::setw(20) << std::left << "Duration: " << lecture.duration / 60 << " minutes" << std::endl;
    
}

struct Lecture createLecture(std::string title, std::string author, int duration){
    struct Lecture oop_the_best;
      // Modify the properties of an object
    oop_the_best.title = title;
    oop_the_best.author = author;
    oop_the_best.duration = duration * 60;

    return oop_the_best;
}
