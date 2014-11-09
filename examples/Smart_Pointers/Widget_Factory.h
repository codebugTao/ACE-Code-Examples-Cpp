/* -*- C++ -*- */
//=============================================================================
/**
 *  @file    Widget_Factory.h
 *
 *  Widget_Factory.h,v 1.1.1.1 2001/08/29 12:02:09 shuston Exp
 *
 *  @author Christopher Kohlhoff <chris@kohlhoff.com>
 */
//=============================================================================

#ifndef WIDGET_FACTORY_H
#define WIDGET_FACTORY_H

#include "Widget.h"

/**
 * @class Widget_Factory
 *
 * @brief Used to create Widget instances.
 */
class Widget_Factory
{
public:
  /// Create an instance of a widget. Ownership of the newly created object is
  /// transferred to the caller.
  static Widget *create_widget (void);
};

#endif /* WIDGET_FACTORY_H */
