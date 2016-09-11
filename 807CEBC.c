int __fastcall sub_807CEBC(unsigned __int8 a1, int a2, char a3)
{
  unsigned int v3; // r4@1
  int v4; // r5@2
  unsigned int v5; // r9@2
  unsigned int v6; // r8@4
  int v7; // r12@4
  signed int v8; // r0@7
  unsigned int v9; // r7@11
  int v10; // r2@12
  int v11; // r1@14
  unsigned int v12; // r7@17
  int v13; // r2@18
  int v14; // r1@18
  int v15; // r5@23
  unsigned int v16; // r9@23
  unsigned int v17; // r4@23
  unsigned int v18; // r8@25
  int v19; // r12@25
  unsigned int v20; // r7@28
  int v21; // r0@29
  unsigned int v22; // r7@33
  unsigned int v23; // r3@34
  int v25; // [sp+0h] [bp-28h]@2
  int v26; // [sp+0h] [bp-28h]@23
  int v27; // [sp+24h] [bp-4h]@0

  v3 = a1;
  a2 = (unsigned __int8)a2;
  if ( a3 <= 0 )
  {
    if ( a3 < 0 )
    {
      v26 = ~a3 & 0xFF;
      v15 = 16 * a1;
      v16 = (a2 + a1) & 0xFF;
      v17 = a1;
      if ( a1 < v16 )
      {
        do
        {
          if ( *(_BYTE *)(dword_30006DC + v17) )
          {
            if ( v17 != 16 && v17 <= 0x1B )
            {
              v22 = 0;
              v18 = v16 << 16;
              v19 = v17 + 1;
              do
              {
                v23 = *(_WORD *)(2 * v15 + 0x202EAC8) << 16;
                *(_WORD *)(2 * v15 + 0x202EEC8) = *(_WORD *)(2
                                                           * ((v23 >> 17) & 0xF | (v23 >> 18) & 0xF0 | (v23 >> 19) & 0xF00)
                                                           + (v26 << 24 >> 11)
                                                           + 0x2000000);
                v15 = (v15 + 1) & 0xFFFF;
                v22 = (v22 + 1) & 0xFFFF;
              }
              while ( v22 <= 0xF );
            }
            else
            {
              v20 = 0;
              v18 = v16 << 16;
              v19 = v17 + 1;
              do
              {
                v21 = *(_WORD *)(2 * v15 + 0x202EAC8);
                if ( v21 != 11679 )
                  *(_WORD *)(2 * v15 + 0x202EEC8) = *(_WORD *)(2
                                                             * (((unsigned int)*(_WORD *)(2 * v15 + 0x202EAC8) << 16 >> 17) & 0xF | ((unsigned int)*(_WORD *)(2 * v15 + 0x202EAC8) << 16 >> 18) & 0xF0 | ((unsigned int)*(_WORD *)(2 * v15 + 0x202EAC8) << 16 >> 19) & 0xF00)
                                                             + (v26 << 24 >> 11)
                                                             + 0x2000000);
                v15 = (v15 + 1) & 0xFFFF;
                v20 = (v20 + 1) & 0xFFFF;
              }
              while ( v20 <= 0xF );
            }
          }
          else
          {
            CpuFastSet(2 * v15 + 33745608, 2 * v15 + 33746632, 8);
            v15 = (v15 + 16) & 0xFFFF;
            v18 = v16 << 16;
            v19 = v17 + 1;
          }
          v17 = (unsigned __int16)v19;
        }
        while ( v19 << 16 < v18 );
      }
    }
    else
    {
      CpuFastSet(32 * a1 + 33745608, 32 * a1 + 33746632, 8 * a2);
    }
  }
  else
  {
    v25 = (a3 - 1) & 0xFF;
    v4 = 16 * a1;
    v5 = (a2 + a1) & 0xFF;
    if ( a1 < v5 )
    {
      do
      {
        if ( *(_BYTE *)(dword_30006DC + v3) )
        {
          if ( *(_BYTE *)(dword_30006DC + v3) != 2 && v3 - 16 != v202FEBD )
            v8 = 33749480;
          else
            v8 = 33750088;
          if ( v3 != 16 && v3 <= 0x1B )
          {
            v12 = 0;
            v6 = v5 << 16;
            v7 = v3 + 1;
            do
            {
              v13 = v4;
              v14 = *(_DWORD *)(2 * v4 + 0x202EAC8);
              v4 = (v4 + 1) & 0xFFFF;
              *(_WORD *)(2 * v13 + 0x202EEC8) = (*(_BYTE *)((v25 << 24 >> 19) + v8 + ((unsigned int)(v14 << 17) >> 27)) << 10) | 32 * *(_BYTE *)((v25 << 24 >> 19) + v8 + ((unsigned int)(v14 << 22) >> 27)) | *(_BYTE *)((v25 << 24 >> 19) + v8 + (v14 & 0x1F));
              v12 = (v12 + 1) & 0xFFFF;
            }
            while ( v12 <= 0xF );
          }
          else
          {
            v9 = 0;
            v6 = v5 << 16;
            v7 = v3 + 1;
            do
            {
              v10 = v4;
              if ( *(_WORD *)(2 * v4 + 0x202EAC8) == 11679 )
              {
                v4 = (v4 + 1) & 0xFFFF;
              }
              else
              {
                v11 = *(_DWORD *)(2 * v4 + 0x202EAC8);
                v4 = (v4 + 1) & 0xFFFF;
                *(_WORD *)(2 * v10 + 0x202EEC8) = (*(_BYTE *)((v25 << 24 >> 19) + v8 + ((unsigned int)(v11 << 17) >> 27)) << 10) | 32 * *(_BYTE *)((v25 << 24 >> 19) + v8 + ((unsigned int)(v11 << 22) >> 27)) | *(_BYTE *)((v25 << 24 >> 19) + v8 + (v11 & 0x1F));
              }
              v9 = (v9 + 1) & 0xFFFF;
            }
            while ( v9 <= 0xF );
          }
        }
        else
        {
          CpuFastSet(2 * v4 + 33745608, 2 * v4 + 33746632, 8);
          v4 = (v4 + 16) & 0xFFFF;
          v6 = v5 << 16;
          v7 = v3 + 1;
        }
        v3 = (unsigned __int16)v7;
      }
      while ( v7 << 16 < v6 );
    }
  }
  return v27;
}
