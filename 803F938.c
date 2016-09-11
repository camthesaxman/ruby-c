int __fastcall unref_sub_803F938(int a1, unsigned int a2, int a3)
{
  unsigned int v3; // r5@1
  int v4; // r10@1
  int v5; // r6@4
  char *v6; // r4@5
  int v7; // r12@5
  unsigned int v8; // r1@5
  int v9; // r2@5
  signed int v10; // r3@6
  signed int v11; // r4@6
  int v12; // r8@6
  _BYTE *v13; // r2@8
  char v14; // r0@11
  int v16; // [sp+0h] [bp-28h]@5
  int v17; // [sp+24h] [bp-4h]@0

  v3 = a2;
  v4 = a3;
  if ( a1 << 16 == 20185088 && a3 != 33587200 && a3 != 33603584 )
  {
    v5 = 0;
    do
    {
      v6 = &gSpindaSpotGraphics[36 * v5];
      v7 = ((unsigned __int8)*v6 + 248 + (v3 & 0xF)) & 0xFF;
      v8 = ((unsigned __int8)v6[1] + 248 + ((v3 & 0xF0) >> 4)) & 0xFF;
      v9 = 0;
      v16 = v5 + 1;
      do
      {
        v10 = (unsigned __int16)*(&word_81FCB86[18 * v5] + v9);
        v11 = v7;
        v12 = v9 + 1;
        if ( __OFSUB__(v7, v7 + 16) ^ 1 )
        {
          do
          {
            v13 = (_BYTE *)(32 * (v11 / 8) + v4 + v11 % 8 / 2 + (v8 >> 3 << 8) + 4 * (v8 & 7));
            if ( v10 & 1 )
            {
              if ( v11 & 1 )
              {
                if ( (((*v13 & 0xF0) - 16) & 0xFFu) <= 0x20 )
                {
                  v14 = *v13 + 64;
_0803FA22:
                  *v13 = v14;
                  goto _0803FA24;
                }
              }
              else if ( (((*v13 & 0xF) - 1) & 0xFFu) <= 2 )
              {
                v14 = *v13 + 4;
                goto _0803FA22;
              }
            }
_0803FA24:
            v10 >>= 1;
            ++v11;
          }
          while ( v11 < v7 + 16 );
        }
        v8 = (unsigned __int8)(v8 + 1);
        v9 = v12;
      }
      while ( v12 <= 15 );
      v3 >>= 8;
      ++v5;
    }
    while ( v16 <= 3 );
  }
  return v17;
}
