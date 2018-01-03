all: Point2D Defence Weapon Solid Soldier Uzi  M16  Missle Paramedic  RegularSoldier  Sniper BodyArmor csv2vector Map csv2player ShieldArmor AllcoateObjects AllcoateSoldiers  initItemPoint Player playerStep stepSoldier startGame main build  
Point2D:
	g++ -std=c++11 -c Point2D.cpp -o Point2D.o        
Defence:
	g++ -std=c++11 -c Defence.cpp -o Defence.o  
Solid:
	g++ -std=c++11 -c Solid.cpp -o Solid.o 
Soldier:
	g++ -std=c++11 -c Soldier.cpp -o Soldier.o        
Uzi:
	g++ -std=c++11 -c Uzi.cpp -o Uzi.o  
M16:
	g++ -std=c++11 -c M16.cpp -o M16.o 	
Missle:
	g++ -std=c++11 -c Missle.cpp -o Missle.o        
Paramedic:
	g++ -std=c++11 -c Paramedic.cpp -o Paramedic.o  
RegularSoldier:
	g++ -std=c++11 -c RegularSoldier.cpp -o RegularSoldier.o 
Weapon:
	g++ -std=c++11 -c Weapon.cpp -o Weapon.o        
Sniper:
	g++ -std=c++11 -c Sniper.cpp -o Sniper.o  
BodyArmor:
	g++ -std=c++11 -c BodyArmor.cpp -o BodyArmor.o 	
	
	
csv2vector:
	g++ -std=c++11 -c csv2vector.cpp -o csv2vector.o        
Map:
	g++ -std=c++11 -c Map.cpp -o Map.o  
csv2player:
	g++ -std=c++11 -c csv2player.cpp -o csv2player.o 
ShieldArmor:
	g++ -std=c++11 -c ShieldArmor.cpp -o ShieldArmor.o        
AllcoateObjects:
	g++ -std=c++11 -c AllcoateObjects.cpp -o AllcoateObjects.o  
AllcoateSoldiers:
	g++ -std=c++11 -c AllcoateSoldiers.cpp -o AllcoateSoldiers.o 	
initItemPoint:
	g++ -std=c++11 -c initItemPoint.cpp -o initItemPoint.o        
Player:
	g++ -std=c++11 -c Player.cpp -o Player.o  
playerStep:
	g++ -std=c++11 -c playerStep.cpp -o playerStep.o 
stepSoldier:
	g++ -std=c++11 -c stepSoldier.cpp -o stepSoldier.o        
startGame:
	g++ -std=c++11 -c startGame.cpp -o startGame.o  
BodyArmor:
	g++ -std=c++11 -c BodyArmor.cpp -o BodyArmor.o 
main:
		g++ -std=c++11 -c MainLogic.cpp -o MainLogic.o
build:
	g++ Point2D.o Defence.o BodyArmor.o Solid.o Soldier.o Uzi.o M16.o Missle.o Paramedic.o RegularSoldier.o  Weapon.o Sniper.o csv2vector.o  Map.o csv2player.o ShieldArmor.o AllcoateObjects.o AllcoateSoldiers.o  initItemPoint.o Player.o playerStep.o stepSoldier.o startGame.o MainLogic.o -o Ex2
run:
	./Ex2
clean:
	rm -f *.o