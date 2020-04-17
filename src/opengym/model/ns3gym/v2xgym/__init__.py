from gym.envs.registration import register

register(
    id='v2x-v0',
    entry_point='v2xgym.v2xenv:V2XEnv',
)