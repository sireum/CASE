#ifndef __TB_AADL_tb_uxas_processor_types__H
#define __TB_AADL_tb_uxas_processor_types__H

include <stdbool.h>
include <stdint.h>

typedef
  struct UXTASK__CoordinatedAutomationRequest_i {
    Common_Data__int64_i RequestID;
    Common_Data__int64_i MaximumResponseTime;
    typedef
      struct CMASI__AutomationRequest_i {
        Common_Data__int64_i EntityList;
        Common_Data__int64_i TaskList;
        Common_Data__int64_i TaskListSize;
        Common_Data__string_i TaskRelationships;
        Common_Data__int64_i OperatingRegion;
        Common_Data__bool_i RedoAllTasks;
      } CMASI__AutomationRequest_i; OriginalRequest;
    typedef
      struct UXTASK__PlanningState_i {
        Common_Data__int64_i EntityID;
        typedef
          struct CMASI__Location3D_i {
            Common_Data__real64_i Latitude;
            Common_Data__real64_i Longitude;
            Common_Data__real32_i Altitude;
            CMASI__AltitudeType_i AltitudeType;
          } CMASI__Location3D_i; PlanningPosition;
        Common_Data__real32_i PlanningHeading;
      } UXTASK__PlanningState_i; PlanningStates;
  } UXTASK__CoordinatedAutomationRequest_i;

typedef
  struct UXTASK__TaskOption_i {
    Common_Data__int64_i TaskID;
    Common_Data__int64_i OptionID;
    Common_Data__int64_i EligibleEntities;
    Common_Data__int64_i Cost;
    typedef
      struct CMASI__Location3D_i {
        Common_Data__real64_i Latitude;
        Common_Data__real64_i Longitude;
        Common_Data__real32_i Altitude;
        CMASI__AltitudeType_i AltitudeType;
      } CMASI__Location3D_i; StartLocation;
    Common_Data__real32_i StartHeading;
    typedef
      struct CMASI__Location3D_i {
        Common_Data__real64_i Latitude;
        Common_Data__real64_i Longitude;
        Common_Data__real32_i Altitude;
        CMASI__AltitudeType_i AltitudeType;
      } CMASI__Location3D_i; EndLocation;
    Common_Data__real32_i EndHeading;
  } UXTASK__TaskOption_i;

typedef
  struct UXTASK__TaskImplementationRequest_i {
    Common_Data__int64_i RequestID;
    Common_Data__int64_i CorrespondingAutomationRequestID;
    Common_Data__int64_i StartingWaypointID;
    Common_Data__int64_i VehicleID;
    typedef
      struct CMASI__Location3D_i {
        Common_Data__real64_i Latitude;
        Common_Data__real64_i Longitude;
        Common_Data__real32_i Altitude;
        CMASI__AltitudeType_i AltitudeType;
      } CMASI__Location3D_i; StartPosition;
    Common_Data__real32_i StartHeading;
    Common_Data__int64_i StartTime;
    Common_Data__int64_i RegionID;
    Common_Data__int64_i TaskID;
    Common_Data__int64_i OptionID;
    Common_Data__int64_i TimeThreshold;
  } UXTASK__TaskImplementationRequest_i;

typedef
  struct UXTASK__FootprintRequest_i {
    Common_Data__int64_i FootprintRequestID;
    Common_Data__int64_i VehicleID;
    CMASI__WavelengthBand_i EligibleWavelengths;
    Common_Data__real32_i GroundSampleDistances;
    Common_Data__real32_i AglAltitudes;
    Common_Data__real32_i ElevationAngles;
  } UXTASK__FootprintRequest_i;

typedef
  struct CMASI__FlightProfile_i {
    Common_Data__string_i Name;
    Common_Data__real32_i Airspeed;
    Common_Data__real32_i PitchAngle;
    Common_Data__real32_i VerticalSpeed;
    Common_Data__real32_i MaxBankAngle;
    Common_Data__real32_i EnergyRate;
  } CMASI__FlightProfile_i;



typedef
  struct CMASI__AutomationResponse_i {
    typedef
      struct CMASI__MissionCommand_i {
        typedef
          struct CMASI__Waypoint_i {
            Common_Data__int64_i Number;
            Common_Data__int64_i NextWaypoint;
            Common_Data__real32_i Speed;
            CMASI__SpeedType_i SpeedType;
            Common_Data__real32_i ClimbRate;
            CMASI__TurnType_i TurnType;
            typedef
              struct CMASI__VehicleAction_i {
                Common_Data__int64_i AssociatedTaskList;
              } CMASI__VehicleAction_i; VehicleActionList;
            Common_Data__int64_i ContingencyWaypointA;
            Common_Data__int64_i ContingencyWaypointB;
            Common_Data__int64_i AssociatedTasks;
          } CMASI__Waypoint_i; WaypointList;
        Common_Data__int64_i FirstWaypoint;
      } CMASI__MissionCommand_i; MissionCommandList;
    typedef
      struct CMASI__VehicleActionCommand_i {
        Common_Data__int64_i CommandID;
        Common_Data__int64_i VehicleID;
        typedef
          struct CMASI__VehicleAction_i {
            Common_Data__int64_i AssociatedTaskList;
          } CMASI__VehicleAction_i; VehicleActionList;
        CMASI__CommandStatusType_i Status;
      } CMASI__VehicleActionCommand_i; VehicleCommandList;
    typedef
      struct CMASI__KeyValuePair_i {
        Common_Data__string_i Key;
        Common_Data__string_i Value;
      } CMASI__KeyValuePair_i; Info;
  } CMASI__AutomationResponse_i;



typedef
  struct IMPACT__VehicleSummary_i {
    Common_Data__int64_i VehicleID;
    Common_Data__int64_i DestinationTaskID;
    Common_Data__int64_i InitialTaskID;
    Common_Data__real32_i InitialTaskPercentage;
    Common_Data__int64_i EstimateTimeToTaskPercentage;
    Common_Data__int64_i TimeToArrive;
    Common_Data__int64_i TimeOnTask;
    Common_Data__real32_i EnergyRemaining;
    Common_Data__bool_i BeyondCommRange;
  } IMPACT__VehicleSummary_i;

typedef
  struct CMASI__PayloadState_i {
    Common_Data__int64_i PayloadID;
    typedef
      struct CMASI__KeyValuePair_i {
        Common_Data__string_i Key;
        Common_Data__string_i Value;
      } CMASI__KeyValuePair_i; Parameters;
  } CMASI__PayloadState_i;

typedef
  struct UXTASK__TaskAutomationRequest_i {
    Common_Data__int64_i RequestID;
    typedef
      struct CMASI__AutomationRequest_i {
        Common_Data__int64_i EntityList;
        Common_Data__int64_i TaskList;
        Common_Data__int64_i TaskListSize;
        Common_Data__string_i TaskRelationships;
        Common_Data__int64_i OperatingRegion;
        Common_Data__bool_i RedoAllTasks;
      } CMASI__AutomationRequest_i; OriginalRequest;
    Common_Data__bool_i SandBoxRequest;
    typedef
      struct UXTASK__PlanningState_i {
        Common_Data__int64_i EntityID;
        typedef
          struct CMASI__Location3D_i {
            Common_Data__real64_i Latitude;
            Common_Data__real64_i Longitude;
            Common_Data__real32_i Altitude;
            CMASI__AltitudeType_i AltitudeType;
          } CMASI__Location3D_i; PlanningPosition;
        Common_Data__real32_i PlanningHeading;
      } UXTASK__PlanningState_i; PlanningStates;
  } UXTASK__TaskAutomationRequest_i;

typedef
  struct CMASI__VehicleActionCommand_i {
    Common_Data__int64_i CommandID;
    Common_Data__int64_i VehicleID;
    typedef
      struct CMASI__VehicleAction_i {
        Common_Data__int64_i AssociatedTaskList;
      } CMASI__VehicleAction_i; VehicleActionList;
    CMASI__CommandStatusType_i Status;
  } CMASI__VehicleActionCommand_i;

typedef
  struct CMASI__ServiceStatus_i {
    Common_Data__real32_i PercentComplete;
    typedef
      struct CMASI__KeyValuePair_i {
        Common_Data__string_i Key;
        Common_Data__string_i Value;
      } CMASI__KeyValuePair_i; Info;
    CMASI__ServiceStatusType_i StatusType;
  } CMASI__ServiceStatus_i;

typedef
  struct CMASI__PathWaypoint_i {
    Common_Data__int64_i PauseTime;
  } CMASI__PathWaypoint_i;

typedef
  struct IMPACT__PointOfInterest_i {
    Common_Data__int64_i PointID;
    typedef
      struct CMASI__Location3D_i {
        Common_Data__real64_i Latitude;
        Common_Data__real64_i Longitude;
        Common_Data__real32_i Altitude;
        CMASI__AltitudeType_i AltitudeType;
      } CMASI__Location3D_i; Location;
  } IMPACT__PointOfInterest_i;

typedef
  struct CMASI__KeepOutZone_i {
    CMASI__ZoneAvoidanceType_i ZoneType;
  } CMASI__KeepOutZone_i;

typedef
  struct IMPACT__RadioTowerConfiguration_i {
    typedef
      struct CMASI__Location3D_i {
        Common_Data__real64_i Latitude;
        Common_Data__real64_i Longitude;
        Common_Data__real32_i Altitude;
        CMASI__AltitudeType_i AltitudeType;
      } CMASI__Location3D_i; Position;
    Common_Data__real32_i FIXMERange;
    Common_Data__bool_i Enabled;
  } IMPACT__RadioTowerConfiguration_i;

typedef
  struct UXTASK__TaskComplete_i {
    Common_Data__int64_i TaskID;
    Common_Data__int64_i EntitiesInvolved;
    Common_Data__int64_i TimeTaskCompleted;
  } UXTASK__TaskComplete_i;

typedef
  struct CMASI__FollowPathCommand_i {
    Common_Data__int64_i FirstWaypoint;
    typedef
      struct CMASI__PathWaypoint_i {
        Common_Data__int64_i PauseTime;
      } CMASI__PathWaypoint_i; WaypointList;
    Common_Data__int64_i StartTime;
    Common_Data__int64_i StopTime;
    CMASI__TravelMode_i RepeatMode;
  } CMASI__FollowPathCommand_i;

typedef
  struct CMASI__LineSearchTask_i {
    typedef
      struct CMASI__Location3D_i {
        Common_Data__real64_i Latitude;
        Common_Data__real64_i Longitude;
        Common_Data__real32_i Altitude;
        CMASI__AltitudeType_i AltitudeType;
      } CMASI__Location3D_i; PointList;
    typedef
      struct CMASI__Wedge_i {
        Common_Data__real32_i AzimuthCenterline;
        Common_Data__real32_i VerticalCenterline;
        Common_Data__real32_i AzimuthExtent;
        Common_Data__real32_i VerticalExtent;
      } CMASI__Wedge_i; ViewAngleList;
    Common_Data__bool_i UseInertialViewAngles;
  } CMASI__LineSearchTask_i;

typedef
  struct UXNATIVE__KillService_i {
    Common_Data__int64_i ServiceID;
  } UXNATIVE__KillService_i;

typedef
  struct CMASI__PayloadConfiguration_i {
    Common_Data__int64_i PayloadID;
    Common_Data__string_i PayloadKind;
    typedef
      struct CMASI__KeyValuePair_i {
        Common_Data__string_i Key;
        Common_Data__string_i Value;
      } CMASI__KeyValuePair_i; Parameters;
  } CMASI__PayloadConfiguration_i;

typedef
  struct IMPACT__BatchSummaryResponse_i {
    Common_Data__int64_i ResponseID;
    typedef
      struct IMPACT__TaskSummary_i {
        Common_Data__int64_i TaskID;
        typedef
          struct IMPACT__VehicleSummary_i {
            Common_Data__int64_i VehicleID;
            Common_Data__int64_i DestinationTaskID;
            Common_Data__int64_i InitialTaskID;
            Common_Data__real32_i InitialTaskPercentage;
            Common_Data__int64_i EstimateTimeToTaskPercentage;
            Common_Data__int64_i TimeToArrive;
            Common_Data__int64_i TimeOnTask;
            Common_Data__real32_i EnergyRemaining;
            Common_Data__bool_i BeyondCommRange;
          } IMPACT__VehicleSummary_i; PerformingVehicles;
        Common_Data__real32_i BestEffort;
      } IMPACT__TaskSummary_i; Summaries;
  } IMPACT__BatchSummaryResponse_i;



typedef
  struct UXTASK__SensorFootprint_i {
    Common_Data__int64_i FootprintResponseID;
    Common_Data__int64_i VehicleID;
    Common_Data__int64_i CameraID;
    Common_Data__int64_i GimbalID;
    Common_Data__real32_i HorizontalFOV;
    Common_Data__real32_i AglAltitude;
    Common_Data__real32_i GimbalElevation;
    Common_Data__real32_i AspectRatio;
    Common_Data__real32_i AchievedGSD;
    CMASI__WavelengthBand_i CameraWavelength;
    Common_Data__real32_i HorizontalToLeadingEdge;
    Common_Data__real32_i HorizontalToTrailingEdge;
    Common_Data__real32_i HorizontalToCenter;
    Common_Data__real32_i WidthCenter;
    Common_Data__real32_i SlantRangeToCenter;
  } UXTASK__SensorFootprint_i;

typedef
  struct IMPACT__TaskSummary_i {
    Common_Data__int64_i TaskID;
    typedef
      struct IMPACT__VehicleSummary_i {
        Common_Data__int64_i VehicleID;
        Common_Data__int64_i DestinationTaskID;
        Common_Data__int64_i InitialTaskID;
        Common_Data__real32_i InitialTaskPercentage;
        Common_Data__int64_i EstimateTimeToTaskPercentage;
        Common_Data__int64_i TimeToArrive;
        Common_Data__int64_i TimeOnTask;
        Common_Data__real32_i EnergyRemaining;
        Common_Data__bool_i BeyondCommRange;
      } IMPACT__VehicleSummary_i; PerformingVehicles;
    Common_Data__real32_i BestEffort;
  } IMPACT__TaskSummary_i;

typedef
  struct CMASI__AirVehicleConfiguration_i {
    Common_Data__real32_i MinimumSpeed;
    Common_Data__real32_i MaximumSpeed;
    typedef
      struct CMASI__FlightProfile_i {
        Common_Data__string_i Name;
        Common_Data__real32_i Airspeed;
        Common_Data__real32_i PitchAngle;
        Common_Data__real32_i VerticalSpeed;
        Common_Data__real32_i MaxBankAngle;
        Common_Data__real32_i EnergyRate;
      } CMASI__FlightProfile_i; NominalFlightProfile;
    typedef
      struct CMASI__FlightProfile_i {
        Common_Data__string_i Name;
        Common_Data__real32_i Airspeed;
        Common_Data__real32_i PitchAngle;
        Common_Data__real32_i VerticalSpeed;
        Common_Data__real32_i MaxBankAngle;
        Common_Data__real32_i EnergyRate;
      } CMASI__FlightProfile_i; AlternateFlightProfiles;
    CMASI__LoiterType_i AvailableLoiterTypes;
    CMASI__TurnType_i AvailableTurnTypes;
    Common_Data__real32_i MinimumAltitude;
    CMASI__AltitudeType_i MinAltitudeType;
    Common_Data__real32_i MaximumAltitude;
    CMASI__AltitudeType_i MaxAltitudeType;
  } CMASI__AirVehicleConfiguration_i;

typedef
  struct ROUTE__RouteResponse_i {
    Common_Data__int64_i ResponseID;
    typedef
      struct ROUTE__RoutePlanResponse_i {
        Common_Data__int64_i ResponseID;
        Common_Data__int64_i AssociatedTaskID;
        Common_Data__int64_i VehicleID;
        Common_Data__int64_i OperatingRegion;
        typedef
          struct ROUTE__RoutePlan_i {
            Common_Data__int64_i RouteID;
            typedef
              struct CMASI__Waypoint_i {
                Common_Data__int64_i Number;
                Common_Data__int64_i NextWaypoint;
                Common_Data__real32_i Speed;
                CMASI__SpeedType_i SpeedType;
                Common_Data__real32_i ClimbRate;
                CMASI__TurnType_i TurnType;
                typedef
                  struct CMASI__VehicleAction_i {
                    Common_Data__int64_i AssociatedTaskList;
                  } CMASI__VehicleAction_i; VehicleActionList;
                Common_Data__int64_i ContingencyWaypointA;
                Common_Data__int64_i ContingencyWaypointB;
                Common_Data__int64_i AssociatedTasks;
              } CMASI__Waypoint_i; Waypoints;
            Common_Data__int64_i RouteCost;
            typedef
              struct CMASI__KeyValuePair_i {
                Common_Data__string_i Key;
                Common_Data__string_i Value;
              } CMASI__KeyValuePair_i; RouteError;
          } ROUTE__RoutePlan_i; RouteResponses;
      } ROUTE__RoutePlanResponse_i; Routes;
  } ROUTE__RouteResponse_i;

typedef
  struct UXTASK__TaskOptionCost_i {
    Common_Data__int64_i VehicleID;
    Common_Data__int64_i IntialTaskID;
    Common_Data__int64_i IntialTaskOption;
    Common_Data__int64_i DestinationTaskID;
    Common_Data__int64_i DestinationTaskOption;
    Common_Data__int64_i TimeToGo;
  } UXTASK__TaskOptionCost_i;





typedef
  struct CMASI__OperatingRegion_i {
    Common_Data__int64_i ID;
    Common_Data__int64_i KeepInAreas;
    Common_Data__int64_i KeepOutAreas;
  } CMASI__OperatingRegion_i;



typedef
  struct ROUTE__RouteConstraints_i {
    Common_Data__int64_i RouteID;
    typedef
      struct CMASI__Location3D_i {
        Common_Data__real64_i Latitude;
        Common_Data__real64_i Longitude;
        Common_Data__real32_i Altitude;
        CMASI__AltitudeType_i AltitudeType;
      } CMASI__Location3D_i; StartLocation;
    Common_Data__real32_i StartHeading;
    Common_Data__bool_i UseStartHeading;
    typedef
      struct CMASI__Location3D_i {
        Common_Data__real64_i Latitude;
        Common_Data__real64_i Longitude;
        Common_Data__real32_i Altitude;
        CMASI__AltitudeType_i AltitudeType;
      } CMASI__Location3D_i; EndLocation;
    Common_Data__real32_i EndHeading;
    Common_Data__bool_i UseEndHeading;
  } ROUTE__RouteConstraints_i;

typedef
  struct UXNATIVE__IncrementWaypoint_i {
    Common_Data__int64_i VehicleID;
  } UXNATIVE__IncrementWaypoint_i;

typedef
  struct ROUTE__RoutePlanResponse_i {
    Common_Data__int64_i ResponseID;
    Common_Data__int64_i AssociatedTaskID;
    Common_Data__int64_i VehicleID;
    Common_Data__int64_i OperatingRegion;
    typedef
      struct ROUTE__RoutePlan_i {
        Common_Data__int64_i RouteID;
        typedef
          struct CMASI__Waypoint_i {
            Common_Data__int64_i Number;
            Common_Data__int64_i NextWaypoint;
            Common_Data__real32_i Speed;
            CMASI__SpeedType_i SpeedType;
            Common_Data__real32_i ClimbRate;
            CMASI__TurnType_i TurnType;
            typedef
              struct CMASI__VehicleAction_i {
                Common_Data__int64_i AssociatedTaskList;
              } CMASI__VehicleAction_i; VehicleActionList;
            Common_Data__int64_i ContingencyWaypointA;
            Common_Data__int64_i ContingencyWaypointB;
            Common_Data__int64_i AssociatedTasks;
          } CMASI__Waypoint_i; Waypoints;
        Common_Data__int64_i RouteCost;
        typedef
          struct CMASI__KeyValuePair_i {
            Common_Data__string_i Key;
            Common_Data__string_i Value;
          } CMASI__KeyValuePair_i; RouteError;
      } ROUTE__RoutePlan_i; RouteResponses;
  } ROUTE__RoutePlanResponse_i;

typedef
  struct ROUTE__RoutePlanRequest_i {
    Common_Data__int64_i RequestID;
    Common_Data__int64_i AssociatedTaskID;
    Common_Data__int64_i VehicleID;
    Common_Data__int64_i OperatingRegion;
    typedef
      struct ROUTE__RouteConstraints_i {
        Common_Data__int64_i RouteID;
        typedef
          struct CMASI__Location3D_i {
            Common_Data__real64_i Latitude;
            Common_Data__real64_i Longitude;
            Common_Data__real32_i Altitude;
            CMASI__AltitudeType_i AltitudeType;
          } CMASI__Location3D_i; StartLocation;
        Common_Data__real32_i StartHeading;
        Common_Data__bool_i UseStartHeading;
        typedef
          struct CMASI__Location3D_i {
            Common_Data__real64_i Latitude;
            Common_Data__real64_i Longitude;
            Common_Data__real32_i Altitude;
            CMASI__AltitudeType_i AltitudeType;
          } CMASI__Location3D_i; EndLocation;
        Common_Data__real32_i EndHeading;
        Common_Data__bool_i UseEndHeading;
      } ROUTE__RouteConstraints_i; RouteConstraints;
    Common_Data__bool_i IsCostOnlyRequest;
  } ROUTE__RoutePlanRequest_i;

typedef
  struct IMPACT__AreaOfInterest_i {
    Common_Data__int64_i AreaID;
    CMASI__AbstractGeometry_i Area;
  } IMPACT__AreaOfInterest_i;



typedef
  struct UXTASK__AssignmentCostMatrix_i {
    Common_Data__int64_i CorrespondingAutomationRequestID;
    Common_Data__string_i TaskLevelRelationship;
    Common_Data__int64_i TaskList;
    Common_Data__int64_i OperatingRegion;
    typedef
      struct UXTASK__TaskOptionCost_i {
        Common_Data__int64_i VehicleID;
        Common_Data__int64_i IntialTaskID;
        Common_Data__int64_i IntialTaskOption;
        Common_Data__int64_i DestinationTaskID;
        Common_Data__int64_i DestinationTaskOption;
        Common_Data__int64_i TimeToGo;
      } UXTASK__TaskOptionCost_i; CostMatrix;
  } UXTASK__AssignmentCostMatrix_i;

typedef
  struct CMASI__VehicleAction_i {
    Common_Data__int64_i AssociatedTaskList;
  } CMASI__VehicleAction_i;

typedef
  struct IMPACT__ImpactAutomationRequest_i {
    Common_Data__int64_i RequestID;
    typedef
      struct CMASI__AutomationRequest_i {
        Common_Data__int64_i EntityList;
        Common_Data__int64_i TaskList;
        Common_Data__int64_i TaskListSize;
        Common_Data__string_i TaskRelationships;
        Common_Data__int64_i OperatingRegion;
        Common_Data__bool_i RedoAllTasks;
      } CMASI__AutomationRequest_i; TrialRequest;
    typedef
      struct IMPACT__SpeedAltPair_i {
        Common_Data__int64_i VehicleID;
        Common_Data__real32_i Speed;
        Common_Data__real32_i Altitude;
        CMASI__AltitudeType_i AltitudeType;
      } IMPACT__SpeedAltPair_i; OverridePlanningConditions;
    Common_Data__int64_i PlayID;
    Common_Data__int64_i SolutionID;
    Common_Data__bool_i Sandbox;
  } IMPACT__ImpactAutomationRequest_i;



typedef
  struct IMPACT__GroundVehicleConfiguration_i {
    Common_Data__int64_i RoadGraphID;
    Common_Data__real32_i MinimumSpeed;
    Common_Data__real32_i MaximumSpeed;
    Common_Data__real32_i EnergyRate;
  } IMPACT__GroundVehicleConfiguration_i;

typedef
  struct IMPACT__ImpactAutomationResponse_i {
    Common_Data__int64_i ResponseID;
    typedef
      struct CMASI__AutomationResponse_i {
        typedef
          struct CMASI__MissionCommand_i {
            typedef
              struct CMASI__Waypoint_i {
                Common_Data__int64_i Number;
                Common_Data__int64_i NextWaypoint;
                Common_Data__real32_i Speed;
                CMASI__SpeedType_i SpeedType;
                Common_Data__real32_i ClimbRate;
                CMASI__TurnType_i TurnType;
                typedef
                  struct CMASI__VehicleAction_i {
                    Common_Data__int64_i AssociatedTaskList;
                  } CMASI__VehicleAction_i; VehicleActionList;
                Common_Data__int64_i ContingencyWaypointA;
                Common_Data__int64_i ContingencyWaypointB;
                Common_Data__int64_i AssociatedTasks;
              } CMASI__Waypoint_i; WaypointList;
            Common_Data__int64_i FirstWaypoint;
          } CMASI__MissionCommand_i; MissionCommandList;
        typedef
          struct CMASI__VehicleActionCommand_i {
            Common_Data__int64_i CommandID;
            Common_Data__int64_i VehicleID;
            typedef
              struct CMASI__VehicleAction_i {
                Common_Data__int64_i AssociatedTaskList;
              } CMASI__VehicleAction_i; VehicleActionList;
            CMASI__CommandStatusType_i Status;
          } CMASI__VehicleActionCommand_i; VehicleCommandList;
        typedef
          struct CMASI__KeyValuePair_i {
            Common_Data__string_i Key;
            Common_Data__string_i Value;
          } CMASI__KeyValuePair_i; Info;
      } CMASI__AutomationResponse_i; TrialResponse;
    Common_Data__int64_i PlayID;
    Common_Data__int64_i SolutionID;
    Common_Data__bool_i Sandbox;
    typedef
      struct IMPACT__TaskSummary_i {
        Common_Data__int64_i TaskID;
        typedef
          struct IMPACT__VehicleSummary_i {
            Common_Data__int64_i VehicleID;
            Common_Data__int64_i DestinationTaskID;
            Common_Data__int64_i InitialTaskID;
            Common_Data__real32_i InitialTaskPercentage;
            Common_Data__int64_i EstimateTimeToTaskPercentage;
            Common_Data__int64_i TimeToArrive;
            Common_Data__int64_i TimeOnTask;
            Common_Data__real32_i EnergyRemaining;
            Common_Data__bool_i BeyondCommRange;
          } IMPACT__VehicleSummary_i; PerformingVehicles;
        Common_Data__real32_i BestEffort;
      } IMPACT__TaskSummary_i; Summaries;
  } IMPACT__ImpactAutomationResponse_i;

typedef
  struct CMASI__Location3D_i {
    Common_Data__real64_i Latitude;
    Common_Data__real64_i Longitude;
    Common_Data__real32_i Altitude;
    CMASI__AltitudeType_i AltitudeType;
  } CMASI__Location3D_i;



typedef
  struct IMPACT__RadioTowerState_i {
    Common_Data__bool_i Enabled;
  } IMPACT__RadioTowerState_i;

typedef
  struct UXTASK__TaskAutomationResponse_i {
    Common_Data__int64_i ResponseID;
    typedef
      struct CMASI__AutomationResponse_i {
        typedef
          struct CMASI__MissionCommand_i {
            typedef
              struct CMASI__Waypoint_i {
                Common_Data__int64_i Number;
                Common_Data__int64_i NextWaypoint;
                Common_Data__real32_i Speed;
                CMASI__SpeedType_i SpeedType;
                Common_Data__real32_i ClimbRate;
                CMASI__TurnType_i TurnType;
                typedef
                  struct CMASI__VehicleAction_i {
                    Common_Data__int64_i AssociatedTaskList;
                  } CMASI__VehicleAction_i; VehicleActionList;
                Common_Data__int64_i ContingencyWaypointA;
                Common_Data__int64_i ContingencyWaypointB;
                Common_Data__int64_i AssociatedTasks;
              } CMASI__Waypoint_i; WaypointList;
            Common_Data__int64_i FirstWaypoint;
          } CMASI__MissionCommand_i; MissionCommandList;
        typedef
          struct CMASI__VehicleActionCommand_i {
            Common_Data__int64_i CommandID;
            Common_Data__int64_i VehicleID;
            typedef
              struct CMASI__VehicleAction_i {
                Common_Data__int64_i AssociatedTaskList;
              } CMASI__VehicleAction_i; VehicleActionList;
            CMASI__CommandStatusType_i Status;
          } CMASI__VehicleActionCommand_i; VehicleCommandList;
        typedef
          struct CMASI__KeyValuePair_i {
            Common_Data__string_i Key;
            Common_Data__string_i Value;
          } CMASI__KeyValuePair_i; Info;
      } CMASI__AutomationResponse_i; OriginalResponse;
  } UXTASK__TaskAutomationResponse_i;



typedef
  struct CMASI__Task_i {
    Common_Data__int64_i TaskID;
    Common_Data__string_i Label;
    Common_Data__int64_i EligibleEntities;
    Common_Data__real32_i RevisitRate;
    typedef
      struct CMASI__KeyValuePair_i {
        Common_Data__string_i Key;
        Common_Data__string_i Value;
      } CMASI__KeyValuePair_i; Parameters;
    Common_Data__byte_i Priority;
    Common_Data__bool_i Required;
  } CMASI__Task_i;

typedef
  struct CMASI__AreaSearchTask_i {
    CMASI__AbstractGeometry_i SearchArea;
    typedef
      struct CMASI__Wedge_i {
        Common_Data__real32_i AzimuthCenterline;
        Common_Data__real32_i VerticalCenterline;
        Common_Data__real32_i AzimuthExtent;
        Common_Data__real32_i VerticalExtent;
      } CMASI__Wedge_i; ViewAngleList;
  } CMASI__AreaSearchTask_i;

typedef
  struct UXTASK__AssignmentCoordination_i {
    Common_Data__int64_i CoordinatedAutomationRequestID;
    typedef
      struct UXTASK__PlanningState_i {
        Common_Data__int64_i EntityID;
        typedef
          struct CMASI__Location3D_i {
            Common_Data__real64_i Latitude;
            Common_Data__real64_i Longitude;
            Common_Data__real32_i Altitude;
            CMASI__AltitudeType_i AltitudeType;
          } CMASI__Location3D_i; PlanningPosition;
        Common_Data__real32_i PlanningHeading;
      } UXTASK__PlanningState_i; PlanningState;
  } UXTASK__AssignmentCoordination_i;

typedef
  struct CMASI__MustFlyTask_i {
    typedef
      struct CMASI__Location3D_i {
        Common_Data__real64_i Latitude;
        Common_Data__real64_i Longitude;
        Common_Data__real32_i Altitude;
        CMASI__AltitudeType_i AltitudeType;
      } CMASI__Location3D_i; Position;
    Common_Data__bool_i UseAltitude;
  } CMASI__MustFlyTask_i;

typedef
  struct CMASI__LoiterTask_i {
    typedef
      struct CMASI__LoiterAction_i {
        CMASI__LoiterType_i LoiterType;
        Common_Data__real32_i Radius;
        Common_Data__real32_i Axis;
        Common_Data__real32_i Length;
        CMASI__LoiterDirection_i Direction;
        Common_Data__int64_i Duration;
        Common_Data__real32_i Airspeed;
        typedef
          struct CMASI__Location3D_i {
            Common_Data__real64_i Latitude;
            Common_Data__real64_i Longitude;
            Common_Data__real32_i Altitude;
            CMASI__AltitudeType_i AltitudeType;
          } CMASI__Location3D_i; Location;
      } CMASI__LoiterAction_i; DesiredAction;
  } CMASI__LoiterTask_i;

typedef
  struct UXTASK__SensorFootprintRequests_i {
    Common_Data__int64_i RequestID;
    typedef
      struct UXTASK__FootprintRequest_i {
        Common_Data__int64_i FootprintRequestID;
        Common_Data__int64_i VehicleID;
        CMASI__WavelengthBand_i EligibleWavelengths;
        Common_Data__real32_i GroundSampleDistances;
        Common_Data__real32_i AglAltitudes;
        Common_Data__real32_i ElevationAngles;
      } UXTASK__FootprintRequest_i; Footprints;
  } UXTASK__SensorFootprintRequests_i;

typedef
  struct UXNATIVE__VideoRecord_i {
    Common_Data__bool_i FIXMERecord;
  } UXNATIVE__VideoRecord_i;

typedef
  struct ROUTE__RoutePlan_i {
    Common_Data__int64_i RouteID;
    typedef
      struct CMASI__Waypoint_i {
        Common_Data__int64_i Number;
        Common_Data__int64_i NextWaypoint;
        Common_Data__real32_i Speed;
        CMASI__SpeedType_i SpeedType;
        Common_Data__real32_i ClimbRate;
        CMASI__TurnType_i TurnType;
        typedef
          struct CMASI__VehicleAction_i {
            Common_Data__int64_i AssociatedTaskList;
          } CMASI__VehicleAction_i; VehicleActionList;
        Common_Data__int64_i ContingencyWaypointA;
        Common_Data__int64_i ContingencyWaypointB;
        Common_Data__int64_i AssociatedTasks;
      } CMASI__Waypoint_i; Waypoints;
    Common_Data__int64_i RouteCost;
    typedef
      struct CMASI__KeyValuePair_i {
        Common_Data__string_i Key;
        Common_Data__string_i Value;
      } CMASI__KeyValuePair_i; RouteError;
  } ROUTE__RoutePlan_i;

typedef
  struct UXTASK__SensorFootprintResponse_i {
    Common_Data__int64_i ResponseID;
    typedef
      struct UXTASK__SensorFootprint_i {
        Common_Data__int64_i FootprintResponseID;
        Common_Data__int64_i VehicleID;
        Common_Data__int64_i CameraID;
        Common_Data__int64_i GimbalID;
        Common_Data__real32_i HorizontalFOV;
        Common_Data__real32_i AglAltitude;
        Common_Data__real32_i GimbalElevation;
        Common_Data__real32_i AspectRatio;
        Common_Data__real32_i AchievedGSD;
        CMASI__WavelengthBand_i CameraWavelength;
        Common_Data__real32_i HorizontalToLeadingEdge;
        Common_Data__real32_i HorizontalToTrailingEdge;
        Common_Data__real32_i HorizontalToCenter;
        Common_Data__real32_i WidthCenter;
        Common_Data__real32_i SlantRangeToCenter;
      } UXTASK__SensorFootprint_i; Footprints;
  } UXTASK__SensorFootprintResponse_i;

typedef
  struct CMASI__RemoveTasks_i {
    Common_Data__int64_i TaskList;
  } CMASI__RemoveTasks_i;

typedef
  struct ROUTE__RouteRequest_i {
    Common_Data__int64_i RequestID;
    Common_Data__int64_i AssociatedTaskID;
    Common_Data__int64_i VehicleID;
    Common_Data__int64_i NumVehicleIDs;
    Common_Data__int64_i OperatingRegion;
    typedef
      struct ROUTE__RouteConstraints_i {
        Common_Data__int64_i RouteID;
        typedef
          struct CMASI__Location3D_i {
            Common_Data__real64_i Latitude;
            Common_Data__real64_i Longitude;
            Common_Data__real32_i Altitude;
            CMASI__AltitudeType_i AltitudeType;
          } CMASI__Location3D_i; StartLocation;
        Common_Data__real32_i StartHeading;
        Common_Data__bool_i UseStartHeading;
        typedef
          struct CMASI__Location3D_i {
            Common_Data__real64_i Latitude;
            Common_Data__real64_i Longitude;
            Common_Data__real32_i Altitude;
            CMASI__AltitudeType_i AltitudeType;
          } CMASI__Location3D_i; EndLocation;
        Common_Data__real32_i EndHeading;
        Common_Data__bool_i UseEndHeading;
      } ROUTE__RouteConstraints_i; RouteConstraints;
    Common_Data__bool_i IsCostOnlyRequest;
  } ROUTE__RouteRequest_i;



typedef
  struct CMASI__RemoveZones_i {
    Common_Data__int64_i ZoneList;
  } CMASI__RemoveZones_i;

typedef
  struct UXTASK__TaskAssignmentSummary_i {
    Common_Data__int64_i CorrespondingAutomationRequestID;
    Common_Data__int64_i OperatingRegion;
    typedef
      struct UXTASK__TaskAssignment_i {
        Common_Data__int64_i TaskID;
        Common_Data__int64_i OptionID;
        Common_Data__int64_i AssignedVehicle;
        Common_Data__int64_i TimeThreshold;
        Common_Data__int64_i TimeTaskCompleted;
      } UXTASK__TaskAssignment_i; TaskList;
    Common_Data__int64_i TaskListSize;
  } UXTASK__TaskAssignmentSummary_i;

typedef
  struct CMASI__PointSearchTask_i {
    typedef
      struct CMASI__Location3D_i {
        Common_Data__real64_i Latitude;
        Common_Data__real64_i Longitude;
        Common_Data__real32_i Altitude;
        CMASI__AltitudeType_i AltitudeType;
      } CMASI__Location3D_i; SearchLocation;
    Common_Data__real32_i StandoffDistance;
    typedef
      struct CMASI__Wedge_i {
        Common_Data__real32_i AzimuthCenterline;
        Common_Data__real32_i VerticalCenterline;
        Common_Data__real32_i AzimuthExtent;
        Common_Data__real32_i VerticalExtent;
      } CMASI__Wedge_i; ViewAngleList;
  } CMASI__PointSearchTask_i;



typedef
  struct CMASI__Wedge_i {
    Common_Data__real32_i AzimuthCenterline;
    Common_Data__real32_i VerticalCenterline;
    Common_Data__real32_i AzimuthExtent;
    Common_Data__real32_i VerticalExtent;
  } CMASI__Wedge_i;

typedef
  struct UXTASK__UniqueAutomationRequest_i {
    Common_Data__int64_i RequestID;
    typedef
      struct CMASI__AutomationRequest_i {
        Common_Data__int64_i EntityList;
        Common_Data__int64_i TaskList;
        Common_Data__int64_i TaskListSize;
        Common_Data__string_i TaskRelationships;
        Common_Data__int64_i OperatingRegion;
        Common_Data__bool_i RedoAllTasks;
      } CMASI__AutomationRequest_i; OriginalRequest;
    Common_Data__bool_i SandBoxRequest;
    typedef
      struct UXTASK__PlanningState_i {
        Common_Data__int64_i EntityID;
        typedef
          struct CMASI__Location3D_i {
            Common_Data__real64_i Latitude;
            Common_Data__real64_i Longitude;
            Common_Data__real32_i Altitude;
            CMASI__AltitudeType_i AltitudeType;
          } CMASI__Location3D_i; PlanningPosition;
        Common_Data__real32_i PlanningHeading;
      } UXTASK__PlanningState_i; PlanningStates;
  } UXTASK__UniqueAutomationRequest_i;



typedef
  struct UXTASK__TaskPlanOptions_i {
    Common_Data__int64_i CorrespondingAutomationRequestID;
    Common_Data__int64_i TaskID;
    Common_Data__string_i Composition;
    typedef
      struct UXTASK__TaskOption_i {
        Common_Data__int64_i TaskID;
        Common_Data__int64_i OptionID;
        Common_Data__int64_i EligibleEntities;
        Common_Data__int64_i Cost;
        typedef
          struct CMASI__Location3D_i {
            Common_Data__real64_i Latitude;
            Common_Data__real64_i Longitude;
            Common_Data__real32_i Altitude;
            CMASI__AltitudeType_i AltitudeType;
          } CMASI__Location3D_i; StartLocation;
        Common_Data__real32_i StartHeading;
        typedef
          struct CMASI__Location3D_i {
            Common_Data__real64_i Latitude;
            Common_Data__real64_i Longitude;
            Common_Data__real32_i Altitude;
            CMASI__AltitudeType_i AltitudeType;
          } CMASI__Location3D_i; EndLocation;
        Common_Data__real32_i EndHeading;
      } UXTASK__TaskOption_i; Options;
  } UXTASK__TaskPlanOptions_i;

typedef
  struct CMASI__Waypoint_i {
    Common_Data__int64_i Number;
    Common_Data__int64_i NextWaypoint;
    Common_Data__real32_i Speed;
    CMASI__SpeedType_i SpeedType;
    Common_Data__real32_i ClimbRate;
    CMASI__TurnType_i TurnType;
    typedef
      struct CMASI__VehicleAction_i {
        Common_Data__int64_i AssociatedTaskList;
      } CMASI__VehicleAction_i; VehicleActionList;
    Common_Data__int64_i ContingencyWaypointA;
    Common_Data__int64_i ContingencyWaypointB;
    Common_Data__int64_i AssociatedTasks;
  } CMASI__Waypoint_i;



typedef
  struct CMASI__EntityConfiguration_i {
    Common_Data__int64_i ID;
    Common_Data__string_i Affiliation;
    Common_Data__string_i EntityType;
    Common_Data__string_i Label;
    Common_Data__real32_i NominalSpeed;
    Common_Data__real32_i NominalAltitude;
    CMASI__AltitudeType_i NominalAltitudeType;
    typedef
      struct CMASI__PayloadConfiguration_i {
        Common_Data__int64_i PayloadID;
        Common_Data__string_i PayloadKind;
        typedef
          struct CMASI__KeyValuePair_i {
            Common_Data__string_i Key;
            Common_Data__string_i Value;
          } CMASI__KeyValuePair_i; Parameters;
      } CMASI__PayloadConfiguration_i; PayloadConfigurationList;
    typedef
      struct CMASI__KeyValuePair_i {
        Common_Data__string_i Key;
        Common_Data__string_i Value;
      } CMASI__KeyValuePair_i; Info;
  } CMASI__EntityConfiguration_i;

typedef
  struct IMPACT__LineOfInterest_i {
    Common_Data__int64_i LineID;
    typedef
      struct CMASI__Location3D_i {
        Common_Data__real64_i Latitude;
        Common_Data__real64_i Longitude;
        Common_Data__real32_i Altitude;
        CMASI__AltitudeType_i AltitudeType;
      } CMASI__Location3D_i; Line;
  } IMPACT__LineOfInterest_i;

typedef
  struct IMPACT__SurfaceVehicleConfiguration_i {
    Common_Data__int64_i WaterArea;
    Common_Data__real32_i MinimumSpeed;
    Common_Data__real32_i MaximumSpeed;
    Common_Data__real32_i EnergyRate;
    Common_Data__real32_i MaxBankAngle;
    Common_Data__real32_i MaxBankRate;
  } IMPACT__SurfaceVehicleConfiguration_i;

typedef
  struct CMASI__LoiterAction_i {
    CMASI__LoiterType_i LoiterType;
    Common_Data__real32_i Radius;
    Common_Data__real32_i Axis;
    Common_Data__real32_i Length;
    CMASI__LoiterDirection_i Direction;
    Common_Data__int64_i Duration;
    Common_Data__real32_i Airspeed;
    typedef
      struct CMASI__Location3D_i {
        Common_Data__real64_i Latitude;
        Common_Data__real64_i Longitude;
        Common_Data__real32_i Altitude;
        CMASI__AltitudeType_i AltitudeType;
      } CMASI__Location3D_i; Location;
  } CMASI__LoiterAction_i;

typedef
  struct CMASI__AutomationRequest_i {
    Common_Data__int64_i EntityList;
    Common_Data__int64_i TaskList;
    Common_Data__int64_i TaskListSize;
    Common_Data__string_i TaskRelationships;
    Common_Data__int64_i OperatingRegion;
    Common_Data__bool_i RedoAllTasks;
  } CMASI__AutomationRequest_i;

typedef
  struct CMASI__MissionCommand_i {
    typedef
      struct CMASI__Waypoint_i {
        Common_Data__int64_i Number;
        Common_Data__int64_i NextWaypoint;
        Common_Data__real32_i Speed;
        CMASI__SpeedType_i SpeedType;
        Common_Data__real32_i ClimbRate;
        CMASI__TurnType_i TurnType;
        typedef
          struct CMASI__VehicleAction_i {
            Common_Data__int64_i AssociatedTaskList;
          } CMASI__VehicleAction_i; VehicleActionList;
        Common_Data__int64_i ContingencyWaypointA;
        Common_Data__int64_i ContingencyWaypointB;
        Common_Data__int64_i AssociatedTasks;
      } CMASI__Waypoint_i; WaypointList;
    Common_Data__int64_i FirstWaypoint;
  } CMASI__MissionCommand_i;

typedef
  struct UXTASK__TaskInitialized_i {
    Common_Data__int64_i TaskID;
  } UXTASK__TaskInitialized_i;

typedef
  struct CMASI__AirVehicleState_i {
    Common_Data__real32_i Airspeed;
    Common_Data__real32_i VerticalSpeed;
    Common_Data__real32_i WindSpeed;
    Common_Data__real32_i WindDirection;
  } CMASI__AirVehicleState_i;

typedef
  struct UXNATIVE__CreateNewService_i {
    Common_Data__int64_i ServiceID;
    Common_Data__string_i XmlConfiguration;
  } UXNATIVE__CreateNewService_i;

typedef
  struct ROUTE__EgressRouteRequest_i {
    Common_Data__int64_i RequestID;
    typedef
      struct CMASI__Location3D_i {
        Common_Data__real64_i Latitude;
        Common_Data__real64_i Longitude;
        Common_Data__real32_i Altitude;
        CMASI__AltitudeType_i AltitudeType;
      } CMASI__Location3D_i; StartLocation;
    Common_Data__real32_i Radius;
  } ROUTE__EgressRouteRequest_i;



typedef
  struct IMPACT__SurfaceVehicleState_i {
    Common_Data__real32_i BankAngle;
    Common_Data__real32_i Speed;
  } IMPACT__SurfaceVehicleState_i;



typedef
  struct ROUTE__EgressRouteResponse_i {
    Common_Data__int64_i ResponseID;
    typedef
      struct CMASI__Location3D_i {
        Common_Data__real64_i Latitude;
        Common_Data__real64_i Longitude;
        Common_Data__real32_i Altitude;
        CMASI__AltitudeType_i AltitudeType;
      } CMASI__Location3D_i; NodeLocations;
    Common_Data__real32_i Headings;
  } ROUTE__EgressRouteResponse_i;





typedef
  struct UXTASK__TaskActive_i {
    Common_Data__int64_i TaskID;
    Common_Data__int64_i EntityID;
    Common_Data__int64_i TimeTaskActivated;
  } UXTASK__TaskActive_i;

typedef
  struct UXTASK__UniqueAutomationResponse_i {
    Common_Data__int64_i ResponseID;
    typedef
      struct CMASI__AutomationResponse_i {
        typedef
          struct CMASI__MissionCommand_i {
            typedef
              struct CMASI__Waypoint_i {
                Common_Data__int64_i Number;
                Common_Data__int64_i NextWaypoint;
                Common_Data__real32_i Speed;
                CMASI__SpeedType_i SpeedType;
                Common_Data__real32_i ClimbRate;
                CMASI__TurnType_i TurnType;
                typedef
                  struct CMASI__VehicleAction_i {
                    Common_Data__int64_i AssociatedTaskList;
                  } CMASI__VehicleAction_i; VehicleActionList;
                Common_Data__int64_i ContingencyWaypointA;
                Common_Data__int64_i ContingencyWaypointB;
                Common_Data__int64_i AssociatedTasks;
              } CMASI__Waypoint_i; WaypointList;
            Common_Data__int64_i FirstWaypoint;
          } CMASI__MissionCommand_i; MissionCommandList;
        typedef
          struct CMASI__VehicleActionCommand_i {
            Common_Data__int64_i CommandID;
            Common_Data__int64_i VehicleID;
            typedef
              struct CMASI__VehicleAction_i {
                Common_Data__int64_i AssociatedTaskList;
              } CMASI__VehicleAction_i; VehicleActionList;
            CMASI__CommandStatusType_i Status;
          } CMASI__VehicleActionCommand_i; VehicleCommandList;
        typedef
          struct CMASI__KeyValuePair_i {
            Common_Data__string_i Key;
            Common_Data__string_i Value;
          } CMASI__KeyValuePair_i; Info;
      } CMASI__AutomationResponse_i; OriginalResponse;
  } UXTASK__UniqueAutomationResponse_i;







typedef
  struct UXTASK__TaskAssignment_i {
    Common_Data__int64_i TaskID;
    Common_Data__int64_i OptionID;
    Common_Data__int64_i AssignedVehicle;
    Common_Data__int64_i TimeThreshold;
    Common_Data__int64_i TimeTaskCompleted;
  } UXTASK__TaskAssignment_i;

typedef
  struct CMASI__KeyValuePair_i {
    Common_Data__string_i Key;
    Common_Data__string_i Value;
  } CMASI__KeyValuePair_i;

typedef
  struct IMPACT__BatchSummaryRequest_i {
    Common_Data__int64_i RequestID;
    Common_Data__int64_i Vehicles;
    Common_Data__int64_i TaskList;
    Common_Data__real32_i InterTaskPercentage;
    Common_Data__int64_i OperatingRegion;
  } IMPACT__BatchSummaryRequest_i;

typedef
  struct CMASI__SearchTask_i {
    CMASI__WavelengthBand_i DesiredWavelengthBands;
    Common_Data__int64_i DwellTime;
    Common_Data__real32_i GroundSampleDistance;
  } CMASI__SearchTask_i;



typedef
  struct UXTASK__TaskImplementationResponse_i {
    Common_Data__int64_i ResponseID;
    Common_Data__int64_i CorrespondingAutomationRequestID;
    Common_Data__int64_i TaskID;
    Common_Data__int64_i OptionID;
    Common_Data__int64_i VehicleID;
    typedef
      struct CMASI__Waypoint_i {
        Common_Data__int64_i Number;
        Common_Data__int64_i NextWaypoint;
        Common_Data__real32_i Speed;
        CMASI__SpeedType_i SpeedType;
        Common_Data__real32_i ClimbRate;
        CMASI__TurnType_i TurnType;
        typedef
          struct CMASI__VehicleAction_i {
            Common_Data__int64_i AssociatedTaskList;
          } CMASI__VehicleAction_i; VehicleActionList;
        Common_Data__int64_i ContingencyWaypointA;
        Common_Data__int64_i ContingencyWaypointB;
        Common_Data__int64_i AssociatedTasks;
      } CMASI__Waypoint_i; TaskWaypoints;
    typedef
      struct CMASI__Location3D_i {
        Common_Data__real64_i Latitude;
        Common_Data__real64_i Longitude;
        Common_Data__real32_i Altitude;
        CMASI__AltitudeType_i AltitudeType;
      } CMASI__Location3D_i; FinalLocation;
    Common_Data__real32_i FinalHeading;
    Common_Data__int64_i FinalTime;
  } UXTASK__TaskImplementationResponse_i;

typedef
  struct IMPACT__SpeedAltPair_i {
    Common_Data__int64_i VehicleID;
    Common_Data__real32_i Speed;
    Common_Data__real32_i Altitude;
    CMASI__AltitudeType_i AltitudeType;
  } IMPACT__SpeedAltPair_i;

typedef
  struct CMASI__EntityState_i {
    Common_Data__int64_i ID;
    Common_Data__real32_i u;
    Common_Data__real32_i v;
    Common_Data__real32_i w;
    Common_Data__real32_i udot;
    Common_Data__real32_i vdot;
    Common_Data__real32_i wdot;
    Common_Data__real32_i Heading;
    Common_Data__real32_i Pitch;
    Common_Data__real32_i Roll;
    Common_Data__real32_i p;
    Common_Data__real32_i q;
    Common_Data__real32_i r;
    Common_Data__real32_i Course;
    Common_Data__real32_i Groundspeed;
    typedef
      struct CMASI__Location3D_i {
        Common_Data__real64_i Latitude;
        Common_Data__real64_i Longitude;
        Common_Data__real32_i Altitude;
        CMASI__AltitudeType_i AltitudeType;
      } CMASI__Location3D_i; Location;
    Common_Data__real32_i EnergyAvailable;
    Common_Data__real32_i ActualEnergyRate;
    typedef
      struct CMASI__PayloadState_i {
        Common_Data__int64_i PayloadID;
        typedef
          struct CMASI__KeyValuePair_i {
            Common_Data__string_i Key;
            Common_Data__string_i Value;
          } CMASI__KeyValuePair_i; Parameters;
      } CMASI__PayloadState_i; PayloadStateList;
    Common_Data__int64_i CurrentWaypoint;
    Common_Data__int64_i CurrentCommand;
    CMASI__NavigationMode_i FIXMEMode;
    Common_Data__int64_i AssociatedTasks;
    Common_Data__int64_i Time;
    typedef
      struct CMASI__KeyValuePair_i {
        Common_Data__string_i Key;
        Common_Data__string_i Value;
      } CMASI__KeyValuePair_i; Info;
  } CMASI__EntityState_i;

typedef
  struct UXTASK__PlanningState_i {
    Common_Data__int64_i EntityID;
    typedef
      struct CMASI__Location3D_i {
        Common_Data__real64_i Latitude;
        Common_Data__real64_i Longitude;
        Common_Data__real32_i Altitude;
        CMASI__AltitudeType_i AltitudeType;
      } CMASI__Location3D_i; PlanningPosition;
    Common_Data__real32_i PlanningHeading;
  } UXTASK__PlanningState_i;

#endif // __TB_AADL_tb_uxas_processor_types__H
