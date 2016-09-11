int __fastcall sub_807B7E0(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  __int16 v3; // r2@2
  __int16 v4; // r0@3
  int v5; // r1@5
  __int16 v6; // r0@6
  int v8; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v2 + 6) == 2 )
  {
    *((_WORD *)v2 + 6) = 0;
    BlendPalette(
      (unsigned int)((LOWORD(dword_3004B20[10 * a1 + 2]) << 20) + 0x1000000) >> 16,
      0x10u,
      dword_3004B20[10 * a1 + 4],
      HIWORD(dword_3004B20[10 * a1 + 2]));
    v3 = *((_WORD *)v2 + 9);
    if ( *((_WORD *)v2 + 9) )
    {
      v5 = *((_WORD *)v2 + 8);
      *((_WORD *)v2 + 8) = v5 - 1;
      if ( (v5 - 1) & 0x8000 )
      {
        *((_WORD *)v2 + 8) = v5;
        *((_WORD *)v2 + 9) = v3 ^ 1;
        v6 = *((_WORD *)v2 + 7) + 1;
        *((_WORD *)v2 + 7) = v6;
        if ( v6 == 2 )
          DestroyTask(v1);
      }
    }
    else
    {
      v4 = *((_WORD *)v2 + 8) + 1;
      *((_WORD *)v2 + 8) = v4;
      if ( v4 > 8 )
        *((_WORD *)v2 + 9) = v3 ^ 1;
    }
  }
  else
  {
    ++*((_WORD *)v2 + 6);
  }
  return v8;
}
