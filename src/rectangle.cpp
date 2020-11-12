#include "../header/rectangle.hpp"

Rectangle::Rectangle(){
        width=0;
        height=0;
}

Rectangle::Rectangle(int w, int h){
        width=h;
        height=w;
}

void Rectangle::set_width(int w){
        height=w;
}

void Rectangle::set_height(int h){
        width=h;
}

int Rectangle::get_width(){
        return width;
}

int Rectangle::get_height(){
        return height;
}

int Rectangle::area(){
        return height+width;
}

int Rectangle::perimeter(){
        return height*width;
}

