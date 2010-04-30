// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "CvStereoGCState.pypp.hpp"

namespace bp = boost::python;

struct CvStereoGCState_wrapper : CvStereoGCState, bp::wrapper< CvStereoGCState > {

    CvStereoGCState_wrapper(CvStereoGCState const & arg )
    : CvStereoGCState( arg )
      , bp::wrapper< CvStereoGCState >(){
        // copy constructor
        
    }

    CvStereoGCState_wrapper()
    : CvStereoGCState()
      , bp::wrapper< CvStereoGCState >(){
        // null constructor
        
    }

    cv::Mat left_as_Mat;
    CvMat left_as_CvMat;
    void set_left(cv::Mat const &new_left)
    {
        left_as_Mat = new_left; // to keep a reference to left
        left_as_CvMat = left_as_Mat; // to ensure left points to a valid CvMat
        left = &left_as_CvMat;
    }
    cv::Mat & get_left()
    {
        if(left != &left_as_CvMat) set_left(cv::Mat(left));
        return left_as_Mat;
    }

    cv::Mat right_as_Mat;
    CvMat right_as_CvMat;
    void set_right(cv::Mat const &new_right)
    {
        right_as_Mat = new_right; // to keep a reference to right
        right_as_CvMat = right_as_Mat; // to ensure right points to a valid CvMat
        right = &right_as_CvMat;
    }
    cv::Mat & get_right()
    {
        if(right != &right_as_CvMat) set_right(cv::Mat(right));
        return right_as_Mat;
    }

    cv::Mat dispLeft_as_Mat;
    CvMat dispLeft_as_CvMat;
    void set_dispLeft(cv::Mat const &new_dispLeft)
    {
        dispLeft_as_Mat = new_dispLeft; // to keep a reference to dispLeft
        dispLeft_as_CvMat = dispLeft_as_Mat; // to ensure dispLeft points to a valid CvMat
        dispLeft = &dispLeft_as_CvMat;
    }
    cv::Mat & get_dispLeft()
    {
        if(dispLeft != &dispLeft_as_CvMat) set_dispLeft(cv::Mat(dispLeft));
        return dispLeft_as_Mat;
    }

    cv::Mat dispRight_as_Mat;
    CvMat dispRight_as_CvMat;
    void set_dispRight(cv::Mat const &new_dispRight)
    {
        dispRight_as_Mat = new_dispRight; // to keep a reference to dispRight
        dispRight_as_CvMat = dispRight_as_Mat; // to ensure dispRight points to a valid CvMat
        dispRight = &dispRight_as_CvMat;
    }
    cv::Mat & get_dispRight()
    {
        if(dispRight != &dispRight_as_CvMat) set_dispRight(cv::Mat(dispRight));
        return dispRight_as_Mat;
    }

    cv::Mat ptrLeft_as_Mat;
    CvMat ptrLeft_as_CvMat;
    void set_ptrLeft(cv::Mat const &new_ptrLeft)
    {
        ptrLeft_as_Mat = new_ptrLeft; // to keep a reference to ptrLeft
        ptrLeft_as_CvMat = ptrLeft_as_Mat; // to ensure ptrLeft points to a valid CvMat
        ptrLeft = &ptrLeft_as_CvMat;
    }
    cv::Mat & get_ptrLeft()
    {
        if(ptrLeft != &ptrLeft_as_CvMat) set_ptrLeft(cv::Mat(ptrLeft));
        return ptrLeft_as_Mat;
    }

    cv::Mat ptrRight_as_Mat;
    CvMat ptrRight_as_CvMat;
    void set_ptrRight(cv::Mat const &new_ptrRight)
    {
        ptrRight_as_Mat = new_ptrRight; // to keep a reference to ptrRight
        ptrRight_as_CvMat = ptrRight_as_Mat; // to ensure ptrRight points to a valid CvMat
        ptrRight = &ptrRight_as_CvMat;
    }
    cv::Mat & get_ptrRight()
    {
        if(ptrRight != &ptrRight_as_CvMat) set_ptrRight(cv::Mat(ptrRight));
        return ptrRight_as_Mat;
    }

    cv::Mat vtxBuf_as_Mat;
    CvMat vtxBuf_as_CvMat;
    void set_vtxBuf(cv::Mat const &new_vtxBuf)
    {
        vtxBuf_as_Mat = new_vtxBuf; // to keep a reference to vtxBuf
        vtxBuf_as_CvMat = vtxBuf_as_Mat; // to ensure vtxBuf points to a valid CvMat
        vtxBuf = &vtxBuf_as_CvMat;
    }
    cv::Mat & get_vtxBuf()
    {
        if(vtxBuf != &vtxBuf_as_CvMat) set_vtxBuf(cv::Mat(vtxBuf));
        return vtxBuf_as_Mat;
    }

    cv::Mat edgeBuf_as_Mat;
    CvMat edgeBuf_as_CvMat;
    void set_edgeBuf(cv::Mat const &new_edgeBuf)
    {
        edgeBuf_as_Mat = new_edgeBuf; // to keep a reference to edgeBuf
        edgeBuf_as_CvMat = edgeBuf_as_Mat; // to ensure edgeBuf points to a valid CvMat
        edgeBuf = &edgeBuf_as_CvMat;
    }
    cv::Mat & get_edgeBuf()
    {
        if(edgeBuf != &edgeBuf_as_CvMat) set_edgeBuf(cv::Mat(edgeBuf));
        return edgeBuf_as_Mat;
    }

};

void register_CvStereoGCState_class(){

    bp::class_< CvStereoGCState_wrapper >( "CvStereoGCState" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvStereoGCState >() )    
        .def_readwrite( "Ithreshold", &CvStereoGCState::Ithreshold )    
        .def_readwrite( "K", &CvStereoGCState::K )    
        .def_readwrite( "interactionRadius", &CvStereoGCState::interactionRadius )    
        .def_readwrite( "lambda", &CvStereoGCState::lambda )    
        .def_readwrite( "lambda1", &CvStereoGCState::lambda1 )    
        .def_readwrite( "lambda2", &CvStereoGCState::lambda2 )    
        .def_readwrite( "maxIters", &CvStereoGCState::maxIters )    
        .def_readwrite( "minDisparity", &CvStereoGCState::minDisparity )    
        .def_readwrite( "numberOfDisparities", &CvStereoGCState::numberOfDisparities )    
        .def_readwrite( "occlusionCost", &CvStereoGCState::occlusionCost )    
        .add_property( "left", bp::make_function(&::CvStereoGCState_wrapper::get_left, bp::return_internal_reference<>()),
        &::CvStereoGCState_wrapper::set_left)    
        .add_property( "right", bp::make_function(&::CvStereoGCState_wrapper::get_right, bp::return_internal_reference<>()),
        &::CvStereoGCState_wrapper::set_right)    
        .add_property( "dispLeft", bp::make_function(&::CvStereoGCState_wrapper::get_dispLeft, bp::return_internal_reference<>()),
        &::CvStereoGCState_wrapper::set_dispLeft)    
        .add_property( "dispRight", bp::make_function(&::CvStereoGCState_wrapper::get_dispRight, bp::return_internal_reference<>()),
        &::CvStereoGCState_wrapper::set_dispRight)    
        .add_property( "ptrLeft", bp::make_function(&::CvStereoGCState_wrapper::get_ptrLeft, bp::return_internal_reference<>()),
        &::CvStereoGCState_wrapper::set_ptrLeft)    
        .add_property( "ptrRight", bp::make_function(&::CvStereoGCState_wrapper::get_ptrRight, bp::return_internal_reference<>()),
        &::CvStereoGCState_wrapper::set_ptrRight)    
        .add_property( "vtxBuf", bp::make_function(&::CvStereoGCState_wrapper::get_vtxBuf, bp::return_internal_reference<>()),
        &::CvStereoGCState_wrapper::set_vtxBuf)    
        .add_property( "edgeBuf", bp::make_function(&::CvStereoGCState_wrapper::get_edgeBuf, bp::return_internal_reference<>()),
        &::CvStereoGCState_wrapper::set_edgeBuf);

}
