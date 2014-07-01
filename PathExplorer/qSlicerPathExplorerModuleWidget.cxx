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
#include <QDebug>

// SlicerQt includes
#include "qSlicerPathExplorerModuleWidget.h"
#include "ui_qSlicerPathExplorerModuleWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerPathExplorerModuleWidgetPrivate: public Ui_qSlicerPathExplorerModuleWidget
{
public:
  qSlicerPathExplorerModuleWidgetPrivate();
};

//-----------------------------------------------------------------------------
// qSlicerPathExplorerModuleWidgetPrivate methods

//-----------------------------------------------------------------------------
qSlicerPathExplorerModuleWidgetPrivate::qSlicerPathExplorerModuleWidgetPrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerPathExplorerModuleWidget methods

//-----------------------------------------------------------------------------
qSlicerPathExplorerModuleWidget::qSlicerPathExplorerModuleWidget(QWidget* _parent)
  : Superclass( _parent )
  , d_ptr( new qSlicerPathExplorerModuleWidgetPrivate )
{
}

//-----------------------------------------------------------------------------
qSlicerPathExplorerModuleWidget::~qSlicerPathExplorerModuleWidget()
{
}

//-----------------------------------------------------------------------------
void qSlicerPathExplorerModuleWidget::setup()
{
  Q_D(qSlicerPathExplorerModuleWidget);
  d->setupUi(this);
  this->Superclass::setup();
}

