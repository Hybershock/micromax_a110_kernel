

/*******************************************************************************
*   ISP_NVRAM_REGISTER_STRUCT
********************************************************************************/
Idx:{//ISP_NVRAM_REG_INDEX_STRUCT //2 mtk by pass shading
    Shading     :0,
    OB          :0,
    DM          :0,
    DP          :0, 
    NR1         :0,
    NR2         :0,
    EE          :0,
    Saturation  :0,
    Contrast    :4,
    Hue         :1,
    CCM         :0,
    Gamma       :0
},
Shading:{
    {set:{//00 Preview
        //0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x10000000,0x903F902F,0x40001950,0x00430036,0x20202020,
        0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x10000000,0x9050903C,0x00483C00,0x0052003F,0x20202020,
    }},
    {set:{//01 Capture
        //0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x10000000,0x90809060,0x40001950,0x00820063,0x20202020,
        0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x10000000,0xF064F04B,0x004C4540,0x0066004E,0x20202020,
    }},
    {set:{//02
        0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    }}
},
OB:{
    {set:{//00
        0x8E8D8D8F
    }}
}, 
DM:{
    {set:{//00 Preview ISO100/ISO200/ISO400
        0x00000100,	0x0A800810,	0x0020083F
    }}, 
    {set:{//01 Preview ISO800
        0x00000100,	0x0A800810,	0x0020083F
    }}, 
    {set:{//02 Preview ISO1600
        0x00000100,	0x0A800810,	0x0020083F
    }}, 
    {set:{//03 Capture ISO100/ISO200
        0x00000100,	0x0A800810,	0x0020083F
    }}, 
    {set:{//04 Capture ISO400
        0x00000100,	0x0A800810,	0x0020083F
    }}, 
    {set:{//05 Capture ISO800
        0x00000100,	0x0A800810,	0x0020083F
    }}, 
    {set:{//06 Capture ISO1600
        0x00000100,	0x0A800810,	0x0020083F
    }}
}, 
DP:{//Auto Defect
    {set:{//00
        0x000006E7, 0x50285050,	0x006003A0,	0x00300050,	0x000009B7
    }},
    {set:{//01
        0x000006E7, 0x50285050,	0x006003A0,	0x00300050,	0x000009B7
    }},
    {set:{//02
        0x000006E7, 0x50285050,	0x006003A0,	0x00300050,	0x000009B7
    }}, 
    {set:{//03 Disable (Do not modify me)
        0x00000000, 0x50285050, 0x006003A0, 0x00300050, 0x000008B7
    }}
},
NR1:{
    {set:{//00 Preview ISO100
        0x000002E1, 0x000011A0, 0x092E28C8, 0x0000089C, 0x01040506, 0x0708090A, 0x02040507, 
        0x0808090A, 0x02040507, 0x0808090A, 0x01040506, 0x08090A0B, 0x0206090D, 0x10101010, 
    }},
    {set:{//01 Preview ISO200
        0x00000221, 0x000001A0, 0x093028C8, 0x0000089C, 0x01050708, 0x090A0C0D, 0x02050708, 
        0x090A0B0C, 0x02050708, 0x090A0B0C, 0x01050608, 0x090B0C0E, 0x0206090D, 0x10101010, 
    }},
    {set:{//02 Preview ISO400
        0x000002E1, 0x000011A0, 0x093028C8, 0x0000089C, 0x0206090B, 0x0D0F1113, 0x0306090B, 
        0x0C0E0F11, 0x0306090B, 0x0C0E0F11, 0x0206080A, 0x0B0D0E10, 0x0206090D, 0x10101010, 
    }},
    {set:{//03 Preview ISO800
        0x000002E1, 0x000011A0, 0x093028C8, 0x0000089C, 0x03090C0E, 0x10121416, 0x04090B0E, 
        0x0F101213, 0x04090B0E, 0x0F101213, 0x02090B0E, 0x11131518, 0x0206090D, 0x10101010, 
    }},
    {set:{//04 Preview ISO1600
        0x000002E1, 0x000011A0, 0x093028C8, 0x0000089C, 0x03090C0E, 0x10121416, 0x04090B0E, 
        0x0F101213, 0x04090B0E, 0x0F101213, 0x02090B0E, 0x11131518, 0x0206090D, 0x10101010, 
    }},
    {set:{//05 Capture ISO100
        0x000002E1, 0x000011A0, 0x092E28C8, 0x0000089C, 0x01040506, 0x0708090A, 0x02040507, 
        0x0808090A, 0x02040507, 0x0808090A, 0x01040506, 0x08090A0B, 0x0206090D, 0x10101010, 
    }},
    {set:{//06 Capture ISO200
        0x00000221, 0x000001A0, 0x093028C8, 0x0000089C, 0x01050708, 0x090A0C0D, 0x02050708, 
        0x090A0B0C, 0x02050708, 0x090A0B0C, 0x01050608, 0x090B0C0E, 0x0206090D, 0x10101010, 
    }}, 
    {set:{//07 Capture ISO400 (o)        
        0x000002E1, 0x000011A0, 0x092F28C8, 0x0000089C, 0x0206090B, 0x0D0F1114, 0x0306090B,
        0x0C0E0F11, 0x0306090B, 0x0C0E0F11, 0x0206080A, 0x0C0D0F10, 0x0206090D, 0x10101010
    }},
    {set:{//08 Capture ISO800 (o)
        0x000002E1, 0x000011A0, 0x093028C8, 0x0000089C, 0x03090C0E, 0x10121416, 0x04090B0E,
        0x0F101213, 0x04090B0E, 0x0F101213, 0x02090B0E, 0x11131518, 0x0206090D, 0x10101010
    }},
    {set:{//09 Capture ISO1600 (o)
        0x000002E1, 0x000011A0, 0x093028C8, 0x0000089C, 0x03090C0E, 0x10121416, 0x04090B0E,
        0x0F101213, 0x04090B0E, 0x0F101213, 0x02090B0E, 0x11131518, 0x0206090D, 0x10101010
    }},
    {set:{//10 Disable (Do not modify me)
        0x000000C0, 0x000011A0, 0x094428A0, 0x000007AF, 0x03050709, 0x0B0D0F11, 0x03050709, 
        0x0B0D0F11, 0x03050709, 0x0B0D0F11, 0x03050709, 0x0B0D0F11, 0x0406090D, 0x10101010
    }}
},
NR2:{
    {set:{//00 Preview ISO100
        0x00200002, 0x00191414, 0x00D27768, 0x05090E14, 0x0205070A, 0x01107ACE, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x0306090D, 
    }},
    {set:{//01 Preview ISO200
        0x00200003,	0x00191414, 0x00D27768, 0x05090E14, 0x0205070A, 0x01107ACE, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x0306090D
    }},
    {set:{//02 Preview ISO400
        0x00200003,	0x00191414, 0x00D27768, 0x05090E14, 0x0205070A, 0x01107ACE, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x0306090D
    }},
    {set:{//03 Preview ISO800
        0x00200003, 0x00191414, 0x00D27768, 0x09111925,  0x24334155, 0x0110728E, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x060B1119
    }},
    {set:{//04 Preview ISO1600
        0x00200003, 0x00191414, 0x00D27768, 0x09111925, 0x24334155, 0x0110728E, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x060B1119
    }},
    {set:{//05 Capture Mode0 ISO100 (v)
        //0x00200002,	0x00009414,	0x00927788,	0x02030405,	0x0408080F,	0x02105182,	0x08080808,	0x10101010,	0x01AF5B58,	0x0000056B,	0x01020303
        0x00200003, 0x00191414, 0x00D27768, 0x05090E14, 0x0205070A, 0x01107ACE, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x0306090D
    }},
    {set:{//06 Capture Mode0 ISO200 (v)
        0x00200003,	0x00191414, 0x00D27768, 0x080F1721, 0x01030406, 0x00B06A8E, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x050A0F16
    }},
    {set:{//07 Capture Mode0 ISO400 (v)
        0x00200003,	0x00191414, 0x00D27768, 0x09111925, 0x101F2D41, 0x0110728E, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x060B1119
    }},
    {set:{//08 Capture Mode0 ISO800 (v)
        0x00200003,	0x00191414, 0x00D27768, 0x09111925, 0x101F2D41, 0x0110728E, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x060B1119
    }},
    {set:{//09 Capture Mode0 ISO1600 (v)
        0x00200003,	0x00191414, 0x00D27768, 0x09111925, 0x101F2D41, 0x0110728E, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x060B1119
    }}, 
    {set:{//10 Capture Mode1 ISO100 (o)
        0x00210003, 0x00191414, 0x00D27768, 0x05090E14, 0x0205070A, 0x01107ACE, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x0306090D
    }},
    {set:{//11 Capture Mode1 ISO200 (o)
        0x00210003, 0x00191414, 0x00D27768, 0x080F1721, 0x01030406, 0x00B06A8E, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x050A0F16
    }},
    {set:{//12 Capture Mode1 ISO400 (o)
        0x00210003, 0x00191414, 0x00D27768, 0x09111925, 0x101F2D41, 0x0110728E, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x060B1119
    }},
    {set:{//13 Capture Mode1 ISO800 (o)
        0x00210003, 0x00191414, 0x00D27768, 0x09111925, 0x24334458, 0x0110728E, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x060B1119
    }},
    {set:{//14 Capture Mode1 ISO1600
        0x00210003, 0x00191414, 0x00D27768, 0x09111925, 0x24334155, 0x0110728E, 0x08080808, 0x10101010, 0x01AF5B48, 0x0000056B, 0x060B1119
    }},
    {set:{//15 Disable (Do not modify me)
        0x00000000, 0x0001FF01, 0x00523264, 0x04090B0F, 0x050A0B10, 0x02107294, 0x08101820, 0x10080604, 0x01AF5B43, 0x0000056B, 0x0306070A
    }}
},
EE:{//EE
    {set:{//00 Preview ISO100 (middle sharpness)
        0x00000029, 0x0037372D, 0x0000000A, 0x02EE1928, 0x03B60365, 0x032000AB, 0xFFFFFD0D, 
    }},
    {set:{//01 Preview ISO200 (middle sharpness)
        0x00000029, 0x0037372D, 0x0000000F, 0x02BC0F3C, 0x0384036F, 0x032000B5, 0xFFFFFD0D, 
    }},
    {set:{//02 Preview ISO400 (middle sharpness)
        0x00000028, 0x0037372D, 0x00120049, 0x0145067B, 0x01A602A3, 0x01D001CB, 0xFFFFFD0D, 
    }},
    {set:{//03 Preview ISO800 (middle sharpness)
        0x00000028, 0x0037372D, 0x0000000F, 0x02660950, 0x02BC0183, 0x032000C9, 0xFFFFFB0D, 
    }},
    {set:{//04 Preview ISO1600 (middle sharpness)
        0x00000028, 0x007F3721, 0x000E0068, 0x00DB049A, 0x011C01C2, 0x013800EA, 0xFFFFFB0D, 
    }},
    {set:{//05 Capture ISO100 (middle sharpness)
        0x00000029, 0x0037372D, 0x0000000A, 0x02EE1928, 0x03B60365, 0x032000AB, 0xFFFFFD0D, 
    }},
    {set:{//06 Capture ISO200 (middle sharpness)
        0x00000029, 0x007F3721, 0x0000000F, 0x02BC0F3C, 0x0384036F, 0x032000B5, 0xFFFFFD0D, 
    }},
    {set:{//07 Capture ISO400 (middle sharpness)
        0x00000028, 0x0037372D, 0x0000000F, 0x02660950, 0x02BC0183, 0x032000C9, 0xFFFFFD0D, 
    }},
    {set:{//08 Capture ISO800 (middle sharpness)
        0x00000028, 0x0037372D, 0x0000000F, 0x02660950, 0x02BC0183, 0x032000C9, 0xFFFFFB0D, 
    }},
    {set:{//09 Capture ISO1600 (middle sharpness)
        0x00000028, 0x007F3721, 0x000E0068, 0x00DB049A, 0x011C01C2, 0x013800EA, 0xFFFFFB0D, 
    }},
    {set:{//10  no one uses this, this is Min EE (low sharpness)
        0x00000024, 0x0037372D, 0x00050023, 0x012C113C, 0x020001D0, 0x020000E7, 0xFFFF0005, 
    }},
    {set:{//11 no one uses this, this is Max EE (high sharpness)
        0x0000002C, 0x00373721, 0x000A0023, 0x03203937, 0x03FF01D0, 0x03FF00E7, 0xFFFF0005, 
    }}
}, 
Saturation:{
    {set:{//00 (middle saturation)
        //0x00010709, 0x1020E0F0, 0x32474D47, 0x38000000, 0xFF00FF00, 0x001A2D40, 0x000A0A0A, 0x00643C1E, 
        0x00010709, 0x1020E0F0, 0x32404640, 0x38000000, 0xFF00FF00, 0x001A2D40, 0x000A0A0A, 0x00643C1E, 
    }},
    {set:{//01 (middle saturation)
        //0x00010709, 0x1020E0F0, 0x32474D47, 0x37000000, 0xFF00FF00, 0x001A2D40, 0x000A0A0A, 0x00643C1E, 
        0x00010709, 0x1020E0F0, 0x32404640, 0x37000000, 0xFF00FF00, 0x001A2D40, 0x000A0A0A, 0x00643C1E, 
    }},
    {set:{//02 (middle saturation)
        0x00010709, 0x1020E0F0, 0x30444A44, 0x34000000, 0xFF00FF00, 0x001A2D40, 0x000A0A0A, 0x00643C1E, 
    }},
    {set:{//03 (middle saturation)
        0x00010709, 0x1020E0F0, 0x28404640, 0x32000000, 0xFF00FF00, 0x001A2D40, 0x000A0A0A, 0x00643C1E, 
    }},
    {set:{//04 (middle saturation)
        //0x00010709, 0x1020E0F0, 0x1A3C463C, 0x1A000000, 0xFF00FF00, 0x001A2D40, 0x000A0A0A, 0x00643C1E, 
        0x00010709, 0x1020E0F0, 0x1A384238, 0x1A000000, 0xFF00FF00, 0x001A2D40, 0x000A0A0A, 0x00643C1E, 
    }},
    {set:{//05 no one uses this, this is Min Sat. (low saturation)
        0x00000709, 0x1020E0F0, 0x34343434, 0x34000000, 0xFF00FF00, 0x001A2D40, 0x000A0A0A, 0x00643C1E, 
    }},
    {set:{//06 no one uses this, this is Max Sat. (high saturation)
        0x00000709, 0x1020E0F0, 0x4A4A4A4A, 0x4A000000, 0xFF00FF00, 0x001A2D40, 0x000A0A0A, 0x00643C1E, 
    }}
}, 
Contrast:{
    //..........................................................................
    //  low brightness
    {set:{//00  //  low contrast
        0x00000008, 0x00F00000, 0xFF00003B
    }},
    {set:{//01  //  middle contrast
        0x00000008, 0x00F00000, 0xFF000040
    }},
    {set:{//02  //  high contrast
        0x00000008, 0x00F00000, 0xFF000045
    }}, 
    //..........................................................................
    //  middle brightness
    {set:{//03  //  low contrast
        0x00000008, 0x00000000, 0xFF00003B
    }},
    {set:{//04  //  middle contrast
        0x00000008, 0x00000000, 0xFF000040
    }},
    {set:{//05  //  high contrast
        0x00000008, 0x00000000, 0xFF000045
    }}, 
    //..........................................................................
    //  high brightness
    {set:{//06  //  low contrast
        0x00000008, 0x000A0000, 0xFF00003B
    }},
    {set:{//07  //  middle contrast
        0x00000008, 0x000A0000, 0xFF000040
    }},
    {set:{//08  //  high contrast
        0x00000008, 0x000A0000, 0xFF000045
    }}, 
}, 
Hue:{
    {set:{//00  //  low hue
        0x00000002, 0x808062AE
    }},
    {set:{//01  //  middle hue
        0x00000002, 0x00007F01
    }},
    {set:{//02  //  high hue
        0x00000002, 0x80806252
    }}
}, 
CCM:{
    {set:{//00
        0x01ED049D, 0x04500463, 0x018A0427, 0x040304B5, 0x01B80000, 
    }},
    {set:{//01
        0x0256050B, 0x044B046B, 0x018B0420, 0x040504BF, 0x01C40000, 
    }},
    {set:{//02
        0x022004D1, 0x044F0447, 0x018A0443, 0x000704A1, 0x019A0000, 
    }}
},
Gamma:{
    {set:{//00
        0x4F260F04, 0x8E857564, 0xC1B4A198, 0xE4DCD6CB, 0xFBF8F2EE, //09-26
        //0x643C1709, 0xA1968D7C, 0xC5BDB2AA, 0xE2DCD4CC, 0xFBF8F2ED, 
        //0x3F1A0D03,0x897C6C59,0xBFB2A096,0xE0DBD4CA,0xF3EFEBE8,//10-12
    }},
}

