int __fastcall sub_80D92D0(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_8078764(a1, 1);
  *(_WORD *)(v1 + 46) = 30;
  if ( word_3004B04 )
  {
    *(_WORD *)(v1 + 50) = *(_WORD *)(v1 + 32) + 20;
    *(_BYTE *)(v1 + 63) |= 1u;
  }
  else
  {
    *(_WORD *)(v1 + 50) = *(_WORD *)(v1 + 32) - 20;
  }
  *(_WORD *)(v1 + 54) = *(_WORD *)(v1 + 34) - 20;
  *(_DWORD *)(v1 + 28) = sub_8078B34;
  oamt_set_x3A_32(v1, (int)sub_80D9328);
  return v3;
}
