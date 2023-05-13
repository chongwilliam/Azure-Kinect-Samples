/**
 * @file redis_keys.h
 * @author William Chong (wmchong@stanford.edu)
 * @brief Kinect body keys 
 * @version 0.1
 * @date 2023-05-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

// Kinect position keys 
const std::string PELVIS_POS_KEY = "kinect::pos::pelvis";
const std::string SPINE_NAVAL_POS_KEY = "kinect::pos::spine_naval";
const std::string SPINE_CHEST_POS_KEY = "kinect::pos::spine_chest";
const std::string NECK_POS_KEY = "kinect::pos::neck";
const std::string CLAVICLE_LEFT_POS_KEY  = "kinect::pos::clavicle_left";
const std::string SHOULDER_LEFT_POS_KEY = "kinect::pos::shoulder_left";
const std::string ELBOW_LEFT_POS_KEY = "kinect::pos::elbow_left";
const std::string WRIST_LEFT_POS_KEY = "kinect::pos::wrist_left";
const std::string HAND_LEFT_POS_KEY = "kinect::pos::hand_left";
const std::string HANDTIP_LEFT_POS_KEY = "kinect::pos::handtip_left";
const std::string THUMB_LEFT_POS_KEY = "kinect::pos::thumb_left";
const std::string CLAVICLE_RIGHT_POS_KEY = "kinect::pos::clavicle_right";
const std::string SHOULDER_RIGHT_POS_KEY = "kinect::pos::shoulder_right";
const std::string ELBOW_RIGHT_POS_KEY = "kinect::pos::elbow_right";
const std::string WRIST_RIGHT_POS_KEY = "kinect::pos::wrist_right";
const std::string HAND_RIGHT_POS_KEY = "kinect::pos::hand_right";
const std::string HANDTIP_RIGHT_POS_KEY = "kinect::pos::handtip_right";
const std::string THUMB_RIGHT_POS_KEY = "kinect::pos::thumb_right";
const std::string HIP_LEFT_POS_KEY = "kinect::pos::hip_left";
const std::string KNEE_LEFT_POS_KEY = "kinect::pos::knee_left";
const std::string ANKLE_LEFT_POS_KEY = "kinect::pos::ankle_left";
const std::string FOOT_LEFT_POS_KEY = "kinect::pos::foot_left";
const std::string HIP_RIGHT_POS_KEY = "kinect::pos::hip_right";
const std::string KNEE_RIGHT_POS_KEY = "kinect::pos::knee_right";
const std::string ANKLE_RIGHT_POS_KEY = "kinect::pos::ankle_right";
const std::string FOOT_RIGHT_POS_KEY = "kinect::pos::foot_right";
const std::string HEAD_POS_KEY = "kinect::pos::head";
const std::string NOSE_POS_KEY = "kinect::pos::nose";
const std::string EYE_LEFT_POS_KEY = "kinect::pos::eye_left";
const std::string EAR_LEFT_POS_KEY = "kinect::pos::ear_left";
const std::string EYE_RIGHT_POS_KEY = "kinect::pos::eye_right";
const std::string EAR_RIGHT_POS_KEY = "kinect::pos::ear_right";

// Kinect orientation keys 
const std::string PELVIS_ORI_KEY = "kinect::ori::pelvis";
const std::string SPINE_NAVAL_ORI_KEY = "kinect::ori::spine_naval";
const std::string SPINE_CHEST_ORI_KEY = "kinect::ori::spine_chest";
const std::string NECK_ORI_KEY = "kinect::ori::neck";
const std::string CLAVICLE_LEFT_ORI_KEY  = "kinect::ori::clavicle_left";
const std::string SHOULDER_LEFT_ORI_KEY = "kinect::ori::shoulder_left";
const std::string ELBOW_LEFT_ORI_KEY = "kinect::ori::elbow_left";
const std::string WRIST_LEFT_ORI_KEY = "kinect::ori::wrist_left";
const std::string HAND_LEFT_ORI_KEY = "kinect::ori::hand_left";
const std::string HANDTIP_LEFT_ORI_KEY = "kinect::ori::handtip_left";
const std::string THUMB_LEFT_ORI_KEY = "kinect::ori::thumb_left";
const std::string CLAVICLE_RIGHT_ORI_KEY = "kinect::ori::clavicle_right";
const std::string SHOULDER_RIGHT_ORI_KEY = "kinect::ori::shoulder_right";
const std::string ELBOW_RIGHT_ORI_KEY = "kinect::ori::elbow_right";
const std::string WRIST_RIGHT_ORI_KEY = "kinect::ori::wrist_right";
const std::string HAND_RIGHT_ORI_KEY = "kinect::ori::hand_right";
const std::string HANDTIP_RIGHT_ORI_KEY = "kinect::ori::handtip_right";
const std::string THUMB_RIGHT_ORI_KEY = "kinect::ori::thumb_right";
const std::string HIP_LEFT_ORI_KEY = "kinect::ori::hip_left";
const std::string KNEE_LEFT_ORI_KEY = "kinect::ori::knee_left";
const std::string ANKLE_LEFT_ORI_KEY = "kinect::ori::ankle_left";
const std::string FOOT_LEFT_ORI_KEY = "kinect::ori::foot_left";
const std::string HIP_RIGHT_ORI_KEY = "kinect::ori::hip_right";
const std::string KNEE_RIGHT_ORI_KEY = "kinect::ori::knee_right";
const std::string ANKLE_RIGHT_ORI_KEY = "kinect::ori::ankle_right";
const std::string FOOT_RIGHT_ORI_KEY = "kinect::ori::foot_right";
const std::string HEAD_ORI_KEY = "kinect::ori::head";
const std::string NOSE_ORI_KEY = "kinect::ori::nose";
const std::string EYE_LEFT_ORI_KEY = "kinect::ori::eye_left";
const std::string EAR_LEFT_ORI_KEY = "kinect::ori::ear_left";
const std::string EYE_RIGHT_ORI_KEY = "kinect::ori::eye_right";
const std::string EAR_RIGHT_ORI_KEY = "kinect::ori::ear_right";

const std::vector<std::string> kinect_pos_keys {  PELVIS_POS_KEY,
                                                  SPINE_NAVAL_POS_KEY,
                                                  SPINE_CHEST_POS_KEY,
                                                  NECK_POS_KEY,
                                                  CLAVICLE_LEFT_POS_KEY,
                                                  SHOULDER_LEFT_POS_KEY,
                                                  ELBOW_LEFT_POS_KEY,
                                                  WRIST_LEFT_POS_KEY,
                                                  HAND_LEFT_POS_KEY,
                                                  HANDTIP_LEFT_POS_KEY,
                                                  THUMB_LEFT_POS_KEY,
                                                  CLAVICLE_RIGHT_POS_KEY,
                                                  SHOULDER_RIGHT_POS_KEY,
                                                  ELBOW_RIGHT_POS_KEY,
                                                  WRIST_RIGHT_POS_KEY,
                                                  HAND_RIGHT_POS_KEY,
                                                  HANDTIP_RIGHT_POS_KEY,
                                                  THUMB_RIGHT_POS_KEY,
                                                  HIP_LEFT_POS_KEY,
                                                  KNEE_LEFT_POS_KEY,
                                                  ANKLE_LEFT_POS_KEY,
                                                  FOOT_LEFT_POS_KEY,
                                                  HIP_RIGHT_POS_KEY,
                                                  KNEE_RIGHT_POS_KEY,
                                                  ANKLE_RIGHT_POS_KEY,
                                                  FOOT_RIGHT_POS_KEY,
                                                  HEAD_POS_KEY,
                                                  NOSE_POS_KEY,
                                                  EYE_LEFT_POS_KEY,
                                                  EAR_LEFT_POS_KEY,
                                                  EYE_RIGHT_POS_KEY,
                                                  EAR_RIGHT_POS_KEY  };

const std::vector<std::string> kinect_ori_keys {  PELVIS_ORI_KEY,
                                                  SPINE_NAVAL_ORI_KEY,
                                                  SPINE_CHEST_ORI_KEY,
                                                  NECK_ORI_KEY,
                                                  CLAVICLE_LEFT_ORI_KEY,
                                                  SHOULDER_LEFT_ORI_KEY,
                                                  ELBOW_LEFT_ORI_KEY,
                                                  WRIST_LEFT_ORI_KEY,
                                                  HAND_LEFT_ORI_KEY,
                                                  HANDTIP_LEFT_ORI_KEY,
                                                  THUMB_LEFT_ORI_KEY,
                                                  CLAVICLE_RIGHT_ORI_KEY,
                                                  SHOULDER_RIGHT_ORI_KEY,
                                                  ELBOW_RIGHT_ORI_KEY,
                                                  WRIST_RIGHT_ORI_KEY,
                                                  HAND_RIGHT_ORI_KEY,
                                                  HANDTIP_RIGHT_ORI_KEY,
                                                  THUMB_RIGHT_ORI_KEY,
                                                  HIP_LEFT_ORI_KEY,
                                                  KNEE_LEFT_ORI_KEY,
                                                  ANKLE_LEFT_ORI_KEY,
                                                  FOOT_LEFT_ORI_KEY,
                                                  HIP_RIGHT_ORI_KEY,
                                                  KNEE_RIGHT_ORI_KEY,
                                                  ANKLE_RIGHT_ORI_KEY,
                                                  FOOT_RIGHT_ORI_KEY,
                                                  HEAD_ORI_KEY,
                                                  NOSE_ORI_KEY,
                                                  EYE_LEFT_ORI_KEY,
                                                  EAR_LEFT_ORI_KEY,
                                                  EYE_RIGHT_ORI_KEY,
                                                  EAR_RIGHT_ORI_KEY  };