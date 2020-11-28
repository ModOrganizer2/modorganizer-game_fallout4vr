#ifndef FALLOUT4VRSAVEGAME_H
#define FALLOUT4VRSAVEGAME_H

#include "gamebryosavegame.h"

#include <Windows.h>

class GameFallout4VR;

class Fallout4VRSaveGame : public GamebryoSaveGame
{
public:
  Fallout4VRSaveGame(QString const &fileName, GameFallout4VR const *game);

protected:

  // Fetch easy-to-access information.
  void fetchInformationFields(
    FileWrapper& file,
    unsigned long& saveNumber,
    QString& playerName,
    unsigned short& playerLevel,
    QString& playerLocation,
    FILETIME& creationTime) const;

  std::unique_ptr<DataFields> fetchDataFields() const override;
};

#endif // FALLOUT4VRSAVEGAME_H
