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
        //scalar is a float multiplier of the speed of the timeline.
        float scalar;
        //when paused is true the timeline will be frozen at the time when it was paused
        bool paused;
        //the time when the timeline was paused
        unsigned int pauseTime;
        //the time the timeline was created
        unsigned int beginning;
        //tik size is the number of units of time in the basis which is one unit of time on this one
        int tic;
        //basis: another timeline, if basis is NULL, the timeline will refer to std::chrono
        Timeline *basis;
};