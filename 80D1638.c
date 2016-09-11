int __fastcall sub_80D1638(unsigned __int8 a1)
{
  int *v1; // r4@1
  signed __int16 v2; // r0@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 4) = 0;
  *((_WORD *)v1 + 5) = 0;
  *((_WORD *)v1 + 6) = 0;
  *((_WORD *)v1 + 7) = 0;
  *((_WORD *)v1 + 16) = 3;
  if ( battle_side_get_owner(v202F7C9) << 24 )
  {
    *((_WORD *)v1 + 17) = 1;
    v2 = -8;
  }
  else
  {
    *((_WORD *)v1 + 17) = -1;
    v2 = 8;
  }
  *((_WORD *)v1 + 18) = v2;
  *((_WORD *)v1 + 19) = (unsigned __int8)obj_id_for_side_relative_to_move(1);
  *v1 = (int)sub_80D16A0;
  return v4;
}
