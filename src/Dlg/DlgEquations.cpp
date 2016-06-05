/******************************************************************************************************
 * (C) 2014 markummitchell@github.com. This file is part of Engauge Digitizer, which is released      *
 * under GNU General Public License version 2 (GPLv2) or (at your option) any later version. See file *
 * LICENSE or go to gnu.org/licenses for details. Distribution requires prior written permission.     *
 ******************************************************************************************************/

#include "DlgEquations.h"
#include "Equation.h"
#include "GraphicsScene.h"
#include "GraphicsView.h"
#include "Logger.h"
#include <QHBoxLayout>
#include <QPushButton>

DlgEquations::DlgEquations ()
{
  LOG4CPP_INFO_S ((*mainCat)) << "DlgEquations::DlgEquations";

  setWindowModality (Qt::WindowModal);

  m_layoutOverall = new QVBoxLayout;
  setLayout (m_layoutOverall);

  // Top row
  QWidget *widgetNonButtons = new QWidget;
  m_layoutOverall->addWidget (widgetNonButtons);

  QHBoxLayout *layoutNonButtons = new QHBoxLayout;
  widgetNonButtons->setLayout (layoutNonButtons);

  m_equation = new Equation;
  layoutNonButtons->addWidget (m_equation);

  //  m_scene = new GraphicsScene ();
  //  m_view = new GraphicsView ();
  //  layoutNonButtons->addWidget (m_view);

  // Bottom row
  QWidget *widgetButtons = new QWidget;
  m_layoutOverall->addWidget (widgetButtons);

  //  m_btnOk = new QPushButton(tr ("Ok"));
  //  connect (m_btnOk, SIGNAL (released ()), this, SLOT (accept ()));

  QHBoxLayout *layoutButtons = new QHBoxLayout;
  widgetButtons->setLayout (layoutButtons);
  //  layoutButtons->addWidget (m_btnOk);
}
