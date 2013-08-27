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

sbeAddObjects(
    Name CommonProductionAndTestObjects
    Sources
        src/Application.cpp
)

sbeAddExecutable(
    Name ${NAME}
    Objects CommonProductionAndTestObjects
    Sources
        src/Main.cpp
)

sbeAddTestExecutable(
    Name ${NAME}Test
    Objects CommonProductionAndTestObjects
    Sources
        test/PrintHelloWorldTest.cpp
)

addTestTarget(
    Executable ${NAME}Test
)

addInstallTarget(
    Package ${NAME}
    Targets ${NAME} ${NAME}Test
)

