# Copyright: 2015 UC3M
# Author: Juan G Victores
# CopyPolicy: Released under the terms of the GNU GPL v2.0.

set(appname speechRecognition1)


file(GLOB conf ${CMAKE_CURRENT_SOURCE_DIR}/conf/*.ini)
file(GLOB lm ${CMAKE_CURRENT_SOURCE_DIR}/conf/*.lm)
file(GLOB dic ${CMAKE_CURRENT_SOURCE_DIR}/conf/*.dic)

yarp_install(FILES ${conf} DESTINATION ${TEO-HEAD_CONTEXTS_INSTALL_DIR}/${appname})
yarp_install(FILES ${lm} DESTINATION ${TEO-HEAD_CONTEXTS_INSTALL_DIR}/${appname})
yarp_install(FILES ${dic} DESTINATION ${TEO-HEAD_CONTEXTS_INSTALL_DIR}/${appname})

