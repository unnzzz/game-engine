#pragma once
#include <chrono>

/**
 * TODO: Timeline class documentation
 */
class Timeline
{
    public:
        //constructor
        Timeline(Timeline *basis, int tic);
        //get time
        unsigned int getTime();
        bool isPaused();
        float setScalar(float scalar);
        void pause();
    
    private:
        float scalar;
        bool paused;
        unsigned int pauseTime;
        unsigned int beginning;
        //relative 0, aka moment this timeline was started
        //tik size
        int tic;
        //basis: another timeline, or std chrono
        Timeline *basis;
};