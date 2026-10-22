#ifndef BATTERY_H
#define BATTERY_H

typedef struct
{
    float capacityAh;
    float soc;
    float voltage;
    float current;
} Battery_t;

#endif
