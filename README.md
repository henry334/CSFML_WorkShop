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

1. Open the `init_struct.c` file.

2. Notice that we have already declared the `init_window` function in `init_struct.c` and provided an empty `wdw` struct. Your task is to fill in the function body to initialize the window.

3. Utilize the `sfRenderWindow_create` function from the CSFML library to create a new window.

4. Set the window title to "game" using the `sfRenderWindow_create` function.

5. Enable the window to be closed and resizable by using the flags `sfClose` and `sfResize` in the `sfRenderWindow_create` function.

6. Set the frame rate limit of the window to 60 frames per second using `sfRenderWindow_setFramerateLimit`.

7. return the initialized `wdw` struct containing the window.

8. uncomment the line start(&wind_struct); that is in the main and you should see a window open

#### Example Code (To help you get started)

```c
#include "struct.h"

wdw init_window()
{
    wdw wind_struct;

    // Fill in the code here to initialize the window

    return wind_struct;
}
```

### Part 2: Creating Game Sprites

Now, let's focus on creating the `create_object` function in the `create_sprites.c` file. This function will be responsible for initializing a game sprite using the `sprites` struct defined in `struct.h`. The sprite will be loaded from a given image file, positioned at a specific vector, and cropped with a provided rectangle.

#### Instructions

1. Open the `create_sprites.c` file in your preferred text editor.

2. In `create_sprites.c`, you'll find a declaration for the `create_object` function with an empty body and an allocated `sprites` struct using `malloc`. Your task is to fill in the function body to initialize the sprite.

3. Use the `sfTexture_createFromFile` function from CSFML to create a texture from the given `path_to_spritesheet`.

4. Create a new sprite using `sfSprite_create()`.

5. Assign the created texture, vector (`pos`), and rectangle (`rect`) to the corresponding members of the `sprites` struct.

6. Set the position of the sprite using `sfSprite_setPosition` and passing the vector (`pos`).

7. Set the texture of the sprite using `sfSprite_setTexture` and passing the created texture.

8. Set the texture rectangle of the sprite using `sfSprite_setTextureRect` and passing the provided rectangle (`rect`).

9. Finally, return the initialized `sprites` struct.

#### Example Code (To help you get started)

```c
#include "struct.h"

sprites *create_object(const char *path_to_spritesheet,
    sfVector2f pos, sfIntRect rect)
{
    sprites *obj = malloc(sizeof(*obj));

    // Fill in the code here to initialize the sprite

    return obj;
}
```

### Part 3: Creating Text Objects

In this step, we will create the `create_text` function in the `create_text.c` file. This function is responsible for initializing a text object using the `text` struct defined in `struct.h`. The text will be set with a given string, positioned at a specific vector, and stylized with a specified size and color.

#### Instructions

1. Open the `create_text.c` file.

2. In `create_text.c`, you'll find a declaration for the `create_text` function with an empty body and an allocated `text` struct using `malloc`. Your task is to fill in the function body to initialize the text.

3. Use the `sfFont_createFromFile` function from CSFML to create a font from the provided path (`"./ressources/ttf/arial.ttf"`).

4. Create a new text object using `sfText_create()`.

5. Set the string of the text object using `sfText_setString` and passing the provided string (`string`).

6. Set the font of the text object using `sfText_setFont` and passing the created font.

7. Set the character size of the text object using `sfText_setCharacterSize` and passing the provided size (`size`).

8. Set the color of the text object using `sfText_setColor` and passing the provided color.

9. Set the position of the text object using `sfText_setPosition` and passing the provided vector (`pos`).

10. Assign the created font and text object to the corresponding members of the `text` struct.

11. Finally, return the initialized `text` struct.

#### Example Code (To help you get started)

```c
#include "struct.h"

text *create_text(char *string, sfVector2f pos, int size, sfColor color)
{
    text *obj = malloc(sizeof(*obj));

    // Fill in the code here to initialize the text

    return obj;
}
```
