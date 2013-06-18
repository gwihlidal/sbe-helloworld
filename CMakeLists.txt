#
# Cmake instructions file
#
cmake_minimum_required(VERSION 2.8)

include(Properties.cmake)
 
project(${NAME} CXX)

set(SOURCE_FILES_OUTOF_TEST
src/Main.cpp
)

set(SOURCE_FILES
src/Application.cpp
)

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

