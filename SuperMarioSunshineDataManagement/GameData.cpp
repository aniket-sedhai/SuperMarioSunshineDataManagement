//
//  GameData.cpp
//  SuperMarioSunshineDataManagement
//
//  Created by Aniket Sedhai on 6/20/24.
//

#include "GameData.h"

GameData::GameData(): my_num_of_shines(0), my_num_of_blue_coins(0)
{
    //nothing here
}

int GameData::GetShines() const
{
    return my_num_of_shines;
}

int GameData::GetBlueCoins() const
{
    return my_num_of_blue_coins;
}

void GameData::AddShines(int num_of_shines)
{
    if (num_of_shines > 0)
        my_num_of_shines += num_of_shines;
}

void GameData::AddBlueCoins(int num_of_blue_coins)
{
    if (num_of_blue_coins > 0)
        my_num_of_blue_coins += num_of_blue_coins;
}

void GameData::ConvertBlueCoinsToShines()
{
    
    my_num_of_shines += my_num_of_blue_coins/10;
    
    my_num_of_blue_coins = my_num_of_blue_coins % 10;
    
    return;
}

bool GameData::CanMarioGoToCoronaMountain() const
{
    if (my_num_of_shines >= 50)
        return true;
    else
        return false;
}
