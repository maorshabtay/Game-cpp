cmake_minimum_required(VERSION 3.9)
project(Ex2)

set(CMAKE_CXX_STANDARD 11)

add_executable(Ex2 main.cpp stringMat.cpp FileReader.cpp Game.cpp PlayerStrategy.cpp ButtleField.cpp Soldier.cpp Weapon.cpp UZI.cpp M16.cpp
        Missile.cpp Armor.cpp GamePiece.cpp Solid.cpp Objects.cpp Point2d.cpp CsvOutput.cpp)


#set(SOURCE_FILES Canonial.cpp)
#add_executable(Ex2 ${SOURCE_FILES})