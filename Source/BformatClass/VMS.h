/*
  ==============================================================================

    VMS.h
    Created: 14 Sep 2016 10:01:44pm
    Author:  Daniel Upegui Flórez

  ==============================================================================
*/

#ifndef VMS_H_INCLUDED
#define VMS_H_INCLUDED

#include "math.h"

class VMS
{
    public:
    
    VMS();
    ~VMS();
    
    void set_d(float c);
    float get_d();
    
    void set_theta(float c);
    float get_theta();
    
    void set_phi(float c);
    float get_phi();
    
    void synth(int h_size,const float *X,const float *Y,const float *Z,const float *W, float* BufferOut);
    
    
    private:
    float d, theta, phi, pi, gw, gx, gy, gz;

};


#endif  // VMS_H_INCLUDED
