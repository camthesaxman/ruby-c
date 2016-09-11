int __fastcall npc_by_local_id_and_map_set_field_1_bit_x20(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, char a4)
{
  char v4; // r4@1
  unsigned __int8 v6; // [sp+0h] [bp-Ch]@1
  int v7; // [sp+8h] [bp-4h]@3

  v4 = a4;
  if ( !(TryGetFieldObjectIdByLocalIdAndMap(a1, a2, a3, &v6) << 24) )
    BYTE1(dword_30048A0[9 * v6]) = BYTE1(dword_30048A0[9 * v6]) & 0xDF | 32 * (v4 & 1);
  return v7;
}
