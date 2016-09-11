int __fastcall sub_80CEDF0(int a1)
{
  int v1; // r5@1
  signed __int16 v2; // r6@2
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( word_3004B00[0] == 1 )
  {
    *(_BYTE *)(a1 + 3) = *(_BYTE *)(a1 + 3) & 0xC1 | 0x10;
    v2 = 16;
  }
  else
  {
    v2 = -16;
  }
  *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u) + v2;
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C8, 3u) + 8;
  *(_WORD *)(v1 + 46) = 8;
  *(_DWORD *)(v1 + 28) = sub_80782D8;
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  return v4;
}
