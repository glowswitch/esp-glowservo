set(srcs 
    "glowservo.c"
    )

# "glcdfont.c" defined but not used font
idf_component_register(SRCS ${srcs}
    INCLUDE_DIRS "include"
    REQUIRES driver)