#ifndef GAME_HPP
#define GAME_HPP


#include <vector>
#include "Helper.hpp"
#include "GridItem.hpp"
#include "Scientist.hpp"
#include "Experiment.hpp"
#include "Goal.hpp"
#include "Interactable.hpp"

enum GameState{WIN,LOSE,PLAYING};


class Game
{
private:
    GameState curState;
    Scientist scientistPlayer;
    Goal endGoal;
    std::vector<Experiment> experiments;
public:
    int width;
    int height;

    Game(int width, int height, std::vector<std::pair<int, int>> experimentCoordinates) {
        this->width = width;
        this->height = height;

        scientistPlayer = Scientist(width,height);
        endGoal = Goal(width, height);

        curState = GameState::PLAYING;

        std::cout << curState << std::endl;

        for (int i = 0; i < experimentCoordinates.size(); i++)
        {
            if((experimentCoordinates[i].first != 0 && experimentCoordinates[i].second != 0) && (experimentCoordinates[i].first != width -1 && experimentCoordinates[i].second != height - 1)) {
                Experiment newExperiment = Experiment(experimentCoordinates[i].first, experimentCoordinates[i].second,width, height);
                experiments.push_back(newExperiment); 
            }
        }
        
    };

    bool displayState() {
        switch (curState)
        {
        case 0:
            std::cout << "You win!" << std::endl;
            return true;
            break;
        case 1:
            std::cout << "You lose :(" << std::endl;
            return true;
            break;
        case 2:
            std::cout << "Game on" << std::endl;
            return false;
            break;
        }
        return false;
    };


    void movePlayer(int dx, int dy) {
        scientistPlayer.move(dx, dy);
        if(curState == GameState::PLAYING) {
            for(int i = 0; i < experiments.size();i++) {
                experiments[i].interact(&scientistPlayer);
            }
            bool reachGoal = endGoal.interact(&scientistPlayer);


            printGrid();
            if(reachGoal) {
                curState = GameState::WIN;
                
            }
            displayState();
        }
    };

    void printGrid() {

        for(int i = 0; i < width; i++) {
            for(int j = 0; j < height; j++) {
                bool hasExp = false;
                for(int k = 0 ; k < experiments.size(); k++) {
                    if(experiments[k].getCoordinates().first == i && experiments[k].getCoordinates().second == j) {
                        std::cout << "E";
                    }
                }


                if(scientistPlayer.getCoordinates().first == i && scientistPlayer.getCoordinates().second == j) {
                    std::cout << "P";
                } else if (endGoal.getCoordinates().first == i && endGoal.getCoordinates().second == j) {
                    std::cout << "G";
                } else if(hasExp == false) {
                    std::cout << "_";
                }
                
            }
            std::cout << std::endl;
        }


    };
};




#endif