/*==============================================================================

  Program: 3D Slicer

  Portions (c) Copyright Brigham and Women's Hospital (BWH) All Rights Reserved.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

==============================================================================*/

// Qt includes
#include <QtPlugin>

// PathExplorer Logic includes
#include <vtkSlicerPathExplorerLogic.h>

// PathExplorer includes
#include "qSlicerPathExplorerModule.h"
#include "qSlicerPathExplorerModuleWidget.h"

//-----------------------------------------------------------------------------
Q_EXPORT_PLUGIN2(qSlicerPathExplorerModule, qSlicerPathExplorerModule);

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerPathExplorerModulePrivate
{
public:
  qSlicerPathExplorerModulePrivate();
};

//-----------------------------------------------------------------------------
// qSlicerPathExplorerModulePrivate methods

//-----------------------------------------------------------------------------
qSlicerPathExplorerModulePrivate
::qSlicerPathExplorerModulePrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerPathExplorerModule methods

//-----------------------------------------------------------------------------
qSlicerPathExplorerModule
::qSlicerPathExplorerModule(QObject* _parent)
  : Superclass(_parent)
  , d_ptr(new qSlicerPathExplorerModulePrivate)
{
}

//-----------------------------------------------------------------------------
qSlicerPathExplorerModule::~qSlicerPathExplorerModule()
{
}

//-----------------------------------------------------------------------------
QString qSlicerPathExplorerModule::helpText()const
{
  return "This is a loadable module bundled in an extension";
}

//-----------------------------------------------------------------------------
QString qSlicerPathExplorerModule::acknowledgementText()const
{
  return "This work was was partially funded by NIH grant 3P41RR013218-12S1";
}

//-----------------------------------------------------------------------------
QStringList qSlicerPathExplorerModule::contributors()const
{
  QStringList moduleContributors;
  moduleContributors << QString("Jean-Christophe Fillion-Robin (Kitware)");
  return moduleContributors;
}

//-----------------------------------------------------------------------------
QIcon qSlicerPathExplorerModule::icon()const
{
  return QIcon(":/Icons/PathExplorer.png");
}

//-----------------------------------------------------------------------------
QStringList qSlicerPathExplorerModule::categories() const
{
  return QStringList() << "Examples";
}

//-----------------------------------------------------------------------------
QStringList qSlicerPathExplorerModule::dependencies() const
{
  return QStringList();
}

//-----------------------------------------------------------------------------
void qSlicerPathExplorerModule::setup()
{
  this->Superclass::setup();
}

//-----------------------------------------------------------------------------
qSlicerAbstractModuleRepresentation * qSlicerPathExplorerModule
::createWidgetRepresentation()
{
  return new qSlicerPathExplorerModuleWidget;
}

//-----------------------------------------------------------------------------
vtkMRMLAbstractLogic* qSlicerPathExplorerModule::createLogic()
{
  return vtkSlicerPathExplorerLogic::New();
}
