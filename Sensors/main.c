// main.c : Defines the entry point for the console application.
//
#include "sensor.h"
#include "unistd.h"
#include "filter.h"

int main()
{
	int i;
	sensor_init();
    for (i = 0; i < 100000; i++)
	{
		sensors_read_all();
		filter(sensors[0].value, &sensors[0].filtered_val);
		print_sensor(sensors);
		sleep(89999);
	}
    return 0;
}

