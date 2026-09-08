#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "maze_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__srv__Error_Request() -> *const std::ffi::c_void;
}

#[link(name = "maze_interfaces__rosidl_generator_c")]
extern "C" {
    fn maze_interfaces__srv__Error_Request__init(msg: *mut Error_Request) -> bool;
    fn maze_interfaces__srv__Error_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Error_Request>, size: usize) -> bool;
    fn maze_interfaces__srv__Error_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Error_Request>);
    fn maze_interfaces__srv__Error_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Error_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Error_Request>) -> bool;
}

// Corresponds to maze_interfaces__srv__Error_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Error_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stop: bool,

}



impl Default for Error_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !maze_interfaces__srv__Error_Request__init(&mut msg as *mut _) {
        panic!("Call to maze_interfaces__srv__Error_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Error_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__srv__Error_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__srv__Error_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__srv__Error_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Error_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Error_Request where Self: Sized {
  const TYPE_NAME: &'static str = "maze_interfaces/srv/Error_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__srv__Error_Request() }
  }
}


#[link(name = "maze_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__srv__Error_Response() -> *const std::ffi::c_void;
}

#[link(name = "maze_interfaces__rosidl_generator_c")]
extern "C" {
    fn maze_interfaces__srv__Error_Response__init(msg: *mut Error_Response) -> bool;
    fn maze_interfaces__srv__Error_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Error_Response>, size: usize) -> bool;
    fn maze_interfaces__srv__Error_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Error_Response>);
    fn maze_interfaces__srv__Error_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Error_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Error_Response>) -> bool;
}

// Corresponds to maze_interfaces__srv__Error_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Error_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for Error_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !maze_interfaces__srv__Error_Response__init(&mut msg as *mut _) {
        panic!("Call to maze_interfaces__srv__Error_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Error_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__srv__Error_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__srv__Error_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__srv__Error_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Error_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Error_Response where Self: Sized {
  const TYPE_NAME: &'static str = "maze_interfaces/srv/Error_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__srv__Error_Response() }
  }
}






#[link(name = "maze_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__maze_interfaces__srv__Error() -> *const std::ffi::c_void;
}

// Corresponds to maze_interfaces__srv__Error
#[allow(missing_docs, non_camel_case_types)]
pub struct Error;

impl rosidl_runtime_rs::Service for Error {
    type Request = Error_Request;
    type Response = Error_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__maze_interfaces__srv__Error() }
    }
}


