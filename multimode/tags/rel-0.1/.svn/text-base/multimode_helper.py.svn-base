import math
import re
scan_low=0.0
scan_high=0.0
current_freq=0.0
last_ifreq=0.0
last_ena=False
triggered=0
last_returned=0.0
last_freq1=0.0
last_freq2=0.0
current_index=0
FM_MODES={"NFM1" : (0, "FM", 5.0e3), "NFM2" : (1, "FM", 2.5e3), "WFM" : (2, "FM", 80.0e3), "NTSC-FM" :
    (3, "FM", 25.0e3), "PAL-FM" : (4, "FM", 50.0e3)}
AM_MODES={"AM" : (5, "AM", 12.5e3), "USB" : (6, "SSB", 12.5e3), "LSB" : (7, "SSB", 12.5e3)}
DIG_MODES={"DIGITAL": (8, "DIG", 23.5e3)}
def scan_freq_out(ena,low,high,freq1,freq2,pwr,scan_thresh,incr,scan_rate,lst_mode,sclist):
    global scan_low
    global scan_high
    global current_freq
    global last_ifreq
    global last_clicked
    global last_ena
    global triggered
    global last_returned
    global last_freq1
    global last_freq2
    global current_index
    
    x = math.log(pwr)/math.log(10.0)
    x = x * 10.0
    
    if ena == True and lst_mode == True and len(sclist) > 0:
        if last_ena == False:
            current_index = 0
            triggered = 0
        last_ena = ena
        last_returned = sclist[current_index]

        if triggered > 0:
            triggered = triggered -1
            return last_returned
            
        elif x >= scan_thresh:
            triggered=(scan_rate*2)+1
            return last_returned
            
        current_index = current_index + 1
        if current_index > len(sclist)-1:
            current_index = 0
            
        return last_returned
    
    if ena == True and lst_mode == False:
        if last_ena == False:
            current_freq = low - incr
            triggered = 0
        last_ena = ena
        
        if scan_low != low or scan_high != high:
            current_freq = low - incr
            scan_low = low
            scan_high = high
            triggered = 0
            
        if triggered > 0:
            triggered = triggered - 1
            last_returned = current_freq
            return current_freq
            
        elif x >= scan_thresh:
            triggered=(scan_rate*2)+1
            last_returned = current_freq
            return current_freq
            
        current_freq = current_freq + incr
        if current_freq > high:
            current_freq = low - incr
        last_returned = current_freq
        return current_freq
    else:
        last_ena = ena
        if last_freq1 != freq1:
            last_freq1 = freq1
            last_returned = last_freq1
        elif last_freq2 != freq2:
            last_freq2 = freq2
            last_returned = last_freq2
        return last_returned

def get_last_returned(poll):
    global last_returned
    return last_returned
    

def get_modes_names():
    MODES = dict(FM_MODES.items() + AM_MODES.items() + DIG_MODES.items())
    nmlist=[]
    for i in range(0,len(MODES)):
        for x in MODES.keys():
            l = MODES[x]
            ndx = l[0]
            mtype = l[1]
            khz = l[2]
            if ndx == i:
                if mtype == "FM":
                    nmlist.append(str(x)+" (%.1fkHz)" % (khz / 1000.0))
                else:
                    nmlist.append(str(x))
    return nmlist
        
def get_modes_values():
    MODES = dict(FM_MODES.items() + AM_MODES.items() + DIG_MODES.items())
    nmlist=[]
    for i in range(0,len(MODES)):
        for x in MODES.keys():
            l = MODES[x]
            ndx = l[0]
            mtype = l[1]
            khz = l[2]
            if ndx == i:
                nmlist.append(x)
    return nmlist

def get_mode_deviation(mode,bw):
    MODES = dict(FM_MODES.items() + AM_MODES.items() + DIG_MODES.items())
    x = MODES[mode]
    if x[1] == "SSB" or x[1] == "AM":
		return bw/2
    return (x[2])

def get_mode_type(mode):
    MODES = dict(FM_MODES.items() + AM_MODES.items() + DIG_MODES.items())
    x = MODES[mode]
    return (x[1])

def get_good_rate(devtype,rate):
    uhd_clock = -1
    if int(rate) % int(200e3) != 0:
        rate += 200e3
    if re.search("rtl_tcp=", devtype, flags=0) != None:
        return (int(rate/200e3)*200e3)
    if re.search("rtl=", devtype, flags=0) != None:
        if (rate < 1.0e6):
            return 1.0e6
        if (rate > 2.8e6):
            return 2.8e6
        return (int(rate/200e3)*200e3)
    if re.search("osmosdr=", devtype, flags=0) != None:
        return (1.0e6)
    if re.search("uhd=.*type=usrp1", devtype, flags=0) != None:
        uhd_clock=64e6
    if re.search("uhd=.*addr=", devtype, flags=0) != None:
        uhd_clock=100e6
    if re.search("uhd=.*type=b100", devtype, flags=0) != None:
        uhd_clock=64e6
    
    if (uhd_clock > 0):
        selected_rate = 1.0e6
        rates = []
        des_rate = int(rate/200e3)*200e3
        for i in range(1,512):
            uhd_rate = uhd_clock/i
            if (int(uhd_rate) % int(200e3) == 0):
                rates.append(int(uhd_rate))
        for r in rates:
            if (r >= des_rate):
                selected_rate = r
        return (selected_rate)
                    
    return 1.0e6
