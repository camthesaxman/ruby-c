unsigned int IntrMain()
{
  int v0; // r1@1
  signed int v1; // r12@1
  __int16 v2; // r0@1
  unsigned int result; // r0@17
  unsigned int v10; // [sp+0h] [bp-14h]@1
  __int16 v11; // [sp+4h] [bp-10h]@1
  __int16 v12; // [sp+8h] [bp-Ch]@1

  v10 = __get_SPSR();
  v11 = v4000208;
  v12 = v4000200;
  v4000208 = 1;
  v0 = v4000200 & (v4000200 >> 16);
  v1 = 0;
  v2 = v0 & 0x80;
  if ( !(v0 & 0x80) )
  {
    v1 = 4;
    v2 = v0 & 0x40;
    if ( !(v0 & 0x40) )
    {
      v1 = 8;
      v2 = v0 & 2;
      if ( !(v0 & 2) )
      {
        v1 = 12;
        v2 = v0 & 1;
        if ( !(v0 & 1) )
        {
          v1 = 16;
          v2 = v0 & 4;
          if ( !(v0 & 4) )
          {
            v1 = 20;
            v2 = v0 & 8;
            if ( !(v0 & 8) )
            {
              v1 = 24;
              v2 = v0 & 0x10;
              if ( !(v0 & 0x10) )
              {
                v1 = 28;
                v2 = v0 & 0x20;
                if ( !(v0 & 0x20) )
                {
                  v1 = 32;
                  v2 = v0 & 0x100;
                  if ( !(v0 & 0x100) )
                  {
                    v1 = 36;
                    v2 = v0 & 0x200;
                    if ( !(v0 & 0x200) )
                    {
                      v1 = 40;
                      v2 = v0 & 0x400;
                      if ( !(v0 & 0x400) )
                      {
                        v1 = 44;
                        v2 = v0 & 0x800;
                        if ( !(v0 & 0x800) )
                        {
                          v1 = 48;
                          v2 = v0 & 0x1000;
                          if ( !(v0 & 0x1000) )
                          {
                            v1 = 52;
                            v2 = v0 & 0x2000;
                            if ( v0 & 0x2000 )
                              v4000084 = 0;
                            while ( v0 & 0x2000 )
                              ;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v4000202 = v2;
  v4000200 &= ~v2 & 0xC2;
  _R3 = __get_CPSR() & 0xFFFFFF20 | 0x1F;
  __asm { MSR             CPSR_cf, R3 }
  (*(void (__cdecl **)(_DWORD))((char *)&gIntrTable + v1))(*(_DWORD *)((char *)&gIntrTable + v1));
  _R3 = __get_CPSR() & 0xFFFFFF20 | 0x92;
  __asm { MSR             CPSR_cf, R3 }
  result = v10;
  v4000200 = v12;
  v4000208 = v11;
  __asm { MSR             SPSR_cf, R0 }
  return result;
}
