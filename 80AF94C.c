int __fastcall sub_80AF94C(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r2@1
  int v3; // r5@1
  __int16 v4; // r3@1
  int v5; // r1@1
  __int16 v6; // r0@3
  __int16 v7; // r0@5
  int v8; // r6@5
  __int16 v9; // r0@6
  unsigned int v10; // r2@7
  unsigned int v11; // r1@10
  _WORD *v12; // r4@11
  int v14; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_BYTE *)v2 + 14);
  v4 = *((_WORD *)v2 + 5);
  v5 = *((_WORD *)v2 + 5);
  if ( *((_WORD *)v2 + 5) )
  {
    v6 = *((_WORD *)v2 + 14) + 1;
    *((_WORD *)v2 + 14) = v6;
    if ( v6 > 29 )
    {
      *((_WORD *)v2 + 14) = 0;
      if ( v5 >= 0 )
      {
        v9 = *((_WORD *)v2 + 4) + 1;
        *((_WORD *)v2 + 4) = v9;
        v8 = (unsigned __int8)v9;
        *((_WORD *)v2 + 5) = v4 - 1;
        audio_play(0x15u);
      }
      else
      {
        v7 = *((_WORD *)v2 + 4);
        *((_WORD *)v2 + 4) = v7 - 1;
        v8 = (unsigned __int8)v7;
        *((_WORD *)v2 + 5) = v4 + 1;
        audio_play(0x16u);
      }
      v10 = 40 * v1;
      if ( LOWORD(dword_3004B20[10 * v1 + 3]) == 0xFFFF )
      {
        v11 = 0;
        while ( 1 )
        {
          v12 = &byte_3004B28[2 * (v11 + 4)] + v10;
          if ( (signed int)*v12 < 0 )
            break;
          v11 = (v11 + 1) & 0xFF;
          if ( v11 > 2 )
            return v14;
        }
        RequestSpriteCopy((int)(&byte_3004B28[2 * v11 + 14] + v10), 2 * (v8 + 160 * v3 + 147) + 100712448, 2);
        ++*v12;
      }
      else
      {
        RequestSpriteCopy((int)&dword_3004B20[v10 / 4 + 3], 2 * (v8 + 160 * v3 + 147) + 100712448, 2);
      }
    }
  }
  else
  {
    nullsub_19(*((_BYTE *)v2 + 14));
    DestroyTask(v1);
    *(_BYTE *)(4 * v3 + 0x201933A) &= 0xFBu;
  }
  return v14;
}
