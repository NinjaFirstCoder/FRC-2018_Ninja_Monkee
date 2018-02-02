#ifndef SRC_CONSTANTS_H_
#define SRC_CONSTANTS_H_


#define DriveM_FrontLeft 1
#define DriveM_MiddleLeft 2
#define DriveM_RearLeft 3

#define DriveM_FrontRight 4
#define DriveM_MiddleRight 5
#define DriveM_RearRight 6

enum Constants {
	/**
	 * Which PID slot to pull gains from.  Starting 2018, you can choose
	 * from 0,1,2 or 3.  Only the first two (0,1) are visible in web-based configuration.
	 */
	kSlotIdx = 0,

	/* Talon SRX/ Victor SPX will supported multiple (cascaded) PID loops.
	 * For now we just want the primary one.
	 */
	kPIDLoopIdx = 0,

	/*
	 * set to zero to skip waiting for confirmation, set to nonzero to wait
	 * and report to DS if action fails.
	 */
	kTimeoutMs = 10
};

#endif
