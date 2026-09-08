import math

class Pid:
    def __init__(self,target, kp, ki, kd,anti_wind_clamp=1e+8,controller_clamp = 1e+8,thres=0.0000001, start=0):

        # intializing parameters passed to the constructor 
        # pass in your target , KP , KI , KD  anti wind clamp point (optional),
        # overall controller clamp point (optional)
        # threshold for dead zone(optional), start point (optional)

        self.TARGET = target
        self.__KP = kp
        self.__KI = ki
        self.__KD = kd
        self.__anti_wind_clamp = anti_wind_clamp
        self.__controller_clamp =controller_clamp
        self.__THRES = thres
        self.__START = start

        # in your code after you have a pid object, set :

        # pid.current_state to the current state of the system
        # ex : a motor rotated 75 degs but we need it to rotate 90 degs so
        # 75 is current_state 

        # pid.error to the current error val : (target  - current_state)

        # pid.accum_error +=  new error (accumulate your errors here for integral calculation)


        self.__current_state = start
        self.__error = target - start
        self.__accum_error = 0
        
    def get_error(self):
        return self.__error
    
    def compute(self,current_state,dt):
        # this function calculates the output signal
        # if you have done the setup we discussed earlier all you have to provide now is :
        # error_dif : this is the change in error in some time dt 
        # error_dif  = e2 - e1

        # dt : the time where error_dif happended
        # for example if you are running a while loop (but must be restricted
        # by some time don't live it up to cpu power!) you can define dt as time between two
        # iterations 

        e1 = self.__error
        current_error = self.TARGET - current_state
        error_dif = current_error - self.__error
        self.__error = current_error
        self.__accum_error += self.__error



        # Conditional Integration / Zero-Crossing Reset (reset accumulative error when
        # e1 and e2 have different signs which indiactes zero crossing)
        if self.__error  != math.copysign(self.__error,e1):
            self.accum_error = 0
            

        # check for deadzone
        if abs(self.__error) < self.__THRES:
            return 0
        
        p = round(self.__KP * self.__error,4)

        # find who is min our I or the clamping value so that if I is more that
        # clamping value we clamp I (Anti wind up )
        i = min(round(self.__KI * self.__accum_error,4),self.__anti_wind_clamp)

        d = round(self.__KD * (error_dif/dt),4)

        print("_________________________________________________")
        print(
            f" Error : {self.__error}  --  State: {current_state}"
        )
        print("_________________________________________________")
        
        # print("_________________________________________________")
        # print(
        #     f"P: {p} -- I: {i} -- D: {d} -- accum : {round(self.accum_error,4)}"
        # )
        # print("_________________________________________________")

        # if p + i + d is less than the user specified clamp return it 
        # otherwise return clamp value
        return min(p+i+d,self.__controller_clamp)
