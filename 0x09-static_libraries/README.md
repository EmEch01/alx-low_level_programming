0x09. C - Static libraries
A static library is a collection of object files that are merged by the linker with another object file to form a final executable
The main reason for writing a library is to allow code reusability, thus saving considerable development time

Create the static library libmy.a containing all the functions listed below

If you haven’t coded all of the above functions create empty ones with the right prototype.
Don’t forget to push your main.h file to your repository. It should at least contain all the prototypes of the above functions.

Without libraries what have we? We have no past and no future
Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.
