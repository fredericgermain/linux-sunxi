/*
 * Allwinner sun4i USB phy header
 *
 * Copyright (C) 2015 Hans de Goede <hdegoede@redhat.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef __PHY_SUN4I_USB_H
#define __PHY_SUN4I_USB_H

#include <linux/phy/phy.h>

/**
 * sun4i_usb_phy_set_id_detect() - Set or clear id bit in the phy status reg
 *
 * @phy: Reference to sun4i usb phy0
 * @val: value to set the id bit to
 */
void sun4i_usb_phy_set_id_detect(struct phy *phy, bool val);

/**
 * sun4i_usb_phy_set_vbus_detect() - Set or clear vbus bit in the phy status
 * reg.
 *
 * @phy: Reference to sun4i usb phy0
 * @val: value to set the vbus bit to
 */
void sun4i_usb_phy_set_vbus_detect(struct phy *phy, bool val);

#endif
