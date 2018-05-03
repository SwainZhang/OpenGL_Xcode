//
//  main.cpp
//  BaseOpenGL
//  Copyright © 2018年 emery. All rights reserved.
//

#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "hello_triangle.h"
#include "SOIL2/SOIL2.h"
#include "res/shaders/shader.h"
#include "res/shaders/shader_sample.h"
int main(int argc, const char * argv[]) {
    
   // hello_triangle_main();
    
    shader_sample_main();
    
    return 0;
    
}
