// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "ndarray.hpp"
#include "RotatedRect.pypp.hpp"

namespace bp = boost::python;

void register_RotatedRect_class(){

    { //::cv::RotatedRect
        typedef bp::class_< cv::RotatedRect > RotatedRect_exposer_t;
        RotatedRect_exposer_t RotatedRect_exposer = RotatedRect_exposer_t( "RotatedRect", bp::init< >() );
        bp::scope RotatedRect_scope( RotatedRect_exposer );
        RotatedRect_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::RotatedRect >() );
        RotatedRect_exposer.def( bp::init< cv::Point2f const &, cv::Size2f const &, float >(( bp::arg("_center"), bp::arg("_size"), bp::arg("_angle") )) );
        RotatedRect_exposer.def( bp::init< CvBox2D const & >(( bp::arg("box") )) );
        bp::implicitly_convertible< CvBox2D const &, cv::RotatedRect >();
        { //::cv::RotatedRect::boundingRect
        
            typedef ::cv::Rect ( ::cv::RotatedRect::*boundingRect_function_type )(  ) const;
            
            RotatedRect_exposer.def( 
                "boundingRect"
                , boundingRect_function_type( &::cv::RotatedRect::boundingRect ) );
        
        }
        RotatedRect_exposer.def( "__temp_func", &cv::RotatedRect::operator ::CvBox2D  );
        { //::cv::RotatedRect::points
        
            typedef void ( ::cv::RotatedRect::*points_function_type )( ::cv::Point2f * ) const;
            
            RotatedRect_exposer.def( 
                "points"
                , points_function_type( &::cv::RotatedRect::points )
                , ( bp::arg("pt") ) );
        
        }
        RotatedRect_exposer.def_readwrite( "angle", &cv::RotatedRect::angle );
        RotatedRect_exposer.def_readwrite( "center", &cv::RotatedRect::center );
        RotatedRect_exposer.def_readwrite( "size", &cv::RotatedRect::size );
        RotatedRect_exposer.def("from_ndarray", &sdcpp::from_ndarray< cv::RotatedRect >, (bp::arg("inst_ndarray")) );
        RotatedRect_exposer.staticmethod("from_ndarray");
        RotatedRect_exposer.add_property("ndarray", &sdcpp::as_ndarray< cv::RotatedRect >);
    }

}
