/*----------------------------------------------------------------------------
 * File:  Control_Controller_class.c
 *
 * Class:       Controller  (Controller)
 * Component:   Control
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "gnc_sys_types.h"
#include "Control_classes.h"


/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s Control_Controller_container[ Control_Controller_MAX_EXTENT_SIZE ];
static Control_Controller Control_Controller_instances[ Control_Controller_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_Control_Controller_extent = {
  {0}, {0}, &Control_Controller_container[ 0 ],
  (Escher_iHandle_t) &Control_Controller_instances,
  sizeof( Control_Controller ), Control_Controller_STATE_1, Control_Controller_MAX_EXTENT_SIZE
  };
/*----------------------------------------------------------------------------
 * State and transition action implementations for the following class:
 *
 * Class:      Controller  (Controller)
 * Component:  Control
 *--------------------------------------------------------------------------*/

/*
 * State 1:  [init]
 */
static void Control_Controller_act1( Control_Controller *, const Escher_xtUMLEvent_t * const );
static void
Control_Controller_act1( Control_Controller * self, const Escher_xtUMLEvent_t * const event )
{
}

/*
 * State 2:  [takeoff]
 */
static void Control_Controller_act2( Control_Controller *, const Escher_xtUMLEvent_t * const );
static void
Control_Controller_act2( Control_Controller * self, const Escher_xtUMLEvent_t * const event )
{
  /* Port1::takeoff(alt:1) */
  XTUML_OAL_STMT_TRACE( 1, "Port1::takeoff(alt:1)" );
  Control_Port1_takeoff( 1 );
  /* Port1::set_heading(heading:0) */
  XTUML_OAL_STMT_TRACE( 1, "Port1::set_heading(heading:0)" );
  Control_Port1_set_heading( 0 );
}

/*
 * State 3:  [land]
 */
static void Control_Controller_act3( Control_Controller *, const Escher_xtUMLEvent_t * const );
static void
Control_Controller_act3( Control_Controller * self, const Escher_xtUMLEvent_t * const event )
{
  /* Port1::land() */
  XTUML_OAL_STMT_TRACE( 1, "Port1::land()" );
  Control_Port1_land();
  /* Port1::set_heading(heading:0) */
  XTUML_OAL_STMT_TRACE( 1, "Port1::set_heading(heading:0)" );
  Control_Port1_set_heading( 0 );
}

/*
 * State 4:  [move1]
 */
static void Control_Controller_act4( Control_Controller *, const Escher_xtUMLEvent_t * const );
static void
Control_Controller_act4( Control_Controller * self, const Escher_xtUMLEvent_t * const event )
{
  /* Port1::set_destination(x:3, y:3, z:1) */
  XTUML_OAL_STMT_TRACE( 1, "Port1::set_destination(x:3, y:3, z:1)" );
  Control_Port1_set_destination( 3, 3, 1 );
  /* Port1::set_heading(heading:0) */
  XTUML_OAL_STMT_TRACE( 1, "Port1::set_heading(heading:0)" );
  Control_Port1_set_heading( 0 );
}

/*
 * State 5:  [move2]
 */
static void Control_Controller_act5( Control_Controller *, const Escher_xtUMLEvent_t * const );
static void
Control_Controller_act5( Control_Controller * self, const Escher_xtUMLEvent_t * const event )
{
  /* Port1::set_destination(x:- 3, y:3, z:1) */
  XTUML_OAL_STMT_TRACE( 1, "Port1::set_destination(x:- 3, y:3, z:1)" );
  Control_Port1_set_destination( -3, 3, 1 );
  /* Port1::set_heading(heading:0) */
  XTUML_OAL_STMT_TRACE( 1, "Port1::set_heading(heading:0)" );
  Control_Port1_set_heading( 0 );
}

/*
 * State 6:  [move3]
 */
static void Control_Controller_act6( Control_Controller *, const Escher_xtUMLEvent_t * const );
static void
Control_Controller_act6( Control_Controller * self, const Escher_xtUMLEvent_t * const event )
{
  /* Port1::set_destination(x:- 3, y:- 3, z:1) */
  XTUML_OAL_STMT_TRACE( 1, "Port1::set_destination(x:- 3, y:- 3, z:1)" );
  Control_Port1_set_destination( -3, -3, 1 );
  /* Port1::set_heading(heading:0) */
  XTUML_OAL_STMT_TRACE( 1, "Port1::set_heading(heading:0)" );
  Control_Port1_set_heading( 0 );
}

/*
 * State 7:  [move4]
 */
static void Control_Controller_act7( Control_Controller *, const Escher_xtUMLEvent_t * const );
static void
Control_Controller_act7( Control_Controller * self, const Escher_xtUMLEvent_t * const event )
{
  /* Port1::set_destination(x:3, y:- 3, z:1) */
  XTUML_OAL_STMT_TRACE( 1, "Port1::set_destination(x:3, y:- 3, z:1)" );
  Control_Port1_set_destination( 3, -3, 1 );
  /* Port1::set_heading(heading:0) */
  XTUML_OAL_STMT_TRACE( 1, "Port1::set_heading(heading:0)" );
  Control_Port1_set_heading( 0 );
}

/*
 * State 8:  [move5]
 */
static void Control_Controller_act8( Control_Controller *, const Escher_xtUMLEvent_t * const );
static void
Control_Controller_act8( Control_Controller * self, const Escher_xtUMLEvent_t * const event )
{
  /* Port1::set_destination(x:0, y:- 0, z:1) */
  XTUML_OAL_STMT_TRACE( 1, "Port1::set_destination(x:0, y:- 0, z:1)" );
  Control_Port1_set_destination( 0, -0, 1 );
  /* Port1::set_heading(heading:0) */
  XTUML_OAL_STMT_TRACE( 1, "Port1::set_heading(heading:0)" );
  Control_Port1_set_heading( 0 );
}

const Escher_xtUMLEventConstant_t Control_Controllerevent1c = {
  Control_DOMAIN_ID, Control_Controller_CLASS_NUMBER, CONTROL_CONTROLLEREVENT1NUM,
  ESCHER_IS_INSTANCE_EVENT };
const Escher_xtUMLEventConstant_t Control_Controllerevent2c = {
  Control_DOMAIN_ID, Control_Controller_CLASS_NUMBER, CONTROL_CONTROLLEREVENT2NUM,
  ESCHER_IS_INSTANCE_EVENT };
const Escher_xtUMLEventConstant_t Control_Controllerevent3c = {
  Control_DOMAIN_ID, Control_Controller_CLASS_NUMBER, CONTROL_CONTROLLEREVENT3NUM,
  ESCHER_IS_INSTANCE_EVENT };


/*
 * State-Event Matrix (SEM)
 * Row index is object (MC enumerated) current state.
 * Row zero is the uninitialized state (e.g., for creation event transitions).
 * Column index is (MC enumerated) state machine events.
 */
static const Escher_SEMcell_t Control_Controller_StateEventMatrix[ 8 + 1 ][ 3 ] = {
  /* row 0:  uninitialized state (for creation events) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 1:  Control_Controller_STATE_1 (init) */
  { Control_Controller_STATE_2, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 2:  Control_Controller_STATE_2 (takeoff) */
  { EVENT_CANT_HAPPEN, Control_Controller_STATE_4, Control_Controller_STATE_3 },
  /* row 3:  Control_Controller_STATE_3 (land) */
  { EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN, EVENT_CANT_HAPPEN },
  /* row 4:  Control_Controller_STATE_4 (move1) */
  { EVENT_CANT_HAPPEN, Control_Controller_STATE_5, Control_Controller_STATE_3 },
  /* row 5:  Control_Controller_STATE_5 (move2) */
  { EVENT_CANT_HAPPEN, Control_Controller_STATE_6, EVENT_CANT_HAPPEN },
  /* row 6:  Control_Controller_STATE_6 (move3) */
  { EVENT_CANT_HAPPEN, Control_Controller_STATE_7, EVENT_CANT_HAPPEN },
  /* row 7:  Control_Controller_STATE_7 (move4) */
  { EVENT_CANT_HAPPEN, Control_Controller_STATE_8, EVENT_CANT_HAPPEN },
  /* row 8:  Control_Controller_STATE_8 (move5) */
  { EVENT_CANT_HAPPEN, Control_Controller_STATE_3, EVENT_CANT_HAPPEN }
};

  /*
   * Array of pointers to the class state action procedures.
   * Index is the (MC enumerated) number of the state action to execute.
   */
  static const StateAction_t Control_Controller_acts[ 9 ] = {
    (StateAction_t) 0,
    (StateAction_t) Control_Controller_act1,  /* init */
    (StateAction_t) Control_Controller_act2,  /* takeoff */
    (StateAction_t) Control_Controller_act3,  /* land */
    (StateAction_t) Control_Controller_act4,  /* move1 */
    (StateAction_t) Control_Controller_act5,  /* move2 */
    (StateAction_t) Control_Controller_act6,  /* move3 */
    (StateAction_t) Control_Controller_act7,  /* move4 */
    (StateAction_t) Control_Controller_act8  /* move5 */
  };

  /*
   * Array of string names of the state machine names.
   * Index is the (MC enumerated) number of the state.
   */
  static const c_t * const state_name_strings[ 9 ] = {
    "",
    "init",
    "takeoff",
    "land",
    "move1",
    "move2",
    "move3",
    "move4",
    "move5"
  };

/*
 * instance state machine event dispatching
 */
void
Control_Controller_Dispatch( Escher_xtUMLEvent_t * event )
{
  Escher_iHandle_t instance = GetEventTargetInstance( event );
  Escher_EventNumber_t event_number = GetOoaEventNumber( event );
  Escher_StateNumber_t current_state;
  Escher_StateNumber_t next_state;
  if ( 0 != instance ) {
    current_state = instance->current_state;
    if ( current_state > 8 ) {
      /* instance validation failure (object deleted while event in flight) */
      UserEventNoInstanceCallout( event_number );
    } else {
      next_state = Control_Controller_StateEventMatrix[ current_state ][ event_number ];
      if ( next_state <= 8 ) {
        STATE_TXN_START_TRACE( "Controller", current_state, state_name_strings[ current_state ] );
        /* Update the current state and execute the state action.  */
        instance->current_state = next_state;
        ( *Control_Controller_acts[ next_state ] )( instance, event );
        STATE_TXN_END_TRACE( "Controller", next_state, state_name_strings[ next_state ] );
      } else if ( next_state == EVENT_CANT_HAPPEN ) {
          /* event cant happen */
          UserEventCantHappenCallout( current_state, next_state, event_number );
          STATE_TXN_CH_TRACE( "Controller", current_state );
      } else {
        /* empty else */
      }
    }
  }
}

