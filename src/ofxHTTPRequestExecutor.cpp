#include "ofxHTTPRequestExecutor.h"


//------------------------------------------------------------------------------
ofxHTTPRequestExecutor::ofxHTTPRequestExecutor(const BaseRequest& _request,
//                                               ofxHTTPBaseResponseStreamConsumer* _streamConsumer,
                                               const ofxThreadSettings& _threadSettings) :

responseStream(NULL)//,
//responseStreamConsumer(NULL)
{ }

//------------------------------------------------------------------------------
ofxHTTPRequestExecutor::~ofxHTTPRequestExecutor() {
    
}

//    ActiveMethod

//------------------------------------------------------------------------------
ofxThreadSettings ofxHTTPRequestExecutor::getThreadSettings() const {
    return settings;
}
