#include <iostream>
#include <GLFW/glfw3.h>

/*
* In the interest of not dumping the entire opengl codebase into std,
* this file (and any others with graphics code includes) should be unnamespaced.
*/

void error_callback(int err, const char* desc) {
    fprintf(stderr, "Error %d: %s\n", err, desc);
}

int main(void) {
	std::cout << "Hello, world!" << std::endl;
	if (!glfwInit())
	{
        std::cout << "WHUPS." << std::endl;
        return 1;
	}
	//Set errors to be dumped to stderr
	glfwSetErrorCallback(error_callback);

	GLFWwindow* win = glfwCreateWindow(640, 480, "m'window", NULL, NULL);
	if (!win)
	{
        std::cout << "window creation failed." << std::endl;
        return 2;
	}

	while (!glfwWindowShouldClose(win));
}
