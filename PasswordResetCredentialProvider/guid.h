
DEFINE_GUID(CLSID_PasswordResetProvider, 0xB6EFF27D, 0xC1C4, 0x481F, 0xB8, 0x1B, 0xF3, 0x54, 0x7C, 0x47, 0xD5, 0x8A);

//#ifdef INITGUID
//#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
/        EXTERN_C const GUID DECLSPEC_SELECTANY name \
                = { l, w1, w2, { b1, b2,  b3,  b4,  b5,  b6,  b7,  b8 } }
//#else
//#define DEFINE_GUID(name, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
    EXTERN_C const GUID FAR name
//#endif // INITGUID