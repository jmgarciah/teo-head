# Copyright: 2014 UC3M
# Author: Juan G Victores
# CopyPolicy: Released under the terms of the GNU GPL v2.0.

set(appname cvFaces)


file(GLOB conf ${CMAKE_CURRENT_SOURCE_DIR}/conf/*.ini)
file(GLOB xml ${CMAKE_CURRENT_SOURCE_DIR}/conf/*.xml)
file(GLOB scripts ${CMAKE_CURRENT_SOURCE_DIR}/scripts/*.template)

yarp_install(FILES ${conf} DESTINATION ${TEO-HEAD_CONTEXTS_INSTALL_DIR}/${appname})
yarp_install(FILES ${xml} DESTINATION ${TEO-HEAD_CONTEXTS_INSTALL_DIR}/${appname})
yarp_install(FILES ${scripts} DESTINATION ${TEO-HEAD_APPLICATIONS_TEMPLATES_INSTALL_DIR})

