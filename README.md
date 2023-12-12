# Workshop Part1: Building a Setting and Menu Page in C with CSFML

Welcome to the workshop! This hands-on session is designed for first-year students to learn how to use the CSFML (Simple and Fast Multimedia Library) in C. The main focus of the workshop is to build generic functions that will assist in creating a setting and a menu page for a simple application.

## Prerequisites
Before starting the workshop, ensure that you have the following prerequisites installed on your system:
- CSFML library
- C compiler (e.g., GCC)

## Workshop Overview

### Part 1: Initializing the Window

In this section, we will focus on creating the `init_window` function, responsible for initializing the window using the `wdw` struct defined in `struct.h`. This function will set up a window with a predefined video mode and title.

#### Instructions

1. Open the `init_struct.c` file in your preferred text editor.

2. Notice that we have already declared the `init_window` function in `init_struct.c` and provided an empty `wdw` struct. Your task is to fill in the function body to initialize the window.

3. Utilize the `sfRenderWindow_create` function from the CSFML library to create a new window.

4. Set the window title to "game" using the `sfRenderWindow_create` function.

5. Enable the window to be closed and resizable by using the flags `sfClose` and `sfResize` in the `sfRenderWindow_create` function.

6. Set the frame rate limit of the window to 60 frames per second using `sfRenderWindow_setFramerateLimit`.

7. Finally, return the initialized `wdw` struct containing the window.

#### Example Code (To help you get started)

```c
#include "struct.h"
#include <SFML/Graphics.h>

wdw init_window()
{
    wdw wind_struct;

    // Fill in the code here to initialize the window

    return wind_struct;
}
