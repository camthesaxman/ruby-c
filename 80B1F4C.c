int __fastcall sub_80B1F4C(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r3@1
  __int16 v3; // r0@1
  __int16 v4; // r0@3
  int *v5; // r4@5
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 14);
  *((_WORD *)v2 + 14) = v3 + 1;
  if ( !(v3 & 0x8000) )
  {
    *((_WORD *)v2 + 14) = 0;
    if ( (signed int)*((_WORD *)v2 + 6) <= 0 )
      v4 = *((_WORD *)v2 + 5) - 1;
    else
      v4 = *((_WORD *)v2 + 5) + 1;
    *((_WORD *)v2 + 5) = v4;
    v5 = &dword_3004B20[10 * v1];
    BlendPalette(0x11u, 1u, *((_BYTE *)v5 + 10), *((_WORD *)v5 + 4));
    BlendPalette(0x1Au, 1u, *((_BYTE *)v5 + 10), *((_WORD *)v5 + 4));
    if ( *((_WORD *)v5 + 5) == *((_WORD *)v5 + 7) )
    {
      DestroyTask(v1);
      v201920B &= 0xFEu;
    }
  }
  return v7;
}
