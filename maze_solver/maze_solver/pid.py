class Pid:
    def __init__(
        self,
        target,
        kp,
        ki,
        kd,
        anti_wind_clamp,
        controller_clamp,
        start=0
    ):

        # Initializing parameters passed to the constructor

        self.TARGET = target
        self.KP = kp
        self.KI = ki
        self.KD = kd
        self.anti_wind_clamp = anti_wind_clamp
        self.controller_clamp = controller_clamp
        self.START = start

        self.current_state = start
        self.error = target - start
        self.accum_error = 0

    def compute(self, dt, error_dif):

        p = round(self.KP * self.error, 4)

        i = min(
            round(self.KI * self.accum_error, 4),
            self.anti_wind_clamp
        )

        d = round(
            self.KD * (error_dif / dt),
            4
        )

        return min(
            p + i + d,
            self.controller_clamp
        )

    def set_kp(self, kp):
        self.KP = kp

    def set_ki(self, ki):
        self.KI = ki

    def set_kd(self, kd):
        self.KD = kd

    def set_anti_wind_clamp(self, clamp):
        self.anti_wind_clamp = clamp

    def set_controller_clamp(self, clamp):
        self.controller_clamp = clamp