/*
 * zoom.h
 *
 *  Created on: 2 June 2022
 *      Author: widjoyono
 */

#ifndef ZOOM_H_
#define ZOOM_H_

namespace test {

struct Zoom {
	int x{0};
	int y{0};
	double scale{0.0};

	Zoom(int x, int y, double scale) : x(x), y(y), scale(scale) {};
};

} /* namespace test */

#endif /* ZOOM_H_ */
