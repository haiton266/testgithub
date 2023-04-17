import os
import shutil

# Đường dẫn của tệp cần di chuyển
vidFirst = 1573
vidLast = 100
for i in range(vidFirst, vidLast + 1):
    dst_path = f'/content/drive/MyDrive/colab/yolov8_tracking/runs/track/RESULT/video{i}.txt'

    # Check if the source file exists
    if os.path.exists(dst_path) == 0:
        print(f"File 'video{i}' does not exist")
