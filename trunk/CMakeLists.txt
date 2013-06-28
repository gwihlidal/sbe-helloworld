#
# Cmake instructions file
#
cmake_minimum_required(VERSION 2.8)

include(Properties.cmake)
 
project(${NAME} CXX)

set(TEST_FILES
test/PrintHelloWorldTest.cpp 
)

include(SBE/AddCoverityTargets)
include(SBE/DeployDependencies)
include(SBE/AddBinaryTargets)
include(SBE/AddTestTargets)
include(SBE/AddInstallTarget)
include(SBE/AddUninstallTarget)
include(SBE/AddPackageTarget)
include(SBE/AddTagTarget)

addBinaryTarget(
    TARGET_NAME CommonProductionAndTestObjects
    TARGET_TYPE "Object Library"
    SOURCES
        src/Application.cpp
)

addBinaryTarget(
    TARGET_NAME ${NAME}
    TARGET_TYPE ${TYPE}
    OBJECT_LIBRARY CommonProductionAndTestObjects
    SOURCES
        src/Main.cpp
)

addBinaryTarget(
    TARGET_NAME ${NAME}Test
    TARGET_TYPE "Test Executable"
    OBJECT_LIBRARY CommonProductionAndTestObjects
    SOURCES
        test/PrintHelloWorldTest.cpp
)

addTestTarget(
    EXECUTABLE_NAME ${NAME}Test
)

addInstallTarget(
    PACKAGE_NAME ${NAME}
    TARGETS_NAMES ${NAME} ${NAME}Test
)

