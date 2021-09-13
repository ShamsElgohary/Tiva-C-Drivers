#ifndef STD_TYPES_H_
#define STD_TYPES_H_

/* Boolean Data Type */
typedef unsigned char bool;


/*
 *  Describes the standard Return Type Definitions used in the project
 */
typedef unsigned char  Std_ReturnType;
typedef unsigned char         uint8;
typedef signed char           sint8;
typedef unsigned short        uint16;
typedef signed short          sint16;
typedef unsigned long         uint32;
typedef signed long           sint32;
typedef unsigned long long    uint64;
typedef signed long long      sint64;
typedef float                 float32;
typedef double                float64;



/* Boolean Values */
#ifndef FALSE
#define FALSE       (0u)
#endif
#ifndef TRUE
#define TRUE        (1u)
#endif

#define HIGH        (1u)
#define LOW         (0u)


#define STD_HIGH        0x01U       /* Standard HIGH */
#define STD_LOW         0x00U       /* Standard LOW */

#define STD_ACTIVE      0x01U       /* Logical state active */
#define STD_IDLE        0x00U       /* Logical state idle */

#define STD_ON          0x01U       /* Standard ON */
#define STD_OFF         0x00U       /* Standard OFF */

#define E_OK            ((Std_ReturnType)0x00U)      /* Function Return OK */
#define E_NOT_OK        ((Std_ReturnType)0x01U)      /* Function Return NOT OK */

/* This is used to define the void pointer to zero definition */
#define NULL_PTR          ((void *)0)

#endif /* STD_TYPE_H_ */
