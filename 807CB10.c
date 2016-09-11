int sub_807CB10()
{
  int v0; // r12@1
  signed int v1; // r7@2
  unsigned int v2; // r5@4
  unsigned __int16 v3; // r9@4
  int v4; // r2@5
  int v5; // r4@6
  unsigned int v6; // r3@8
  unsigned __int16 v7; // r8@8
  int v8; // r1@9
  int v9; // r6@10
  int v10; // r0@10
  unsigned int v11; // r4@12
  _BYTE *v12; // r1@16
  unsigned int v13; // r1@21
  _BYTE *v14; // r0@21
  int v16; // [sp+1Ch] [bp-4h]@0

  dword_30006DC = (int)&gUnknown_083970C8;
  v0 = 0;
  do
  {
    v1 = 33750088;
    if ( !v0 )
      v1 = 33749480;
    v2 = 0;
    v3 = v0 + 1;
    do
    {
      v4 = (v2 << 8) & 0xFFFF;
      if ( v0 )
        v5 = 0;
      else
        v5 = 16 * v2 & 0xFFFF;
      v6 = 0;
      v7 = v2 + 1;
      do
      {
        v8 = (v4 - v5) << 16;
        v4 = (v4 - v5) & 0xFFFF;
        *(_BYTE *)(32 * v6 + v1 + v2) = BYTE3(v8);
        v6 = (v6 + 1) & 0xFFFF;
      }
      while ( v6 <= 2 );
      v9 = v4;
      v10 = 7936 - v4;
      if ( 7936 - v4 < 0 )
        v10 = 7951 - v4;
      v11 = (unsigned int)(v10 << 12) >> 16;
      if ( v2 > 0xB )
      {
        for ( ; v6 <= 0x12; v6 = (v6 + 1) & 0xFFFF )
        {
          v13 = (v4 + v11) << 16;
          v4 = (v4 + v11) & 0xFFFF;
          v14 = (_BYTE *)(32 * v6 + v1 + v2);
          v13 >>= 24;
          *v14 = v13;
          if ( v13 > 0x1F )
            *v14 = 31;
        }
      }
      else
      {
        for ( ; v6 <= 0x12; v6 = (v6 + 1) & 0xFFFF )
        {
          v4 = (v4 + ((unsigned int)(v10 << 12) >> 16)) & 0xFFFF;
          if ( (signed __int16)(v4 - v9) > 0 )
            v4 = (v4 - ((signed int)((signed __int16)(v4 - v9) + ((unsigned int)((v4 - v9) << 16) >> 31)) >> 1)) & 0xFFFF;
          v12 = (_BYTE *)(32 * v6 + v1 + v2);
          *v12 = BYTE1(v4);
          if ( (unsigned __int16)((unsigned __int16)v4 >> 8) > 0x1Fu )
            *v12 = 31;
        }
      }
      v2 = (unsigned __int16)(v2 + 1);
    }
    while ( v7 <= 0x1Fu );
    v0 = (unsigned __int16)(v0 + 1);
  }
  while ( v3 <= 1u );
  return v16;
}
