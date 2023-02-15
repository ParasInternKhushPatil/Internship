import numpy as np
import math

# Define the vectors
x = np.array([1,3,1])
y = np.array([2,2,2])
z = np.array([3,2,3])

# Calculate the angles
angle_xy = math.acos(np.dot(x, y) / (np.linalg.norm(x) * np.linalg.norm(y)))
angle_yz = math.acos(np.dot(y, z) / (np.linalg.norm(y) * np.linalg.norm(z)))
angle_xz = math.acos(np.dot(x, z) / (np.linalg.norm(x) * np.linalg.norm(z)))

degrees_xy = math.degrees(angle_xy)
degrees_yz = math.degrees(angle_yz)
degrees_xz = math.degrees(angle_xz)
degrees_zx = degrees_xy + degrees_yz

# Print the results
print(f"Angle between x and y: {degrees_xy} degrees")
print(f"Angle between y and z: {degrees_yz} degrees")
print(f"Angle between x and z: {degrees_xz} degrees")
print(f"Angle between x and y + angle between y and z: {degrees_xy + degrees_yz} degrees")


