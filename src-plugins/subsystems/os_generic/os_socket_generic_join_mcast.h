/*
 * os_socket_generic_join_mcast.h
 *
 *  Created on: Jan 12, 2016
 *      Author: rogge
 */

#ifndef _OS_SOCKET_GENERIC_JOIN_MCAST_H_
#define _OS_SOCKET_GENERIC_JOIN_MCAST_H_

#include "common/common_types.h"
#include "subsystems/os_socket.h"

EXPORT int os_socket_generic_join_mcast_recv(struct os_socket *sock,
    const struct netaddr *multicast,
    const struct os_interface_data *oif,
    enum oonf_log_source log_src);

EXPORT int os_socket_generic_join_mcast_send(struct os_socket *sock,
    const struct netaddr *multicast,
    const struct os_interface_data *oif, bool loop,
    enum oonf_log_source log_src);

#endif /* _OS_SOCKET_GENERIC_JOIN_MCAST_H_ */
