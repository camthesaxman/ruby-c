int __fastcall sub_80CE1AC(int a1)
{
  int v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 46) )
  {
    --*(_WORD *)(a1 + 46);
  }
  else
  {
    *(_BYTE *)(a1 + 44) &= 0xBFu;
    *(_WORD *)(a1 + 46) = 30;
    *(_WORD *)(a1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
    *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C8, 3u);
    *(_DWORD *)(v1 + 28) = sub_8078B34;
    oamt_set_x3A_32(v1, (int)move_anim_8072740);
  }
  return v3;
}
