# Bharat-AI-SOC
Hardware-Accelerated CNN Inference on Zynq SoC
📌 Project Title

Hardware-Accelerated CNN Inference System on Xilinx Zynq SoC using FPGA Fabric

🎯 Objective

Design and implement a hardware-accelerated convolutional neural network (CNN) inference system on a Xilinx Zynq SoC, leveraging FPGA fabric to achieve real-time image classification or object detection and demonstrate performance improvement over CPU-only execution.

📖 Project Description

This project focuses on accelerating edge AI workloads on embedded platforms using hardware/software co-design. A lightweight CNN model is deployed on a Zynq-based system where the ARM processor handles control and preprocessing, while FPGA fabric accelerates compute-intensive CNN operations such as convolution, activation, and pooling.

The goal is to enable real-time inference on embedded hardware and compare performance with a CPU-only implementation.

🧠 System Architecture

The system partitions functionality between ARM and FPGA:

ARM Processor

Image capture / dataset input

Preprocessing (resize, normalize)

Control logic

Post-processing & output

FPGA Fabric

Convolution accelerator

Activation (ReLU)

Pooling

Feature map processing

Input images are processed by the ARM core and offloaded to FPGA for accelerated CNN inference, then results are returned for classification/detection output.

🧰 Hardware Platform

Target platform: Digilent Zybo (Zynq-7000 SoC)

🧪 CNN Model

Lightweight CNN model suitable for embedded inference (Tiny-YOLO / MobileNet / custom CNN).

Layer structure:

Convolution

ReLU activation

Pooling

Fully connected

Classification output

⚙️ FPGA Implementation

CNN compute-intensive operations are implemented as hardware accelerators using:

Vivado / Vitis HLS

Verilog / HLS C++

Parallel convolution architecture

Pipelining for throughput optimization

💻 Software Implementation

Embedded software on ARM processor performs:

Image preprocessing (OpenCV)

Data transfer to FPGA

Accelerator control

Result retrieval

Classification / detection output

🚀 Performance Goals

Real-time or near real-time inference

≥ 2× speedup over CPU-only CNN

Reduced latency

Improved throughput

Better power efficiency

📊 Results

The CNN accelerator was successfully designed and synthesized for the Zynq FPGA platform. Bitstream generation and hardware/software co-design flow were completed.

⚠️ Note

Due to USB-JTAG detection issues on the host system, live FPGA programming could not be demonstrated. However, the complete hardware-accelerated CNN architecture and FPGA accelerator design were successfully implemented in the development environment.

📂 Repository Structure
fpga_design/  
cnn_model/  
software/  
constraints/  
bitstream/  
docs/  
results/  

👩‍💻 Team Members

G. Ruthik

K. Varun

C. Gnanasree

Electronics & Communication Engineering (ECE)

🎓 Learning Outcomes

Embedded edge-AI on Zynq SoC

FPGA-based CNN acceleration

ARM–FPGA hardware/software co-design

Performance optimization of embedded AI systems

📜 License

Academic and educational use only.
