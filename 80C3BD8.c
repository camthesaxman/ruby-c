int __fastcall sub_80C3BD8(unsigned __int8 a1)
{
  int *v1; // r4@1
  __int16 v2; // r0@1
  __int16 v3; // r0@3
  __int16 v4; // r0@5
  int v6; // [sp+8h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 15) + 1;
  *((_WORD *)v1 + 15) = v2;
  if ( v2 == 1 )
  {
    *((_WORD *)v1 + 15) = 0;
    BlendPalette(0x91u, 1u, *((_BYTE *)v1 + 32), 28557);
    if ( *((_WORD *)v1 + 17) )
    {
      v4 = *((_WORD *)v1 + 16) - 1;
      *((_WORD *)v1 + 16) = v4;
      if ( !v4 )
        *((_WORD *)v1 + 17) = 0;
    }
    else
    {
      v3 = *((_WORD *)v1 + 16) + 1;
      *((_WORD *)v1 + 16) = v3;
      if ( v3 == 16 )
        *((_WORD *)v1 + 17) = 1;
    }
  }
  return v6;
}
