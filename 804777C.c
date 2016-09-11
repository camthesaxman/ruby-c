int __fastcall sub_804777C(unsigned __int8 a1)
{
  int v1; // r5@1
  char *v2; // r4@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &gSprites[68 * (unsigned __int8)byte_3004340[a1]];
  *((_WORD *)v2 + 23) = 5;
  *((_WORD *)v2 + 24) = 0;
  *((_WORD *)v2 + 18) = 115;
  *((_WORD *)v2 + 19) = 0;
  *((_DWORD *)v2 + 7) = sub_8047830;
  if ( battle_side_get_owner(a1) << 24 )
  {
    *((_WORD *)v2 + 23) = -*((_WORD *)v2 + 23);
    *((_WORD *)v2 + 24) = -*((_WORD *)v2 + 24);
    *((_WORD *)v2 + 18) = -*((_WORD *)v2 + 18);
    *((_WORD *)v2 + 19) = -*((_WORD *)v2 + 19);
  }
  call_via_r1(&gSprites[68 * *((_WORD *)v2 + 28)], dword_2020020[17 * *((_WORD *)v2 + 28)]);
  if ( (unsigned __int8)battle_get_per_side_status(v1) == 2 )
    *((_DWORD *)v2 + 7) = sub_804780C;
  return v4;
}
