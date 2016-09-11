int __fastcall sub_80C3C44(int a1)
{
  int v1; // r4@1
  __int16 v2; // r1@1
  int v3; // r2@4
  int v4; // r0@4
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( (signed int)*(_WORD *)(a1 + 46) > 9 )
  {
    v3 = *(_WORD *)(a1 + 48) + 1536;
    v4 = *(_WORD *)(a1 + 32) - (v3 << 16 >> 24);
    *(_WORD *)(v1 + 32) = v4;
    *(_WORD *)(v1 + 48) = (unsigned __int8)v3;
    if ( (signed __int16)v4 <= 119 )
      *(_WORD *)(v1 + 32) = 120;
    if ( *(_WORD *)(v1 + 32) == 120 )
    {
      *(_DWORD *)(v1 + 28) = SpriteCallbackDummy;
      *(_WORD *)(v1 + 48) = 0;
      v2018006 = 1;
    }
  }
  else
  {
    *(_WORD *)(a1 + 46) = v2 + 1;
    if ( (signed __int16)(v2 + 1) == 10 )
    {
      cry_related(*(_WORD *)(a1 + 48), 0);
      *(_WORD *)(v1 + 48) = 0;
    }
  }
  return v6;
}
