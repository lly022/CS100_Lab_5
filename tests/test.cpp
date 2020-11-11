#include "../header/rectangle.hpp"

#include "gtest/gtest.h"

TEST(RectangleTest, NoParamConstructorWidth){
        Rectangle* rect = new Rectangle();
        EXPECT_EQ(rect->get_width(), 0);
}

TEST(RectangleTest, NoParamConstructorHeight){
        Rectangle* rect = new Rectangle();
        EXPECT_EQ(rect->get_height(), 0);
}

TEST(RectangleTest, TwoParamConstructorWidth){
        Rectangle* rect = new Rectangle(5, 4);
        EXPECT_EQ(rect->get_width(), 5);
}

TEST(RectangleTest, TwoParamConstructorHeight){
        Rectangle* rect = new Rectangle(5, 4);
        EXPECT_EQ(rect->get_height(), 4);
}

TEST(RectangleTest, Area1) {
        Rectangle* rect = new Rectangle(2,2);
        EXPECT_EQ(rect->area(),4);
}

TEST(RectangleTest, Area2) {
        Rectangle* rect = new Rectangle(2,4);
        EXPECT_EQ(rect->area(),8);
}

TEST(RectangleTest, Area3) {
        Rectangle* rect = new Rectangle(2,0);
        EXPECT_EQ(rect->area(),0);
}

TEST(RectangleTest, Perimeter1) {
        Rectangle* rect = new Rectangle(2,2);
        EXPECT_EQ(rect->perimeter(),8);
}

TEST(RectangleTest, Perimeter2) {
        Rectangle* rect = new Rectangle(2,4);
	EXPECT_EQ(rect->perimeter(),12); 
}

TEST(RectangleTest, Perimeter3) {
        Rectangle* rect = new Rectangle(2,0);
        EXPECT_EQ(rect->perimeter(),4);
}
