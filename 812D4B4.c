int __fastcall sub_812D4B4(int a1)
{
  int v1; // r4@1
  signed __int16 v2; // r0@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( battle_side_get_owner(v202F7C8) << 24 )
    v2 = -16;
  else
    v2 = 256;
  *(_WORD *)(v1 + 32) = v2;
  *(_WORD *)(v1 + 34) = 0;
  *(_DWORD *)(v1 + 28) = sub_812D4EC;
  return v4;
}
