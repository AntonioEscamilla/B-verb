/*
  ==============================================================================

    BFormatWavLoader.h
    Created: 17 Oct 2016 10:27:21pm
    Author:  Daniel Upegui Flórez

  ==============================================================================
*/

#ifndef BFORMATWAVLOADER_H_INCLUDED
#define BFORMATWAVLOADER_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"

class BFormatWavLoader
{
    public:
    
    BFormatWavLoader();
    ~BFormatWavLoader();
    
    void readFile(const String path);
    const float* getReadPointer2Channel(int chan);
    int getIRSize();
    
    private:
    
    int dataSize;
    int dataCanales;
    
    AudioFormatManager                      audioFormatManager;
    ScopedPointer<AudioFormatReaderSource>  audioFormatReaderSource;
    AudioFormatReader*                      audioFormatReader;
    ScopedPointer<AudioSampleBuffer>        datawavbuffer;
    TimeSliceThread                         readAheadThread;
    
};


#endif  // BFORMATWAVLOADER_H_INCLUDED
