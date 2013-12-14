#ifndef __LINUX_NETDEV_FEATURES_H
#define __LINUX_NETDEV_FEATURES_H

#include <linux/version.h>

#include <linux/netdevice.h>
#include <linux/types.h>

/* added via 9356b8fc */
#define NETIF_F_HW_VLAN_CTAG_RX			NETIF_F_HW_VLAN_RX
#define NETIF_F_HW_VLAN_CTAG_TX			NETIF_F_HW_VLAN_TX

/* added via d314774c */
#define NETIF_F_HW_VLAN_CTAG_FILTER		NETIF_F_HW_VLAN_FILTER

typedef u32 netdev_features_t;

#if !defined(NETIF_F_RXCSUM)
#define NETIF_F_RXCSUM 0
#endif

#endif /* __LINUX_NETDEV_FEATURES_H */
