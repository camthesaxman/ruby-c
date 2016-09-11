int __fastcall sub_80D45D8(unsigned __int8 a1)
{
  int *v1; // r4@1
  signed __int16 v2; // r0@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 5) = (unsigned __int8)sub_80D4394();
  if ( battle_side_get_owner(v202F7C8) << 24 )
  {
    *((_WORD *)v1 + 8) = 16;
    v2 = 80;
  }
  else
  {
    *((_WORD *)v1 + 8) = 136;
    v2 = 40;
  }
  *((_WORD *)v1 + 10) = v2;
  *((_WORD *)v1 + 9) = 98;
  *((_WORD *)v1 + 11) = *((_WORD *)v1 + 8) + 49;
  *((_WORD *)v1 + 16) = 5 * *((_WORD *)v1 + 5) + 5;
  *v1 = (int)sub_80D463C;
  return v4;
}
