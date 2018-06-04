CPP construction with user defined header file

As classes get longer and more complicated, having all the member function definitions inside the class can make the class harder to manage and work with. C++ provides a way to separate the “declaration” portion of the class from the “implementation” portion.

We can put function declarations inside header files in order to use those functions in multiple files or even multiple projects. 

The idea is to keep all function signatures and members in the header file.
This will allow other project files to see how the class looks like without having to know the implementation.

And besides that, you can then include other header files in the implementation instead of the header.

Running the program

Compile on Ubuntu operating system using the command
	$change directory to the file destination
	$ g++ -o program Cal.h Cal.cpp main.cpp
	$. /final >

