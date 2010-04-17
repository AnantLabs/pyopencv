// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "CvPoint2D64f.pypp.hpp"

namespace bp = boost::python;

void register_CvPoint2D64f_class(){

    bp::class_< CvPoint2D64f >( "CvPoint2D64f", "\n2D point with double precision floating-point coordinates."
    "\n"
    "\nWarning: This structure is obsolete. It exists only to support "
    "\nbackward compatibility. Please use class Point2d instead."
    "\nReference:"
    "\n    `wiki http://opencv.willowgarage.com/documentation/basic_structures.html#cvpoint2d64f`_" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvPoint2D64f >(), "\n2D point with double precision floating-point coordinates."
    "\n"
    "\nWarning: This structure is obsolete. It exists only to support "
    "\nbackward compatibility. Please use class Point2d instead."
    "\nReference:"
    "\n    `wiki http://opencv.willowgarage.com/documentation/basic_structures.html#cvpoint2d64f`_" )    
        .def_readwrite( "x", &CvPoint2D64f::x )    
        .def_readwrite( "y", &CvPoint2D64f::y );

}
