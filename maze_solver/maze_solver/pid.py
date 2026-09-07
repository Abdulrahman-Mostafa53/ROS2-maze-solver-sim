class Pid:
    def __init__(self,target, kp, ki, kd,anti_wind_clamp, start=0):

        # intializing parameters passed to the constructor 
        # pass in your target , KP , KI , KD  anti wind clamp point,
        # , start point (optional)

        self.TARGET = target
        self.KP = kp
        self.KI = ki
        self.KD = kd
        self.anti_wind_clamp = anti_wind_clamp
        self.START = start

        # in your code after you have a pid object, set :

        # pid.current_state to the current state of the system
        # ex : a motor rotated 75 degs but we need it to rotate 90 degs so
        # 75 is current_state 

        # pid.error to the current error val : (target  - current_state)

        # pid.accum_error +=  new error (accumulate your errors here for integral calculation)


        self.current_state = start
        self.error = target - start
        self.accum_error = 0
        
    
    def compute(self,dt,error_dif):
        # this function calculates the output signal
        # if you have done the setup we discussed earlier all you have to provide now is :
        # error_dif : this is the change in error in some time dt 
        # error_dif  = e2 - e1

        # dt : the time where error_dif happended
        # for example if you are running a while loop (but must be restricted
        # by some time don't live it up to cpu power!) you can define dt as time between two
        # iterations 
        

        p = round(self.KP * self.error,4)
        i = min(round(self.KI * self.accum_error,4),self.anti_wind_clamp)
        d = round(self.KD * (error_dif/dt),4)

        
        # print("_________________________________________________")
        # print(
        #     f"P: {p} -- I: {i} -- D: {d} -- accum : {round(self.accum_error,4)}"
        # )
        # print("_________________________________________________")
        return p+i+d
