cmake_minimum_required(VERSION 3.8.2)

project (testevent C)



DeclareCAmkESComponent(emitter_impl
  SOURCES components/emitter_impl//src/emitter.c components/emitter_impl/src/tb_emitter_impl.c
  INCLUDES components/emitter_impl/includes/ includes
)

DeclareCAmkESComponent(consumer_impl
  SOURCES components/consumer_impl//src/consumer.c components/consumer_impl/src/tb_consumer_impl.c
  INCLUDES components/consumer_impl/includes/ includes
)

DeclareCAmkESRootserver(testevent.camkes)
