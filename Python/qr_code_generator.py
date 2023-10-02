import pyqrcode
from pyqrcode import QRCODE

# String which represent the QR code 
s = "https://www.youtube.com/watch?v=H5zW0eYrDhk"
  
# Generate QR code 
url = pyqrcode.create(s) 
  
# Create and save the png file naming "myqr.png" 
url.svg("myyoutube.svg", scale = 8) 