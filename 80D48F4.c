int __fastcall sub_80D48F4(unsigned __int8 a1)
{
  int *v1; // r5@1
  int v2; // r0@1
  signed __int16 v3; // r1@1
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 7) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
  *((_WORD *)v1 + 8) = (unsigned __int8)sub_8077ABC(v202F7C8, 3u);
  v2 = battle_side_get_owner(v202F7C8);
  v3 = -1;
  if ( !(v2 << 24) )
    v3 = 1;
  *((_WORD *)v1 + 11) = v3;
  if ( sub_8076BE0() << 24 )
    *((_WORD *)v1 + 11) = -*((_WORD *)v1 + 11);
  *((_WORD *)v1 + 9) = 8 * *((_WORD *)v1 + 11) + *((_WORD *)v1 + 7);
  *((_WORD *)v1 + 10) = *((_WORD *)v1 + 8) - 8 * *((_WORD *)v1 + 11);
  *((_WORD *)v1 + 13) = -32;
  *((_WORD *)v1 + 5) = 0;
  *((_WORD *)v1 + 4) = 0;
  *v1 = (int)sub_80D4988;
  return v5;
}
