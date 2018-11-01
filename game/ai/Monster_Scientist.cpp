
#include "../../idlib/precompiled.h"
#pragma hdrstop

#include "../Game_local.h"

class rvMonsterScientist : public idAI {
public:

	CLASS_PROTOTYPE( rvMonsterScientist );

	rvMonsterScientist ( void );
	
	void				Spawn				( void );
	
	virtual void		OnDeath				( void );
	
	virtual bool		IsEnemyVisible      ( void );

	// Add some dynamic externals for debugging
	virtual void		GetDebugInfo		( debugInfoProc_t proc, void* userData );
	

	void				disableAttacks		(void);
private:

	CLASS_STATES_PROTOTYPE ( rvMonsterScientist );
};

CLASS_DECLARATION( idAI, rvMonsterScientist )
END_CLASS

/*
================
rvMonsterScientist::rvMonsterScientist
================
*/
rvMonsterScientist::rvMonsterScientist ( void ) {
}

/*
================
rvMonsterScientist::Spawn
================
*/
void rvMonsterScientist::Spawn ( void ) {
	//PlayEffect ( "fx_fly", animator.GetJointHandle ( "effects_bone" ), true );
} 

/*
================
rvMonsterScientist::OnDeath
================
*/
void rvMonsterScientist::OnDeath ( void ) {
	StopEffect ( "fx_fly" );
	
	idAI::OnDeath ( );
}

/*
================
rvMonsterScientist::GetDebugInfo
================
*/
void rvMonsterScientist::GetDebugInfo	( debugInfoProc_t proc, void* userData ) {
	// Base class first
	idAI::GetDebugInfo ( proc, userData );
}

/*
================
rvMonsterScientist::GetDebugInfo
================
*/

/*
================
rvMonsterScientist::IsEnemyVisible
================
*/

bool rvMonsterScientist::IsEnemyVisible(){
	aifl.disableAttacks = true;
	return false;
}

/*
================
rvMonsterScientist::disableAttacks()
================
*/
void rvMonsterScientist::disableAttacks(){
	if (aifl.disableAttacks != true){
		aifl.disableAttacks = true;
	}
}



/*
===============================================================================

	States 

===============================================================================
*/


CLASS_STATES_DECLARATION ( rvMonsterScientist )
END_CLASS_STATES
