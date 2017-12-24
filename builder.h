#ifndef BUILDER_SOLIDER_H
#define BUILDER_SOLIDER_H

#include "Weapon.h"
#include "BodyArmor.h"
#include "ShieldArmor.h"

class Soldier {
private:
	int _life;
	int _speed;
	Weapon* _myWeapon;
	BodyArmor* _myBodyArmor;
	ShieldArmor* _myShieldArmor;

public:
	class builder {
		friend class Soldier;
	public:
		int _life;
		int _speed;
		Weapon* _myWeapon;
		BodyArmor* _myBodyArmor;
		ShieldArmor* _myShieldArmor;
	public:
		//ctor
		builder(int life,  int speed)
			: _life(life), _speed(speed)
		{}
		//set methods
		builder& weapon(Weapon* myWeapon) {
			_myWeapon = myWeapon;
			return *this;
		}
		builder& bodyArmor(BodyArmor* myBodyArmor) {
			_myBodyArmor = myBodyArmor;
			return *this;
		}
		builder& shieldArmor(ShieldArmor* myShieldArmor) {
			_myShieldArmor = myShieldArmor;
		}
		Soldier* build() {
			return new Soldier(*this);
		}
	};

private:
	//only Builder can build the address object
	Soldier(const Soldier::builder& builder)
		: _life(builder._life), _speed(builder._speed), _myWeapon(builder._myWeapon),
		_myBodyArmor(builder._myBodyArmor), _myShieldArmor(builder._myShieldArmor)
	{}

};

typedef Soldier::builder builder;
//to avoid using Adress::Builder	
#endif // !BUILDER_EXAMPLE_H
