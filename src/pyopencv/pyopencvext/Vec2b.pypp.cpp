// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "ndarray.hpp"
#include "opencv_converters.hpp"
#include "Vec2b.pypp.hpp"

namespace bp = boost::python;

void register_Vec2b_class(){

    { //::cv::Vec< unsigned char, 2 >
        typedef bp::class_< cv::Vec< unsigned char, 2 > > Vec2b_exposer_t;
        Vec2b_exposer_t Vec2b_exposer = Vec2b_exposer_t( "Vec2b", bp::init< >() );
        bp::scope Vec2b_scope( Vec2b_exposer );
        Vec2b_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Vec< unsigned char, 2 > >() );
        bp::scope().attr("depth") = (int)cv::Vec<unsigned char, 2>::depth;
        bp::scope().attr("channels") = (int)cv::Vec<unsigned char, 2>::channels;
        bp::scope().attr("type") = (int)cv::Vec<unsigned char, 2>::type;
        Vec2b_exposer.def( bp::init< unsigned char >(( bp::arg("v0") )) );
        bp::implicitly_convertible< unsigned char, cv::Vec< unsigned char, 2 > >();
        Vec2b_exposer.def( bp::init< unsigned char, unsigned char >(( bp::arg("v0"), bp::arg("v1") )) );
        Vec2b_exposer.def( bp::init< unsigned char, unsigned char, unsigned char >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2") )) );
        Vec2b_exposer.def( bp::init< unsigned char, unsigned char, unsigned char, unsigned char >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3") )) );
        Vec2b_exposer.def( bp::init< unsigned char, unsigned char, unsigned char, unsigned char, unsigned char >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4") )) );
        Vec2b_exposer.def( bp::init< unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5") )) );
        Vec2b_exposer.def( bp::init< unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6") )) );
        Vec2b_exposer.def( bp::init< unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7") )) );
        Vec2b_exposer.def( bp::init< unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7"), bp::arg("v8") )) );
        Vec2b_exposer.def( bp::init< unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7"), bp::arg("v8"), bp::arg("v9") )) );
        Vec2b_exposer.def( bp::init< cv::Vec< unsigned char, 2 > const & >(( bp::arg("v") )) );
        { //::cv::Vec< unsigned char, 2 >::all
        
            typedef cv::Vec< unsigned char, 2 > exported_class_t;
            typedef ::cv::Vec< unsigned char, 2 > ( *all_function_type )( unsigned char );
            
            Vec2b_exposer.def( 
                "all"
                , all_function_type( &::cv::Vec< unsigned char, 2 >::all )
                , ( bp::arg("alpha") ) );
        
        }
        { //::cv::Vec< unsigned char, 2 >::cross
        
            typedef cv::Vec< unsigned char, 2 > exported_class_t;
            typedef ::cv::Vec< unsigned char, 2 > ( exported_class_t::*cross_function_type )( ::cv::Vec< unsigned char, 2 > const & ) const;
            
            Vec2b_exposer.def( 
                "cross"
                , cross_function_type( &::cv::Vec< unsigned char, 2 >::cross )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< unsigned char, 2 >::ddot
        
            typedef cv::Vec< unsigned char, 2 > exported_class_t;
            typedef double ( exported_class_t::*ddot_function_type )( ::cv::Vec< unsigned char, 2 > const & ) const;
            
            Vec2b_exposer.def( 
                "ddot"
                , ddot_function_type( &::cv::Vec< unsigned char, 2 >::ddot )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< unsigned char, 2 >::dot
        
            typedef cv::Vec< unsigned char, 2 > exported_class_t;
            typedef unsigned char ( exported_class_t::*dot_function_type )( ::cv::Vec< unsigned char, 2 > const & ) const;
            
            Vec2b_exposer.def( 
                "dot"
                , dot_function_type( &::cv::Vec< unsigned char, 2 >::dot )
                , ( bp::arg("v") ) );
        
        }
        Vec2b_exposer.def( "__temp_func", &cv::Vec< unsigned char, 2 >::operator ::CvScalar  );
        { //::cv::Vec< unsigned char, 2 >::operator[]
        
            typedef cv::Vec< unsigned char, 2 > exported_class_t;
            typedef unsigned char ( exported_class_t::*__getitem___function_type )( int ) const;
            
            Vec2b_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::Vec< unsigned char, 2 >::operator[] )
                , ( bp::arg("i") ) );
        
        }
        { //::cv::Vec< unsigned char, 2 >::operator[]
        
            typedef cv::Vec< unsigned char, 2 > exported_class_t;
            typedef unsigned char & ( exported_class_t::*__getitem___function_type )( int ) ;
            
            Vec2b_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::Vec< unsigned char, 2 >::operator[] )
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        Vec2b_exposer.staticmethod( "all" );
        Vec2b_exposer.def("from_ndarray", &sdcpp::from_ndarray< cv::Vec2b >, (bp::arg("inst_ndarray")) );
        Vec2b_exposer.staticmethod("from_ndarray");
        Vec2b_exposer.add_property("ndarray", &sdcpp::as_ndarray< cv::Vec2b >);
        Vec2b_exposer.def("__iadd__", &__iadd__<cv::Vec2b, cv::Vec2b>, bp::return_self<>() );
        Vec2b_exposer.def("__isub__", &__isub__<cv::Vec2b, cv::Vec2b>, bp::return_self<>() );
        Vec2b_exposer.def("__iadd__", &__iadd__<cv::Vec2b, cv::Vec2s>, bp::return_self<>() );
        Vec2b_exposer.def("__isub__", &__isub__<cv::Vec2b, cv::Vec2s>, bp::return_self<>() );
        Vec2b_exposer.def("__iadd__", &__iadd__<cv::Vec2b, cv::Vec2w>, bp::return_self<>() );
        Vec2b_exposer.def("__isub__", &__isub__<cv::Vec2b, cv::Vec2w>, bp::return_self<>() );
        Vec2b_exposer.def("__iadd__", &__iadd__<cv::Vec2b, cv::Vec2i>, bp::return_self<>() );
        Vec2b_exposer.def("__isub__", &__isub__<cv::Vec2b, cv::Vec2i>, bp::return_self<>() );
        Vec2b_exposer.def("__iadd__", &__iadd__<cv::Vec2b, cv::Vec2f>, bp::return_self<>() );
        Vec2b_exposer.def("__isub__", &__isub__<cv::Vec2b, cv::Vec2f>, bp::return_self<>() );
        Vec2b_exposer.def("__iadd__", &__iadd__<cv::Vec2b, cv::Vec2d>, bp::return_self<>() );
        Vec2b_exposer.def("__isub__", &__isub__<cv::Vec2b, cv::Vec2d>, bp::return_self<>() );
        Vec2b_exposer.def("__add__", &__add__<cv::Vec2b, cv::Vec2b> );
        Vec2b_exposer.def("__sub__", &__sub__<cv::Vec2b, cv::Vec2b> );
        Vec2b_exposer.def("__eq__", &__eq__<cv::Vec2b, cv::Vec2b> );
        Vec2b_exposer.def("__ne__", &__ne__<cv::Vec2b, cv::Vec2b> );
        Vec2b_exposer.def("__imul__", &__imul__<cv::Vec2b, unsigned char>, bp::return_self<>() );
        Vec2b_exposer.def("__mul__", &__mul__<cv::Vec2b, unsigned char> );
        Vec2b_exposer.def("__rmul__", &__rmul__<unsigned char, cv::Vec2b> );
        Vec2b_exposer.def("__neg__", &__neg__<cv::Vec2b> );
    }

}
