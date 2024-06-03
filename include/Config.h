/**
* This file is part of ORB-SLAM3
*
* Copyright (C) 2017-2021 Carlos Campos, Richard Elvira, Juan J. Gómez Rodríguez, José M.M. Montiel and Juan D. Tardós, University of Zaragoza.
* Copyright (C) 2014-2016 Raúl Mur-Artal, José M.M. Montiel and Juan D. Tardós, University of Zaragoza.
*
* ORB-SLAM3 is free software: you can redistribute it and/or modify it under the terms of the GNU General Public
* License as published by the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* ORB-SLAM3 is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even
* the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License along with ORB-SLAM3.
* If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CONFIG_H
#define CONFIG_H

#include "unistd.h"
#include <stdio.h>
#include <stdlib.h>
#include <string>


#ifdef BUILD_AS_SHARED_OBJECT
//#ifdef WIN32
//#ifdef ORB_SLAM3_EXPORTS
//#define ORB_SLAM3_API __declspec(dllexport)
//#else
//#define ORB_SLAM3_API __declspec(dllimport)
//#endif //ORB_SLAM3_EXPORTS
//#else
//#define ORB_SLAM3_API
//#endif // WIN32
#else
#define ORB_SLAM3_API
#endif


namespace ORB_SLAM3
{

ORB_SLAM3_API class ViewerConfig
{

};

ORB_SLAM3_API class CameraConfig
{

};

ORB_SLAM3_API class ORBExtractorConfig
{

};

ORB_SLAM3_API class IMUConfig
{

};

ORB_SLAM3_API class ConfigParser
{
public:
    bool ParseConfigFile(std::string &strConfigFile);

private:

    ViewerConfig mViewerConfig;
    CameraConfig mCameraConfig;
    ORBExtractorConfig mORBConfig;
    IMUConfig mIMUConfig;

};

}

#endif // CONFIG_H
