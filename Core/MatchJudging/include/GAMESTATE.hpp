/*
//File that contains enumerable types for what state the game is in
*/
#pragma once
namespace Core{
    namespace Judge{
        
        enum GAME_STATE{
            WAIT, //Time in between points / matches transistion periods
            SERVE, //Time when serve is to be expected and awaiting it to happen
            RALLY //When the ball is in play
        };


        enum SCORE_STATE{
            NORMAL, //Normal Game state
            DEUCE, //Should track which player has advantage
            TIEBREAK //Track which player serves and point count
        };

        enum GAME_TYPE{
            PRACTICE,//Don't manage points just record and notify shots
            PRO,//First to 8 win by 2
            SIMPLE,//Just one game
            TIEBREAK//Tiebreak only
        };

    }//Judge 
}//Core
