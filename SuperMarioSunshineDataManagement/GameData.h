//
//  GameData.h
//  SuperMarioSunshineDataManagement
//
//  Created by Aniket Sedhai on 6/20/24.
//

#ifndef GameData_h
#define GameData_h

class GameData
{
public:
    GameData();
    int GetShines() const;
    int GetBlueCoins() const;
    void AddShines(int num_of_shines);
    void AddBlueCoins(int num_of_blue_coins);
    void ConvertBlueCoinsToShines();
    bool CanMarioGoToCoronaMountain() const;
    
private:
    int my_num_of_shines;
    int my_num_of_blue_coins;
};


#endif /* GameData_h */
