#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

Media::Media(char* newtitle, int* newyear){
  title = newtitle;
  year = newyear;
}

int Media::getType(){
  return *type;
}

char* Media::getTitle(){
  return title;
}

int Media::getYear(){
  return *year;
}