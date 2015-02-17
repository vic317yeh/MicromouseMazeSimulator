//
//  MazeSolver.h
//  micromouse_path
//
//  Created by Kuan-Hsuan Yeh on 2/16/15.
//  Copyright (c) 2015 Kuan-Hsuan Yeh. All rights reserved.
//

#ifndef __micromouse_path__MazeSolver__
#define __micromouse_path__MazeSolver__

#include <stdio.h>
#include "PathFinder.h"


class MazeSolver:public PathFinder {
public:
    
    //Function that instructs the maze how to move the mouse.
    MouseMovement nextMovement(unsigned x, unsigned y, const Maze &maze);
    
    //Function used to draw extra info on the maze.
    std::string getInfo(unsigned x, unsigned y, size_t maxInfoLen);
    
private:
    
    
    
};


#endif /* defined(__micromouse_path__MazeSolver__) */
