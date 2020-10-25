#ifndef __DFRobot_TFmini_H__
#define __DFRobot_TFmini_H__


#include <stdint.h>
#include <stdio.h>
#include <string>
#include "../serialib/serialib.h"

class SEN0259
{
public:
    void        begin(serialib &s_, string port);
    void        close(void);
    char        read(void);
    bool        measure(void);
    uint16_t    getDistance(void);
    uint16_t    getStrength(void);
private:
    serialib*   TFSerial;
    uint16_t    distance = 0;
    uint16_t    strength = 0;
};

#endif