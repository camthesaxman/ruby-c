int __fastcall DrawSpindaSpots(int a1, unsigned int a2, int a3, int a4)
{
  unsigned int v4; // r5@1
  int v5; // r6@3
  char *v6; // r4@4
  int v7; // r12@4
  unsigned int v8; // r1@4
  int v9; // r2@4
  int v10; // r10@4
  signed int v11; // r3@5
  signed int v12; // r4@5
  int v13; // r8@5
  _BYTE *v14; // r2@7
  char v15; // r0@10
  int v17; // [sp+0h] [bp-28h]@1
  int v18; // [sp+24h] [bp-4h]@0

  v4 = a2;
  v17 = a3;
  a4 = (unsigned __int8)a4;
  if ( a1 << 16 == 20185088 && a4 )
  {
    v5 = 0;
    do
    {
      v6 = &gSpindaSpotGraphics[36 * v5];
      v7 = ((unsigned __int8)*v6 + 248 + (v4 & 0xF)) & 0xFF;
      v8 = ((unsigned __int8)v6[1] + 248 + ((v4 & 0xF0) >> 4)) & 0xFF;
      v9 = 0;
      v10 = v5 + 1;
      do
      {
        v11 = (unsigned __int16)*(&word_81FCB86[18 * v5] + v9);
        v12 = v7;
        v13 = v9 + 1;
        if ( __OFSUB__(v7, v7 + 16) ^ 1 )
        {
          do
          {
            v14 = (_BYTE *)(v17 + 32 * (v12 / 8) + v12 % 8 / 2 + (v8 >> 3 << 8) + 4 * (v8 & 7));
            if ( v11 & 1 )
            {
              if ( v12 & 1 )
              {
                if ( (((*v14 & 0xF0) - 16) & 0xFFu) <= 0x20 )
                {
                  v15 = *v14 + 64;
_0803FB36:
                  *v14 = v15;
                  goto _0803FB38;
                }
              }
              else if ( (((*v14 & 0xF) - 1) & 0xFFu) <= 2 )
              {
                v15 = *v14 + 4;
                goto _0803FB36;
              }
            }
_0803FB38:
            v11 >>= 1;
            ++v12;
          }
          while ( v12 < v7 + 16 );
        }
        v8 = (unsigned __int8)(v8 + 1);
        v9 = v13;
      }
      while ( v13 <= 15 );
      v4 >>= 8;
      ++v5;
    }
    while ( v10 <= 3 );
  }
  return v18;
}
