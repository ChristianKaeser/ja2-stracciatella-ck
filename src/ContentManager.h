#pragma once

#include <string>
#include <vector>

struct SGPFile;

class ContentManager
{
public:
  virtual ~ContentManager() {};

  /** Get map file path. */
  virtual std::string getMapPath(const char *mapName) const = 0;
  virtual std::string getMapPath(const wchar_t *mapName) const = 0;

  /** Get radar map resource name. */
  virtual std::string getRadarMapResourceName(const std::string &mapName) const = 0;

  /** Get tileset resource name. */
  virtual std::string getTilesetResourceName(int number, std::string fileName) const = 0;

  /** Get tileset db resource name. */
  virtual std::string getTilesetDBResName() const = 0;

  /** Get directory for storing new map file. */
  virtual std::string getNewMapFolder() const = 0;

  /** Get all available maps. */
  virtual std::vector<std::string> getAllMaps() const = 0;

  /** Get all available tilecache. */
  virtual std::vector<std::string> getAllTilecache() const = 0;

  /** Open map for reading. */
  virtual SGPFile* openMapForReading(const std::string& mapName) const = 0;
  virtual SGPFile* openMapForReading(const wchar_t *mapName) const = 0;

  /** Open user's private file (e.g. saved game, settings) for reading. */
  virtual SGPFile* openUserPrivateFileForReading(const std::string& filename) const = 0;

  /* Open a game resource file for reading. */
  virtual SGPFile* openGameResForReading(const char* filename) const = 0;
  virtual SGPFile* openGameResForReading(const std::string& filename) const = 0;

  /* Checks if a game resource exists. */
  virtual bool doesGameResExists(char const* filename) const = 0;
  virtual bool doesGameResExists(const std::string &filename) const = 0;

  /** Get folder for screenshots. */
  virtual std::string getScreenshotFolder() const = 0;

  /** Get folder for video capture. */
  virtual std::string getVideoCaptureFolder() const = 0;

  /** Get folder for saved games. */
  virtual std::string getSavedGamesFolder() const = 0;

  /* /\** */
  /*  * Get location of the game executable file. */
  /*  *\/ */
  /* virtual std::string getExeLocation() = 0; */
};
