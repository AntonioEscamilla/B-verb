/*
  ==============================================================================

    BFormatWavLoader.cpp
    Created: 17 Oct 2016 10:27:28pm
    Author:  Daniel Upegui Flórez

  ==============================================================================
*/

#include "BFormatWavLoader.h"


BFormatWavLoader::BFormatWavLoader():readAheadThread("AudioThread")
{
    datawavbuffer = new AudioSampleBuffer(4,1);
}


BFormatWavLoader::~BFormatWavLoader()
{
    audioFormatReader = nullptr;
    datawavbuffer = nullptr;
}

const float* BFormatWavLoader::getReadPointer2Channel(int chan)
{
    return datawavbuffer->getReadPointer(chan);
}

int BFormatWavLoader::getIRSize()
{
    return dataSize;
}

void BFormatWavLoader::readFile(String ruta)
{
    audioFormatManager.registerBasicFormats();
    readAheadThread.startThread(3);
    
    File sourcefile(ruta);
    audioFormatReader = audioFormatManager.createReaderFor(sourcefile);
    
    dataCanales = audioFormatReader->numChannels;
    dataSize = audioFormatReader->lengthInSamples;
    
    datawavbuffer->setSize(4, dataSize);
    
    audioFormatReader->read(datawavbuffer, 0, dataSize, 0, true, false);
    
    //const float* leer = datawavbuffer->getReadPointer(i);
    
    deleteAndZero(audioFormatReader);
    audioFormatManager.clearFormats();
}

    