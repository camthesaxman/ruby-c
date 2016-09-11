int __fastcall sub_80E1078(int a1)
{
  int v1; // r6@1
  __int16 v2; // r8@1
  __int16 v3; // r7@1
  signed int v4; // r5@1
  unsigned int v5; // r4@1
  int v7; // [sp+14h] [bp-4h]@0

  v1 = a1;
  sub_80787B0(a1, 1);
  v2 = (unsigned __int8)sub_8077EE4(v202F7C9, 2);
  v3 = (unsigned __int8)sub_8077EE4(v202F7C9, 3);
  v4 = Random() & 0x1F;
  v5 = Random() & 0x1F;
  if ( v4 > 16 )
    v4 = (16 - v4) & 0xFFFF;
  if ( (signed __int16)v5 > 16 )
    v5 = (16 - (signed __int16)v5) & 0xFFFF;
  *(_WORD *)(v1 + 46) = word_3004B04;
  *(_WORD *)(v1 + 50) = v2 + v4;
  *(_WORD *)(v1 + 54) = v3 + v5;
  *(_DWORD *)(v1 + 28) = sub_8078B34;
  oamt_set_x3A_32(v1, (int)move_anim_8074EE0);
  return v7;
}
