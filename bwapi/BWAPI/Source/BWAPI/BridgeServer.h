#pragma once

#include <Bridge\StaticGameDataStructure.h>

#include <string>

namespace BWAPI
{
  // see it as a singleton class.
  namespace BridgeServer
  {
  //public:
    extern Bridge::StaticGameDataStructure* sharedStaticData;

    extern bool initConnectionServer();
    extern bool acceptIncomingConnections();
    extern void disconnect();
    extern bool initMatch();
    extern bool stopMatch();
    extern bool invokeOnFrame();
    extern bool pushSendText();
    extern bool isAgentConnected();
    extern const std::string &getLastError();
  }
}
