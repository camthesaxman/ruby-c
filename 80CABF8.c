int __fastcall sub_80CABF8(int a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  sub_8078764(a1, 1);
  StartSpriteAnim(v1, word_3004B08);
  if ( word_3004B08 == 1 )
    *(_BYTE *)(v1 + 1) = *(_BYTE *)(v1 + 1) & 0xF3 | 4;
  *(_WORD *)(v1 + 46) = word_3004B06;
  *(_WORD *)(v1 + 48) = word_3004B04;
  *(_DWORD *)(v1 + 28) = sub_80CAC44;
  call_via_r1(v1, sub_80CAC44);
  return v3;
}
