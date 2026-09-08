
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "maze_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__action__MoveX_Goal() -> *const std::ffi::c_void;
}

#[link(name = "maze_interfaces__rosidl_generator_c")]
extern "C" {
    fn maze_interfaces__action__MoveX_Goal__init(msg: *mut MoveX_Goal) -> bool;
    fn maze_interfaces__action__MoveX_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveX_Goal>, size: usize) -> bool;
    fn maze_interfaces__action__MoveX_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveX_Goal>);
    fn maze_interfaces__action__MoveX_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveX_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveX_Goal>) -> bool;
}

// Corresponds to maze_interfaces__action__MoveX_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveX_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub target_distance: f32,

}



impl Default for MoveX_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !maze_interfaces__action__MoveX_Goal__init(&mut msg as *mut _) {
        panic!("Call to maze_interfaces__action__MoveX_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveX_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__MoveX_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__MoveX_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__MoveX_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveX_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveX_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "maze_interfaces/action/MoveX_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__action__MoveX_Goal() }
  }
}


#[link(name = "maze_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__action__MoveX_Result() -> *const std::ffi::c_void;
}

#[link(name = "maze_interfaces__rosidl_generator_c")]
extern "C" {
    fn maze_interfaces__action__MoveX_Result__init(msg: *mut MoveX_Result) -> bool;
    fn maze_interfaces__action__MoveX_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveX_Result>, size: usize) -> bool;
    fn maze_interfaces__action__MoveX_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveX_Result>);
    fn maze_interfaces__action__MoveX_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveX_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveX_Result>) -> bool;
}

// Corresponds to maze_interfaces__action__MoveX_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveX_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub final_distance: f32,

}



impl Default for MoveX_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !maze_interfaces__action__MoveX_Result__init(&mut msg as *mut _) {
        panic!("Call to maze_interfaces__action__MoveX_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveX_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__MoveX_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__MoveX_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__MoveX_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveX_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveX_Result where Self: Sized {
  const TYPE_NAME: &'static str = "maze_interfaces/action/MoveX_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__action__MoveX_Result() }
  }
}


#[link(name = "maze_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__action__MoveX_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "maze_interfaces__rosidl_generator_c")]
extern "C" {
    fn maze_interfaces__action__MoveX_Feedback__init(msg: *mut MoveX_Feedback) -> bool;
    fn maze_interfaces__action__MoveX_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveX_Feedback>, size: usize) -> bool;
    fn maze_interfaces__action__MoveX_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveX_Feedback>);
    fn maze_interfaces__action__MoveX_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveX_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveX_Feedback>) -> bool;
}

// Corresponds to maze_interfaces__action__MoveX_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveX_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_distance_traveled: f32,

}



impl Default for MoveX_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !maze_interfaces__action__MoveX_Feedback__init(&mut msg as *mut _) {
        panic!("Call to maze_interfaces__action__MoveX_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveX_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__MoveX_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__MoveX_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__MoveX_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveX_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveX_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "maze_interfaces/action/MoveX_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__action__MoveX_Feedback() }
  }
}


#[link(name = "maze_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__action__MoveX_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "maze_interfaces__rosidl_generator_c")]
extern "C" {
    fn maze_interfaces__action__MoveX_FeedbackMessage__init(msg: *mut MoveX_FeedbackMessage) -> bool;
    fn maze_interfaces__action__MoveX_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveX_FeedbackMessage>, size: usize) -> bool;
    fn maze_interfaces__action__MoveX_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveX_FeedbackMessage>);
    fn maze_interfaces__action__MoveX_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveX_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveX_FeedbackMessage>) -> bool;
}

// Corresponds to maze_interfaces__action__MoveX_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveX_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::MoveX_Feedback,

}



impl Default for MoveX_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !maze_interfaces__action__MoveX_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to maze_interfaces__action__MoveX_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveX_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__MoveX_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__MoveX_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__MoveX_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveX_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveX_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "maze_interfaces/action/MoveX_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__action__MoveX_FeedbackMessage() }
  }
}


#[link(name = "maze_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__action__Yaw_Goal() -> *const std::ffi::c_void;
}

#[link(name = "maze_interfaces__rosidl_generator_c")]
extern "C" {
    fn maze_interfaces__action__Yaw_Goal__init(msg: *mut Yaw_Goal) -> bool;
    fn maze_interfaces__action__Yaw_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Yaw_Goal>, size: usize) -> bool;
    fn maze_interfaces__action__Yaw_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Yaw_Goal>);
    fn maze_interfaces__action__Yaw_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Yaw_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<Yaw_Goal>) -> bool;
}

// Corresponds to maze_interfaces__action__Yaw_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Yaw_Goal {
    /// "left" or "right"
    pub direction: rosidl_runtime_rs::String,

}



impl Default for Yaw_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !maze_interfaces__action__Yaw_Goal__init(&mut msg as *mut _) {
        panic!("Call to maze_interfaces__action__Yaw_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Yaw_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__Yaw_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__Yaw_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__Yaw_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Yaw_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Yaw_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "maze_interfaces/action/Yaw_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__action__Yaw_Goal() }
  }
}


#[link(name = "maze_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__action__Yaw_Result() -> *const std::ffi::c_void;
}

#[link(name = "maze_interfaces__rosidl_generator_c")]
extern "C" {
    fn maze_interfaces__action__Yaw_Result__init(msg: *mut Yaw_Result) -> bool;
    fn maze_interfaces__action__Yaw_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Yaw_Result>, size: usize) -> bool;
    fn maze_interfaces__action__Yaw_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Yaw_Result>);
    fn maze_interfaces__action__Yaw_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Yaw_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<Yaw_Result>) -> bool;
}

// Corresponds to maze_interfaces__action__Yaw_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Yaw_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub final_direction: rosidl_runtime_rs::String,

}



impl Default for Yaw_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !maze_interfaces__action__Yaw_Result__init(&mut msg as *mut _) {
        panic!("Call to maze_interfaces__action__Yaw_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Yaw_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__Yaw_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__Yaw_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__Yaw_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Yaw_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Yaw_Result where Self: Sized {
  const TYPE_NAME: &'static str = "maze_interfaces/action/Yaw_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__action__Yaw_Result() }
  }
}


#[link(name = "maze_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__action__Yaw_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "maze_interfaces__rosidl_generator_c")]
extern "C" {
    fn maze_interfaces__action__Yaw_Feedback__init(msg: *mut Yaw_Feedback) -> bool;
    fn maze_interfaces__action__Yaw_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Yaw_Feedback>, size: usize) -> bool;
    fn maze_interfaces__action__Yaw_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Yaw_Feedback>);
    fn maze_interfaces__action__Yaw_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Yaw_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<Yaw_Feedback>) -> bool;
}

// Corresponds to maze_interfaces__action__Yaw_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Yaw_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_yaw: f32,

}



impl Default for Yaw_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !maze_interfaces__action__Yaw_Feedback__init(&mut msg as *mut _) {
        panic!("Call to maze_interfaces__action__Yaw_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Yaw_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__Yaw_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__Yaw_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__Yaw_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Yaw_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Yaw_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "maze_interfaces/action/Yaw_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__action__Yaw_Feedback() }
  }
}


#[link(name = "maze_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__action__Yaw_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "maze_interfaces__rosidl_generator_c")]
extern "C" {
    fn maze_interfaces__action__Yaw_FeedbackMessage__init(msg: *mut Yaw_FeedbackMessage) -> bool;
    fn maze_interfaces__action__Yaw_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Yaw_FeedbackMessage>, size: usize) -> bool;
    fn maze_interfaces__action__Yaw_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Yaw_FeedbackMessage>);
    fn maze_interfaces__action__Yaw_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Yaw_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<Yaw_FeedbackMessage>) -> bool;
}

// Corresponds to maze_interfaces__action__Yaw_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Yaw_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::Yaw_Feedback,

}



impl Default for Yaw_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !maze_interfaces__action__Yaw_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to maze_interfaces__action__Yaw_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Yaw_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__Yaw_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__Yaw_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__Yaw_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Yaw_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Yaw_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "maze_interfaces/action/Yaw_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__action__Yaw_FeedbackMessage() }
  }
}




#[link(name = "maze_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__action__MoveX_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "maze_interfaces__rosidl_generator_c")]
extern "C" {
    fn maze_interfaces__action__MoveX_SendGoal_Request__init(msg: *mut MoveX_SendGoal_Request) -> bool;
    fn maze_interfaces__action__MoveX_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveX_SendGoal_Request>, size: usize) -> bool;
    fn maze_interfaces__action__MoveX_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveX_SendGoal_Request>);
    fn maze_interfaces__action__MoveX_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveX_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveX_SendGoal_Request>) -> bool;
}

// Corresponds to maze_interfaces__action__MoveX_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveX_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::MoveX_Goal,

}



impl Default for MoveX_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !maze_interfaces__action__MoveX_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to maze_interfaces__action__MoveX_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveX_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__MoveX_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__MoveX_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__MoveX_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveX_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveX_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "maze_interfaces/action/MoveX_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__action__MoveX_SendGoal_Request() }
  }
}


#[link(name = "maze_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__action__MoveX_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "maze_interfaces__rosidl_generator_c")]
extern "C" {
    fn maze_interfaces__action__MoveX_SendGoal_Response__init(msg: *mut MoveX_SendGoal_Response) -> bool;
    fn maze_interfaces__action__MoveX_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveX_SendGoal_Response>, size: usize) -> bool;
    fn maze_interfaces__action__MoveX_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveX_SendGoal_Response>);
    fn maze_interfaces__action__MoveX_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveX_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveX_SendGoal_Response>) -> bool;
}

// Corresponds to maze_interfaces__action__MoveX_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveX_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for MoveX_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !maze_interfaces__action__MoveX_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to maze_interfaces__action__MoveX_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveX_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__MoveX_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__MoveX_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__MoveX_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveX_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveX_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "maze_interfaces/action/MoveX_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__action__MoveX_SendGoal_Response() }
  }
}


#[link(name = "maze_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__action__MoveX_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "maze_interfaces__rosidl_generator_c")]
extern "C" {
    fn maze_interfaces__action__MoveX_GetResult_Request__init(msg: *mut MoveX_GetResult_Request) -> bool;
    fn maze_interfaces__action__MoveX_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveX_GetResult_Request>, size: usize) -> bool;
    fn maze_interfaces__action__MoveX_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveX_GetResult_Request>);
    fn maze_interfaces__action__MoveX_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveX_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveX_GetResult_Request>) -> bool;
}

// Corresponds to maze_interfaces__action__MoveX_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveX_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for MoveX_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !maze_interfaces__action__MoveX_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to maze_interfaces__action__MoveX_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveX_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__MoveX_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__MoveX_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__MoveX_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveX_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveX_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "maze_interfaces/action/MoveX_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__action__MoveX_GetResult_Request() }
  }
}


#[link(name = "maze_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__action__MoveX_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "maze_interfaces__rosidl_generator_c")]
extern "C" {
    fn maze_interfaces__action__MoveX_GetResult_Response__init(msg: *mut MoveX_GetResult_Response) -> bool;
    fn maze_interfaces__action__MoveX_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MoveX_GetResult_Response>, size: usize) -> bool;
    fn maze_interfaces__action__MoveX_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MoveX_GetResult_Response>);
    fn maze_interfaces__action__MoveX_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MoveX_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<MoveX_GetResult_Response>) -> bool;
}

// Corresponds to maze_interfaces__action__MoveX_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MoveX_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::MoveX_Result,

}



impl Default for MoveX_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !maze_interfaces__action__MoveX_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to maze_interfaces__action__MoveX_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MoveX_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__MoveX_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__MoveX_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__MoveX_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MoveX_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MoveX_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "maze_interfaces/action/MoveX_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__action__MoveX_GetResult_Response() }
  }
}


#[link(name = "maze_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__action__Yaw_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "maze_interfaces__rosidl_generator_c")]
extern "C" {
    fn maze_interfaces__action__Yaw_SendGoal_Request__init(msg: *mut Yaw_SendGoal_Request) -> bool;
    fn maze_interfaces__action__Yaw_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Yaw_SendGoal_Request>, size: usize) -> bool;
    fn maze_interfaces__action__Yaw_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Yaw_SendGoal_Request>);
    fn maze_interfaces__action__Yaw_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Yaw_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Yaw_SendGoal_Request>) -> bool;
}

// Corresponds to maze_interfaces__action__Yaw_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Yaw_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::Yaw_Goal,

}



impl Default for Yaw_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !maze_interfaces__action__Yaw_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to maze_interfaces__action__Yaw_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Yaw_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__Yaw_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__Yaw_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__Yaw_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Yaw_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Yaw_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "maze_interfaces/action/Yaw_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__action__Yaw_SendGoal_Request() }
  }
}


#[link(name = "maze_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__action__Yaw_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "maze_interfaces__rosidl_generator_c")]
extern "C" {
    fn maze_interfaces__action__Yaw_SendGoal_Response__init(msg: *mut Yaw_SendGoal_Response) -> bool;
    fn maze_interfaces__action__Yaw_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Yaw_SendGoal_Response>, size: usize) -> bool;
    fn maze_interfaces__action__Yaw_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Yaw_SendGoal_Response>);
    fn maze_interfaces__action__Yaw_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Yaw_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Yaw_SendGoal_Response>) -> bool;
}

// Corresponds to maze_interfaces__action__Yaw_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Yaw_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for Yaw_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !maze_interfaces__action__Yaw_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to maze_interfaces__action__Yaw_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Yaw_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__Yaw_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__Yaw_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__Yaw_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Yaw_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Yaw_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "maze_interfaces/action/Yaw_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__action__Yaw_SendGoal_Response() }
  }
}


#[link(name = "maze_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__action__Yaw_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "maze_interfaces__rosidl_generator_c")]
extern "C" {
    fn maze_interfaces__action__Yaw_GetResult_Request__init(msg: *mut Yaw_GetResult_Request) -> bool;
    fn maze_interfaces__action__Yaw_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Yaw_GetResult_Request>, size: usize) -> bool;
    fn maze_interfaces__action__Yaw_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Yaw_GetResult_Request>);
    fn maze_interfaces__action__Yaw_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Yaw_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Yaw_GetResult_Request>) -> bool;
}

// Corresponds to maze_interfaces__action__Yaw_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Yaw_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for Yaw_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !maze_interfaces__action__Yaw_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to maze_interfaces__action__Yaw_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Yaw_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__Yaw_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__Yaw_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__Yaw_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Yaw_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Yaw_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "maze_interfaces/action/Yaw_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__action__Yaw_GetResult_Request() }
  }
}


#[link(name = "maze_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__action__Yaw_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "maze_interfaces__rosidl_generator_c")]
extern "C" {
    fn maze_interfaces__action__Yaw_GetResult_Response__init(msg: *mut Yaw_GetResult_Response) -> bool;
    fn maze_interfaces__action__Yaw_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Yaw_GetResult_Response>, size: usize) -> bool;
    fn maze_interfaces__action__Yaw_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Yaw_GetResult_Response>);
    fn maze_interfaces__action__Yaw_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Yaw_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Yaw_GetResult_Response>) -> bool;
}

// Corresponds to maze_interfaces__action__Yaw_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Yaw_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::Yaw_Result,

}



impl Default for Yaw_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !maze_interfaces__action__Yaw_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to maze_interfaces__action__Yaw_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Yaw_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__Yaw_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__Yaw_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { maze_interfaces__action__Yaw_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Yaw_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Yaw_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "maze_interfaces/action/Yaw_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__maze_interfaces__action__Yaw_GetResult_Response() }
  }
}






#[link(name = "maze_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__maze_interfaces__action__MoveX_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to maze_interfaces__action__MoveX_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct MoveX_SendGoal;

impl rosidl_runtime_rs::Service for MoveX_SendGoal {
    type Request = MoveX_SendGoal_Request;
    type Response = MoveX_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__maze_interfaces__action__MoveX_SendGoal() }
    }
}




#[link(name = "maze_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__maze_interfaces__action__MoveX_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to maze_interfaces__action__MoveX_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct MoveX_GetResult;

impl rosidl_runtime_rs::Service for MoveX_GetResult {
    type Request = MoveX_GetResult_Request;
    type Response = MoveX_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__maze_interfaces__action__MoveX_GetResult() }
    }
}




#[link(name = "maze_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__maze_interfaces__action__Yaw_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to maze_interfaces__action__Yaw_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct Yaw_SendGoal;

impl rosidl_runtime_rs::Service for Yaw_SendGoal {
    type Request = Yaw_SendGoal_Request;
    type Response = Yaw_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__maze_interfaces__action__Yaw_SendGoal() }
    }
}




#[link(name = "maze_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__maze_interfaces__action__Yaw_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to maze_interfaces__action__Yaw_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct Yaw_GetResult;

impl rosidl_runtime_rs::Service for Yaw_GetResult {
    type Request = Yaw_GetResult_Request;
    type Response = Yaw_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__maze_interfaces__action__Yaw_GetResult() }
    }
}


