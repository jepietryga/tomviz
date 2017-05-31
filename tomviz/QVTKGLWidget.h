/******************************************************************************

  This source file is part of the tomviz project.

  Copyright Kitware, Inc.

  This source code is released under the New BSD License, (the "License").

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

******************************************************************************/
#ifndef tomvizQVTKGLWidget_h
#define tomvizQVTKGLWidget_h

#include <QVTKOpenGLWidget.h>

namespace tomviz {

class QVTKGLWidget : public QVTKOpenGLWidget
{
  Q_OBJECT

public:
  QVTKGLWidget(QWidget* parent = nullptr,
               Qt::WindowFlags f = Qt::WindowFlags());
  ~QVTKGLWidget() override;

  void setEnableHiDPI(bool enable) override;

private:
};
}

#endif // tomvizQVTKGLWidget_h
