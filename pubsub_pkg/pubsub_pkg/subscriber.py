#! /usr/bin/env python3

import rclpy
from rclpy.node import Node
from rbl_message.msg import Rbl

class CustomSubscriber(Node):
    def __init__(self):
        super().__init__('custom_subscriber')
        self.subscription = self.create_subscription(
            Rbl,
            '/ros/custom_message',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        self.get_logger().info(f"Received: {msg}")

def main(args=None):
    rclpy.init(args=args)
    custom_subscriber = CustomSubscriber()
    rclpy.spin(custom_subscriber)
    custom_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()