int __fastcall sub_80E17CC(int a1)
{
  int v1; // r6@1
  unsigned __int8 *v2; // r0@2
  int v3; // r5@4
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( word_3004B00[0] )
    v2 = (unsigned __int8 *)33748937;
  else
    v2 = (unsigned __int8 *)33748936;
  v3 = *v2;
  *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077ABC(*v2, 0) - 16 + 32 * word_3004B02;
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077FC0(v3) + 32;
  *(_WORD *)(v1 + 4) = *(_WORD *)(v1 + 4) & 0xFC00 | ((*(_WORD *)(v1 + 4) & 0x3FF) + 8 * word_3004B02) & 0x3FF;
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  *(_WORD *)(v1 + 46) = word_3004B04;
  *(_DWORD *)(v1 + 28) = sub_80782D8;
  return v5;
}
