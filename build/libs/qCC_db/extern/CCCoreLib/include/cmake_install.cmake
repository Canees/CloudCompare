# Install script for directory: /Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/CCCoreLib" TYPE FILE FILES
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/AutoSegmentationTools.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/BoundingBox.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/CCConst.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/CCCoreLib.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/CCGeom.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/CCMath.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/CCMiscTools.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/CCPlatform.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/CCShareable.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/CCToolbox.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/CCTypes.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/ChamferDistanceTransform.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/CloudSamplingTools.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/ConjugateGradient.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/Delaunay2dMesh.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/DgmOctree.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/DgmOctreeReferenceCloud.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/DistanceComputationTools.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/ErrorFunction.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/FastMarching.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/FastMarchingForPropagation.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/Garbage.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/GenericCloud.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/GenericDistribution.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/GenericIndexedCloud.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/GenericIndexedCloudPersist.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/GenericIndexedMesh.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/GenericMesh.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/GenericOctree.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/GenericProgressCallback.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/GenericTriangle.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/GeometricalAnalysisTools.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/GridAndMeshIntersection.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/Grid3D.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/Jacobi.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/KdTree.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/Kriging.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/LocalModel.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/ManualSegmentationTools.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/MathTools.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/MeshSamplingTools.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/Neighbourhood.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/NormalDistribution.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/ParallelSort.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/PointCloud.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/PointCloudTpl.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/PointProjectionTools.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/Polyline.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/RayAndBox.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/ReferenceCloud.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/RegistrationTools.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/SaitoSquaredDistanceTransform.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/ScalarField.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/ScalarFieldTools.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/SimpleMesh.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/SimpleTriangle.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/SquareMatrix.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/StatisticalTestingTools.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/TrueKdTree.h"
    "/Users/caner/Desktop/CloudCompare/libs/qCC_db/extern/CCCoreLib/include/WeibullDistribution.h"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/caner/Desktop/CloudCompare/build/libs/qCC_db/extern/CCCoreLib/include/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
