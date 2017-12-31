import rospy
from std_msgs.msg import Float64
import math

x1=Float64()
y1=Float64()
z1=Float64()
d3=Float64()
d4=Float64()
d5=Float64()
x1=25
y1=0
z1=4
d3=10.5
d4=10.5
d5=9

theta1=Float64()
theta2=Float64()
theta3=Float64()
theta4=Float64()
theta5=Float64()


theta1=math.atan2(y1,x1)
theta3=math.acos((math.pow(math.pow((x1*x1+y1*y1),0.5)-d5,2)+z1*z1-d3*d3-d4*d4)/(2*d3*d4) )
theta2=math.atan2((math.pow((x1*x1+y1*y1),0.5)-d5) ,z1 ) - math.acos( ( math.pow(  math.pow( x1*x1+y1*y1,0.5 )-d5 ,2 )+z1*z1 +d3*d3 - d4*d4) / (2*d3*math.pow(  math.pow( math.pow(x1*x1+y1*y1,0.5)-d5 ,2) +z1*z1 ,0.5 )) )
theta4=math.pi/2-theta2-theta3



t1=theta1*180/math.pi
t2=theta2*180/math.pi
t3=theta3*180/math.pi
t4=theta4*180/math.pi

xlong=math.sin(theta2)*d3+math.sin(theta2+theta3)*d4+d5
zlong=math.cos(theta2)*d3+math.cos(theta2+theta3)*d4

print("theta1=%f  theta2=%f  theta3=%f  theta4=%f"%(theta1,theta2,theta3,theta4))
print("theta1=%f  theta2=%f  theta3=%f  theta4=%f"%(t1,t2,t3,t4))
print("xlong=%f  zlong=%f"%(xlong,zlong))

	
