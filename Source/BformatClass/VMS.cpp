/*
  ==============================================================================

    VMS.cpp
    Created: 14 Sep 2016 10:01:37pm
    Author:  Daniel Upegui Flórez

  ==============================================================================
*/

#include "VMS.h"

VMS::VMS()
{
    pi = atan(1.0)*4.0;
    d = 0.0f;
    theta = 0.0f;
    phi = 0.0f;
    
}

VMS::~VMS()
{
    
}

void VMS::set_d(float c)
{
    d = c;
}

float VMS::get_d()
{
    return d;
}
    
void VMS::set_theta(float c)
{
    theta = (c*pi)/180.0;
}

float VMS::get_theta()
{
    return theta;
}
    
void VMS::set_phi(float c)
{
    phi = (c*pi)/180.0;
}

float VMS::get_phi()
{
    return phi;
}
    
void VMS::synth(int h_size,const float *X,const float *Y,const float *Z,const float *W, float* BufferOut)
{
    gw = sqrt(2);
    gx = cos(theta)*cos(phi);
    gy = sin(theta)*cos(phi);
    gz = sin(phi);
    
    for (int i=0; i<h_size; i++)
    {
        *(BufferOut+i) = 0.5 * (((2-d) * gw * *(W+i)) + (d * ((gx * *(X+i)) + (gy * *(Y+i)) + (gz * *(Z+i)))));
    }
}

    
    