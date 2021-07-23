//
// Created by qiayuan on 5/22/21.
//

#ifndef RM_MANUAL_CHASSIS_GIMBAL_MANUAL_H_
#define RM_MANUAL_CHASSIS_GIMBAL_MANUAL_H_

#include "rm_manual/common/manual_base.h"
namespace rm_manual {
class ChassisGimbalManual : public ManualBase {
 public:
  explicit ChassisGimbalManual(ros::NodeHandle &nh);
 protected:
  void sendCommand(const ros::Time &time) override;
  void updateRc() override;
  void updatePc() override;
  void rightSwitchDown(ros::Duration duration) override;
  void rightSwitchMid(ros::Duration duration) override;
  void rightSwitchUp(ros::Duration duration) override;
  void leftSwitchDown(ros::Duration duration) override;
  void wPress(ros::Duration /*duration*/) override;
  void wRelease(ros::Duration /*duration*/) override;
  void aPress(ros::Duration /*duration*/) override;
  void aRelease(ros::Duration /*duration*/) override;
  void sPress(ros::Duration /*duration*/) override;
  void sRelease(ros::Duration /*duration*/) override;
  void dPress(ros::Duration /*duration*/) override;
  void dRelease(ros::Duration /*duration*/) override;
  void gPress(ros::Duration /*duration*/) override;
  void ePress(ros::Duration /*duration*/) override;
  void drawUi() override;
  rm_common::ChassisCommandSender *chassis_cmd_sender_{};
  rm_common::Vel2DCommandSender *vel_cmd_sender_;
  rm_common::GimbalCommandSender *gimbal_cmd_sender_{};
  StateUi *state_ui_{};
  CapacitorUi *capacitor_ui_{};
  double x_scale_{}, y_scale_{};
  double gyro_move_reduction_{};
};
}

#endif //RM_MANUAL_CHASSIS_GIMBAL_MANUAL_H_
