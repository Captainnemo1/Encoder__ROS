#! /usr/bin/env python3
import rclpy
from rclpy.node import Node
from rbl_message.msg import Rbl
import random

class CustomPublisher(Node):
    def __init__(self):
        super().__init__('custom_publisher')
        self.publisher_ = self.create_publisher(Rbl, '/ros/custom_message', 10)
        timer_period = 1  # seconds
        self.timer = self.create_timer(timer_period, self.publish_message)

    def publish_message(self):
        msg = Rbl()
        #Random Data generation
        msg.bool_value = bool(random.getrandbits(1))
        msg.integer_value = random.randint(-128, 127)
        msg.float_value = random.uniform(0, 100)
        self.publisher_.publish(msg)
        self.get_logger().info(f"Published: {msg}")

def main(args=None):
    rclpy.init(args=args)
    custom_publisher = CustomPublisher()
    rclpy.spin(custom_publisher)
    custom_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()