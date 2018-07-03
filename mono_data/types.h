#ifndef TYPES_H
#define TYPES_H

#include <cstdint>

const std::uint8_t NUMBER_OF_CASES = 9;

typedef std::unit8_t PlayerID;
typedef std::unit8_t TurnNumber;
typedef std::unit8_t RoundNumber;
typedef std::unit16_t PropID;



enum
{
    HELLO_MESSAGE = 200,
    TURN_MESSAGE = 201,
    ROLL_MESSAGE = 202,
    PLAY_ON_MESSAGE = 203,
    WINNER_MESSAGE = 209

}

#endif // TYPES_H

