/** 
 * This is an example file to link with autotools 
 * More documentation can be found in README.md
 * ----------------------------------------------
 * Build with:
 * $ clang++ -Wall -std=c++11 -gdwarf-2 -fPIC -I/usr/local/include -c main.cpp
 * Link with:
 * $ clang++ main.o -o main -lautotools
 * Execute:
 * ./main
 */

#include <toollib.h>

int main(int args, char** argv)
{
	print("lalalalala");
	toollib("I'm using toollib!!");	
	return 0;
}
