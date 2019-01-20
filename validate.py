import numpy as np
from bitstring import Bits
import os

implement=raw_input("Enter implementation number to test (allowed values 1,2,3) >>>")
working_directory=r"/home/ise/DDP/xilinx project/FFT8_implementation_"+str(implement)

print("Generating 100 Random Inputs ... ")
cmds = ""
for i in range(100):
 input_array=np.random.uniform(low=-8.0, high=8.0, size=(8,))
 binary_array=[]
 for inp in input_array:
  binary_array.append(Bits(int=int(inp*2**8), length=16).bin)
 cmd="""
 isim force add {/fft8_tb/inp1} %s -radix bin 
 isim force add {/fft8_tb/inp2} %s -radix bin 
 isim force add {/fft8_tb/inp3} %s -radix bin 
 isim force add {/fft8_tb/inp4} %s -radix bin 
 isim force add {/fft8_tb/inp5} %s -radix bin 
 isim force add {/fft8_tb/inp6} %s -radix bin 
 isim force add {/fft8_tb/inp7} %s -radix bin 
 isim force add {/fft8_tb/inp8} %s -radix bin 
 isim force add {/fft8_tb/clk} 1 -radix bin -value 0 -radix bin -time 2500 ps -repeat 5 ns -cancel 1 us
 isim force add {/fft8_tb/rst} 1 -radix bin -cancel 20 ns 
 isim force add {/fft8_tb/rst} 0 -radix bin -time 20 ps -cancel 1 us 
 run
 dump
 """%tuple(binary_array)
 cmds=cmds+cmd

os.chdir(working_directory)
f=open("inp.test","w")
f.write(cmds)
f.close()
print("Simulating all the inputs using ISIM...")
os.system('"'+working_directory+r'/fft8_tb_isim_beh.exe" < inp.test > out.test')
f=open("out.test","r")
values=[]
inp={}
out={}
for line in f.readlines():
 if "Signal:" in line:
  out[line.strip().split("{")[1].split("}")[0].split("[")[0].strip()]=line.strip().split(":")[-1].strip()
 if "Variable:" in line:
  inp[line.strip().split("{")[1].split("}")[0].split("[")[0].strip()]=line.strip().split(":")[-1].strip()
 if "{rst}" in line.strip():
  values.append([inp,out])
  inp={}
  out={}

f.close()

print("Verifying FFT output with the actual values...")
correct=0
count=0
for val in values:
  count=count+1
  inp = np.asarray([Bits(bin=val[0]['inp'+str(i)]).int/(2.0**8) for i in range(1,9)])
  out1 = np.array([Bits(bin=val[1]['out'+str(i)+"_real"]).int/(2.0**8) for i in range(1,9)])
  out2 = np.array([Bits(bin=val[1]['out'+str(i)+"_imag"]).int/(2.0**8) for i in range(1,9)])
  out=out1 + 1j*out2
  if np.allclose(out,np.fft.fft(inp),1e-2):
   correct=correct+1

print(str(correct)+r"/"+str(count)+" Correct ...")



