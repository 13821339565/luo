#!/usr/bin/env python


# The program below is used in robocup game in hefei!
import rospy
import xdrlib
import sys
import xlrd
from std_msgs.msg import Float64


def open_excel(file='file.xls'):
    try:
        data = xlrd.open_workbook(file)
        return data
    except Exception as e:
        print(str(e))



def excel_table_byindex(file='/home/luo/python_ws/src/rfa_crane_arm/src/file.xls', colnameindex=0, by_index=0):
    data = open_excel(file)
    table = data.sheets()[by_index]
    nrows = table.nrows 
    ncols = table.ncols  
    colnames = table.row_values(colnameindex) 
    list = []
    for rownum in range(1, nrows):

        row = table.row_values(rownum)
        if row:
            app = {}
            for i in range(len(colnames)):
                app[colnames[i]] = row[i]
            list.append(app)
    return list


class Loop:
    def __init__(self):
        rospy.on_shutdown(self.cleanup)
        # publish command message to joints/servos of arm
        self.joint1 = rospy.Publisher('/arm_shoulder_pan_joint/command', Float64)
        self.joint2 = rospy.Publisher('/arm_shoulder_lift_joint/command', Float64)
        self.joint3 = rospy.Publisher('/arm_elbow_flex_joint/command', Float64)
        self.joint4 = rospy.Publisher('/arm_wrist_flex_joint/command', Float64)
        self.joint5 = rospy.Publisher('/gripper_joint/command', Float64)
        self.pos1 = Float64()
        self.pos2 = Float64()
        self.pos3 = Float64()
        self.pos4 = Float64()
        self.pos5 = Float64()
        # Initial gesture of robot arm
        self.pos1 = 0
        self.pos2 = 0
        self.pos3 = 0
        self.pos4 = 0
        self.pos5 = 0
        self.joint1.publish(self.pos1)
        rospy.sleep(4)
        self.joint2.publish(self.pos2)
        self.joint3.publish(self.pos3)
        self.joint4.publish(self.pos4)
        self.joint5.publish(self.pos5)
        rospy.sleep(2)
        rospy.loginfo("Connecting to turtlebot arm....")

	tables = excel_table_byindex()

        for row in tables:
            #print("cycle index: %s" % row['cycle index'])
            cyc = row['cycle index']
            cyc = int(cyc)
            break

        for _ in range(cyc):
            for row in tables:

                self.pos1 = row['ID1']
                self.pos2 = row['ID2']
                self.pos3 = row['ID3']
                self.pos4 = row['ID4']
                self.pos5 = row['ID5']
                stringgesture = "Gesture " + str(row['gesture']) + '.......'
                stringtime = "wait time %f" % row['wait time']
                self.joint1.publish(self.pos1)
                self.joint2.publish(self.pos2)
                self.joint3.publish(self.pos3)
                self.joint4.publish(self.pos4)
                self.joint5.publish(self.pos5)
                rospy.sleep(row['wait time'])
                rospy.loginfo(stringgesture)
                rospy.loginfo(stringtime)


    def cleanup(self):
        rospy.loginfo("Shutting down turtlebot arm....")


if __name__ == "__main__":
    rospy.init_node('turtlebot_arm')
    try:
        Loop()
        #rospy.spin()
    except rospy.ROSInterruptException:
        pass
