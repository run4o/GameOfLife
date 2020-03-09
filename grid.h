/**
 * Declares a class representing a 2d grid of cells.
 * Rich documentation for the api and behaviour the Grid class can be found in grid.cpp.
 *
 * The test suites provide granular BDD style (Behaviour Driven Development) test cases
 * which will help further understand the specification you need to code to.
 *
 * @author 965075
 * @date March, 2020
 */
#pragma once

 // Add the minimal number of includes you need in order to declare the class.
 // #include ...
#include <ostream>
#include <string>
 /**
  * A Cell is a char limited to two named values for Cell::DEAD and Cell::ALIVE.
  */
enum Cell : char {
	DEAD = ' ',
	ALIVE = '#'
};

/**
 * Declare the structure of the Grid class for representing a 2d grid of cells.
 */
class Grid {
	// How to draw an owl:
	//      Step 1. Draw a circle.
	//      Step 2. Draw the rest of the owl.

private:
	unsigned int width;
	unsigned int height;
	Cell** matrix;
public:
	Grid();
	Grid(unsigned int square_size);
	Grid(unsigned int width, unsigned int height);
	unsigned int get_width();
	unsigned int get_height();
	unsigned int get_total_cells();
	unsigned int get_alive_cells();
	unsigned int get_dead_cells();
	void resize(unsigned int square_size);
	void resize(unsigned int width, unsigned int height);
	unsigned int get_index(unsigned int x, unsigned int y);
	Cell get(unsigned int x, unsigned int y);
	void set(unsigned int x, unsigned int y, Cell value);
	Cell& operator ()(x, y);
	Cell operator ()(x, y);
	Grid crop(x0, y0, x1, y1);
	void merge(other, x0, y0, alive_only = false);
	Grid rotate(rotation);
	string operator<<(ostream output_stream, const Grid grid);
};