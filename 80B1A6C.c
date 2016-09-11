int __fastcall c3_08130B10(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r2@1
  __int16 v3; // r0@1
  __int16 v4; // r0@3
  int *v5; // r4@5
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4) + 1;
  *((_WORD *)v2 + 4) = v3;
  if ( v3 == 1 )
  {
    *((_WORD *)v2 + 4) = 0;
    v4 = *((_WORD *)v2 + 7) ? *((_WORD *)v2 + 8) - 1 : *((_WORD *)v2 + 8) + 1;
    *((_WORD *)v2 + 8) = v4;
    v5 = &dword_3004B20[10 * v1];
    BlendPalette(16 * *((_WORD *)v5 + 6) + 264, 1u, *((_BYTE *)v5 + 16), 0x7FFF);
    if ( !*((_WORD *)v5 + 8) || *((_WORD *)v5 + 8) == 16 )
    {
      *((_WORD *)v5 + 7) ^= 1u;
      if ( v2019217 <= 4 )
      {
        BlendPalette(16 * *((_WORD *)v5 + 6) + 264, 1u, 0, 31);
        DestroyTask(v1);
      }
    }
  }
  return v7;
}
