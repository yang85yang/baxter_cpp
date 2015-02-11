/*********************************************************************
 *
 * Software License Agreement (BSD License)
 *
 * Copyright (c) 2015, Dave Coleman, CU Boulder; Jeremy Zoss, SwRI; David Butterworth, KAIST; Mathias Lüdtke, Fraunhofer IPA
 * All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the all of the author's companies nor the names of its
 *       contributors may be used to endorse or promote products derived from
 *       this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 *********************************************************************/

/*
 * IKFast Plugin Template for moveit
 *
 * AUTO-GENERATED by create_ikfast_moveit_plugin.py in arm_kinematics_tools
 * You should run create_ikfast_moveit_plugin.py to generate your own plugin.
 *
 */

#include <ros/ros.h>

namespace ikfast_kinematics_plugin
{
#define IKFAST_NO_MAIN // Don't include main() from IKFast

// Code generated by IKFast56/61 specific to a particular robot
#include "baxter_right_arm_ikfast_solver.cpp"

} // end namespace

// MoveIt! plugin code for IKFast
#include <moveit_ikfast/ikfast61_moveit_plugin_template.cpp>
