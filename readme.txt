Mario 64 Mod 
Jonathan Botros

Deliverables:
-Mario-Like Moves
-Power Ups
-Goomba-like Behavior in an enemy
-Jumping on an Enemy kills them

Complete:
	-Mario Like Moves:
		I gave Mario his punching ability by setting the default weapon to the gauntlet
		I also increased the damage to be able to hit enemies within one hit. To replicate
		the 2d games, I set the default speed to be slower unless you hold the walk key. Walkinig
		is faster than the regular run speed.
	-Power Ups:
		I was able to get the fire flower, invicibility star and the Wing Cap to functionally work.
		Fire Flower:
			Modified the blaster Weapon so that it would shoot rocket and so that the rockets would kill
			an enemy in one hit.
			
			To test:
				enter "give weapon_blaster" in the console
		Racoon Mario:
			Modified the haste power up so that it would trigger the water level flag upon getting it.
			This allows the player to infinitly jump.
			
			To test:
				enter "give haste" in the console
		Invincibility:
			Modified the quad power up so that the speed and power of the player would be mmodified and 
			allowed the player invincibility.
			
			To test:
				enter "give quad" in the console				


Sorta Complete:
	-goomba like behaivior:
		I tried setting the isEnemyVisible method to false on the scientist enemy and
		I discovered a flag called aifl.disableAttacks and set that to true but the 
		scientist enemy still attacks. However, the enemy diesn't activly seek out the
		player if they are in range
Not Complete:
	-jumping on enemy: couldn't figure out on time

	I also got the hud to show in thirdPerson mode without any gliches or issues on my part. 