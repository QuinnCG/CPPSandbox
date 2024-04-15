#include <iostream>
#include <cassert>

#include "GLFW/glfw3.h"

int main()
{
	int glfwResult = glfwInit();
	assert(glfwResult == GLFW_TRUE);

	GLFWwindow* window = glfwCreateWindow(800, 600, "OpenGL", nullptr, nullptr);
	glfwMakeContextCurrent(window);

	while (glfwWindowShouldClose(window) == GLFW_FALSE)
	{
		glfwSwapBuffers(window);
		glfwPollEvents();
	}
}
