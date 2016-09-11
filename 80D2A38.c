int __fastcall sub_80D2A38(int a1)
{
  int v1; // r4@1
  __int16 v2; // r2@1
  int v3; // r0@3
  __int16 v4; // r2@3
  int v5; // r0@3
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( *(_WORD *)(a1 + 46) )
  {
    v3 = *(_WORD *)(a1 + 48) + *(_WORD *)(a1 + 54);
    *(_WORD *)(v1 + 54) = v3;
    *(_WORD *)(v1 + 36) = v3 << 16 >> 24;
    v4 = sine(*(_WORD *)(v1 + 52), *(_WORD *)(v1 + 50));
    *(_WORD *)(v1 + 38) = v4;
    v5 = (*(_WORD *)(v1 + 52) + 3) & 0xFF;
    *(_WORD *)(v1 + 52) = v5;
    if ( v5 > 70 )
    {
      *(_DWORD *)(v1 + 28) = sub_80D29CC;
      *(_WORD *)(v1 + 32) += *(_WORD *)(v1 + 36);
      *(_WORD *)(v1 + 34) += v4;
      *(_WORD *)(v1 + 36) = 0;
      *(_WORD *)(v1 + 38) = 0;
      *(_WORD *)(v1 + 52) = (unsigned __int16)Random() % 0xB4u;
    }
  }
  else
  {
    *(_WORD *)(a1 + 48) = word_3004B00[0];
    *(_WORD *)(a1 + 50) = word_3004B02;
    *(_WORD *)(a1 + 46) = 1;
  }
  return v7;
}
