cmake_minimum_required(VERSION 3.7.2)

project (software C)


CAmkESAddTemplatesPath(../../../../components/templates/)

DeclareCAmkESComponent(Clock_Driver
  SOURCES components/Clock_Driver/src/tb_Clock_Driver.c
  INCLUDES components/Clock_Driver/includes/ includes
)

DeclareCAmkESComponent(GPIO_Driver
  SOURCES components/GPIO_Driver/src/tb_GPIO_Driver.c
  INCLUDES components/GPIO_Driver/includes/ includes
)

DeclareCAmkESComponent(UART_Driver
  SOURCES components/UART_Driver/src/tb_UART_Driver.c
  INCLUDES components/UART_Driver/includes/ includes
)

DeclareCAmkESComponent(Decrypt
  SOURCES components/Decrypt/src/tb_Decrypt.c
  INCLUDES components/Decrypt/includes/ includes
)

DeclareCAmkESComponent(Encrypt
  SOURCES components/Encrypt/src/tb_Encrypt.c
  INCLUDES components/Encrypt/includes/ includes
)

DeclareCAmkESComponent(Server
  SOURCES components/Server/src/tb_Server.c
  INCLUDES components/Server/includes/ includes
)

DeclareCAmkESComponent(CAN_Framing
  SOURCES components/CAN_Framing/src/tb_CAN_Framing.c
  INCLUDES components/CAN_Framing/includes/ includes
)

DeclareCAmkESComponent(CAN_Driver
  SOURCES components/CAN_Driver/src/tb_CAN_Driver.c
  INCLUDES components/CAN_Driver/includes/ includes
)

DeclareCAmkESComponent(Virtual_Machine
  SOURCES components/Virtual_Machine/src/tb_Virtual_Machine.c
  INCLUDES components/Virtual_Machine/includes/ includes
)

DeclareCAmkESComponent(TimeServer

  INCLUDES includes
)

DeclareCAmkESComponent(dispatch_periodic

  INCLUDES includes
)

DeclareCAmkESComponent(tb_can_framing_can2self_frame_Monitor
  SOURCES components/tb_Monitors/tb_can_framing_can2self_frame_Monitor/src/tb_can_framing_can2self_frame_Monitor.c
  INCLUDES components/tb_Monitors/tb_can_framing_can2self_frame_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_virtual_machine_server2self_reboot_Monitor
  SOURCES components/tb_Monitors/tb_virtual_machine_server2self_reboot_Monitor/src/tb_virtual_machine_server2self_reboot_Monitor.c
  INCLUDES components/tb_Monitors/tb_virtual_machine_server2self_reboot_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_server_decrypt2self_Monitor
  SOURCES components/tb_Monitors/tb_server_decrypt2self_Monitor/src/tb_server_decrypt2self_Monitor.c
  INCLUDES components/tb_Monitors/tb_server_decrypt2self_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_decrypt_uart2self_Monitor
  SOURCES components/tb_Monitors/tb_decrypt_uart2self_Monitor/src/tb_decrypt_uart2self_Monitor.c
  INCLUDES components/tb_Monitors/tb_decrypt_uart2self_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_can_framing_server2self_Monitor
  SOURCES components/tb_Monitors/tb_can_framing_server2self_Monitor/src/tb_can_framing_server2self_Monitor.c
  INCLUDES components/tb_Monitors/tb_can_framing_server2self_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_server_vm2self_Monitor
  SOURCES components/tb_Monitors/tb_server_vm2self_Monitor/src/tb_server_vm2self_Monitor.c
  INCLUDES components/tb_Monitors/tb_server_vm2self_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_encrypt_uart2self_Monitor
  SOURCES components/tb_Monitors/tb_encrypt_uart2self_Monitor/src/tb_encrypt_uart2self_Monitor.c
  INCLUDES components/tb_Monitors/tb_encrypt_uart2self_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_server_framing2self_Monitor
  SOURCES components/tb_Monitors/tb_server_framing2self_Monitor/src/tb_server_framing2self_Monitor.c
  INCLUDES components/tb_Monitors/tb_server_framing2self_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_uart_driver_encrypt2self_Monitor
  SOURCES components/tb_Monitors/tb_uart_driver_encrypt2self_Monitor/src/tb_uart_driver_encrypt2self_Monitor.c
  INCLUDES components/tb_Monitors/tb_uart_driver_encrypt2self_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_encrypt_server2self_Monitor
  SOURCES components/tb_Monitors/tb_encrypt_server2self_Monitor/src/tb_encrypt_server2self_Monitor.c
  INCLUDES components/tb_Monitors/tb_encrypt_server2self_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_can_framing_can2self_status_Monitor
  SOURCES components/tb_Monitors/tb_can_framing_can2self_status_Monitor/src/tb_can_framing_can2self_status_Monitor.c
  INCLUDES components/tb_Monitors/tb_can_framing_can2self_status_Monitor/includes/ includes
)

DeclareCAmkESComponent(tb_can_driver_framing2self_Monitor
  SOURCES components/tb_Monitors/tb_can_driver_framing2self_Monitor/src/tb_can_driver_framing2self_Monitor.c
  INCLUDES components/tb_Monitors/tb_can_driver_framing2self_Monitor/includes/ includes
)

DeclareCAmkESRootserver(software.camkes)
