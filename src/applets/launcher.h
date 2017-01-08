/*
 * This file is part of graphene-desktop, the desktop environment of VeltOS.
 * Copyright (C) 2016 Velt Technologies, Aidan Shafran <zelbrium@gmail.com>
 * Licensed under the Apache License 2 <www.apache.org/licenses/LICENSE-2.0>.
 */

#ifndef __GRAPHENE_LAUNCHER_APPLET_H__
#define __GRAPHENE_LAUNCHER_APPLET_H__

#include "../cmk/button.h"

G_BEGIN_DECLS

#define GRAPHENE_TYPE_LAUNCHER_APPLET graphene_launcher_applet_get_type()
G_DECLARE_FINAL_TYPE(GrapheneLauncherApplet, graphene_launcher_applet, GRAPHENE, LAUNCHER_APPLET, CmkButton)

GrapheneLauncherApplet * graphene_launcher_applet_new();


#define GRAPHENE_TYPE_LAUNCHER_POPUP graphene_launcher_popup_get_type()
G_DECLARE_FINAL_TYPE(GrapheneLauncherPopup, graphene_launcher_popup, GRAPHENE, LAUNCHER_POPUP, CmkWidget)

GrapheneLauncherPopup * graphene_launcher_popup_new();

G_END_DECLS

#endif /* __GRAPHENE_LAUNCHER_APPLET_H__ */
