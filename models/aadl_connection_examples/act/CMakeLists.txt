cmake_minimum_required(VERSION 3.8.2)

project (tl C)

# add path to connector templates
CAmkESAddTemplatesPath(../../../../components/templates/)


DeclareCAmkESComponent(sender
  SOURCES components/sender//src/user_sender.c components/sender/src/sb_sender.c
  INCLUDES components/sender/includes/ includes
)

DeclareCAmkESComponent(receiver
  SOURCES components/receiver//src/user_receiver.c components/receiver/src/sb_receiver.c
  INCLUDES components/receiver/includes/ includes
)

DeclareCAmkESComponent(TimeServer
  SOURCES components/TimeServer/src/sb_time_server.c
  INCLUDES includes
)

DeclareCAmkESComponent(dispatch_periodic
  SOURCES components/dispatch_periodic/src/sb_dispatch_periodic.c
  INCLUDES includes
)

DeclareCAmkESComponent(sb_r_eventDataPort_Monitor
  SOURCES components/sb_Monitors/sb_r_eventDataPort_Monitor/src/sb_r_eventDataPort_Monitor.c
  INCLUDES components/sb_Monitors/sb_r_eventDataPort_Monitor/includes/ includes
)

DeclareCAmkESComponent(sb_r_dataPort_Monitor
  SOURCES components/sb_Monitors/sb_r_dataPort_Monitor/src/sb_r_dataPort_Monitor.c
  INCLUDES components/sb_Monitors/sb_r_dataPort_Monitor/includes/ includes
)

DeclareCAmkESRootserver(tl.camkes)
