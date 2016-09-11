int __fastcall sub_804D6BC(int a1)
{
  int v1; // r5@1
  __int16 v2; // r4@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 34) + *(_WORD *)(a1 + 46) / 10;
  *(_WORD *)(a1 + 34) = v2;
  *(_WORD *)(v1 + 56) += *(_WORD *)(v1 + 48);
  *(_WORD *)(a1 + 32) = *(_WORD *)(a1 + 56) / 10;
  if ( v2 > 76 )
  {
    *(_WORD *)(a1 + 34) = 76;
    *(_WORD *)(a1 + 46) = -(*(_WORD *)(a1 + 50) * *(_WORD *)(a1 + 46)) / 100;
    ++*(_WORD *)(a1 + 52);
  }
  if ( *(_WORD *)(a1 + 32) == 120 )
    *(_WORD *)(a1 + 48) = 0;
  *(_WORD *)(a1 + 46) += *(_WORD *)(a1 + 54);
  if ( *(_WORD *)(a1 + 52) == 4 )
  {
    *(_WORD *)(a1 + 60) = 1;
    *(_DWORD *)(a1 + 28) = SpriteCallbackDummy;
  }
  return v4;
}
