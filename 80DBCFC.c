int __fastcall sub_80DBCFC(unsigned __int8 a1)
{
  int *v1; // r4@1
  int v2; // r0@1
  signed __int16 v3; // r1@1
  int v5; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 4) = (unsigned __int8)obj_id_for_side_relative_to_move(0);
  *((_WORD *)v1 + 5) = 0;
  *((_WORD *)v1 + 6) = 0;
  v2 = battle_side_get_owner(v202F7C8);
  v3 = 8;
  if ( v2 << 24 )
    v3 = 4;
  *((_WORD *)v1 + 7) = v3;
  sub_80798F4((int)v1, *((_BYTE *)v1 + 8));
  *v1 = (int)sub_80DBD58;
  return v5;
}
