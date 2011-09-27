#include "MyWindow.h"
#include "dynamics/BodyNodeDynamics.h"
#include "dynamics/SkeletonDynamics.h"
#include "kinematics/FileInfoSkel.hpp"
#include "utils/Paths.h"



using namespace std;
using namespace Eigen;
using namespace kinematics;
using namespace dynamics;

int main(int argc, char* argv[])
{
    FileInfoSkel<SkeletonDynamics> model;
    model.loadFile(GROUNDZERO_DATA_PATH"/skel/Chain.skel", kinematics::SKEL);

    MyWindow window((SkeletonDynamics*)model.getSkel());
    
    glutInit(&argc, argv);
    window.initWindow(640,480,"expForwardDyn");
    glutMainLoop();

    return 0;
}