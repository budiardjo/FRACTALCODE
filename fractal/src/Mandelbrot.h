/*
 * Mandelbrot.h
 *
 *  Created on: 2 June 2022
 *      Author: widjoyono
 */

#ifndef MANDELBROT_H_
#define MANDELBROT_H_

namespace test {

class Mandelbrot {
public:
	static const int MAX_ITERATIONS = 1000;


public:
	Mandelbrot();
	virtual ~Mandelbrot();

	static int getIterations(double x, double y);
};

} /* namespace test */

#endif /* SRC_MANDELBROT_H_ */
