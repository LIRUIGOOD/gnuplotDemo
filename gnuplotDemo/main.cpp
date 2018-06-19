#include <iostream>
#include "gnugraph.h"

Real xdata[] =
{ 0.1, 0.2, 0.3, 0.4, 0.5, 0.6 };

//µü´ú³õÊ¼Öµq
Real ydata[] =
{ 0.25, 0.55, 0.95, 1.67, 2.3, 2.8 };

int main(void)
{
	Matrix xData(1, 6), yData(1, 6);
	printf("Hello World!");
	xData << xdata;
	yData << ydata;
	set_plot2d("Robot joints position", "time (sec)", "q(i) (rad)", "q", DATAPOINTS,
		xData, yData, 1, 1);

	return 0;
}