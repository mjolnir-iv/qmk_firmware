ifeq ($(strip $(AUDIO_ENABLE)), yes)
    SRC += muse.c
endif
DEFERRED_EXEC_ENABLE = yes
TAP_DANCE_ENABLE = yes
UNICODE_ENABLE = yes
# UNICODE_MAP_ENABLE = yes
