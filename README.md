# Simple BMP image writer in C++
### What is this all about?
This is super simlpe header file that includes 2 things: A Color Struct and a function that generates a bmp image from a ``` vector<vector<Color> >```.  This is project IS NOT supposed to be written with Industry Standards in mind. It is a simple header file mostly put on github for my convenience and the convenience of others.

### How to use it
Simply put the BMP_Writer.h file in your directory and include it in your project. Then you will need a ```vector<vector<Color> >```(Color struct is in the header file) which you will pass as an argument. There is also an example "test.cpp" which you can check out. It creates a 1024x1024 image and sets all pixels to a purple color.

I hope that you found this file helpful.
