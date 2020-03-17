/**
 * Declares a class representing a 2d grid world for simulating a cellular automaton.
 * Rich documentation for the api and behaviour the World class can be found in world.cpp.
 *
 * The test suites provide granular BDD style (Behaviour Driven Development) test cases
 * which will help further understand the specification you need to code to.
 *
 * @author 965075
 * @date March, 2020
 */
#pragma once
#include "grid.h"

 // Add the minimal number of includes you need in order to declare the class.
 // #include ...

 /**
  * Declare the structure of the World class for representing a 2d grid world.
  *
  * A World holds two equally sized Grid objects for the current state and next state.
  *      - These buffers should be swapped using std::swap after each update step.
  */
class World {

	// How to draw an owl:
	//      Step 1. Draw a circle.
	//      Step 2. Draw the rest of the owl.


private:
	Grid current;
	Grid next;
	unsigned int count_neighbours(int x, int y, bool toroidal);
	bool validCoordinates(int x, int y);
public:
	World();
	World(int square_size);
	World(int width, int height);
	World(Grid initial_state);
	unsigned int get_width();
	unsigned int get_height();
	unsigned int get_total_cells();
	unsigned int get_alive_cells();
	unsigned int get_dead_cells();
	Grid& get_state();
	void resize(int square_size);
	void resize(int new_width, int new_height);
	void step(bool toroidal = false);
	void advance(int steps, bool toroidal = false);

};