int __fastcall sub_8148078(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v3; // r0@1
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 32) += 4;
  v2 = *(_WORD *)(a1 + 46);
  *(_WORD *)(v1 + 34) += v2;
  v3 = v2 + *(_WORD *)(v1 + 48);
  *(_WORD *)(v1 + 46) = v3;
  if ( !(v3 << 16) )
    cry_related(*(_WORD *)(v1 + 50), 0);
  if ( *(_WORD *)(v1 + 46) == 9 )
    *(_DWORD *)(v1 + 28) = SpriteCallbackDummy;
  return v5;
}
