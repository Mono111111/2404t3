#include "File.h"

//constructor and initialize
File::File(string name, string content, Date& date):name(name), content(content), date(date){}

bool File::lessThan(Date& d){
    if(date.lessThan(d)){
        return true;
    }
    else{
        return false;
    }
}

void File::print(){
    cout << "The File title: " << name <<endl;
    date.print();
}

void File::printContents(){
    print();
    cout << content <<endl;
}