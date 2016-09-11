unsigned int __fastcall sub_8077E44(unsigned __int8 a1, unsigned __int16 a2, unsigned __int8 a3)
{
  int v3; // r6@1
  int v4; // r5@1
  int v5; // r7@1
  int v6; // r4@3
  int v7; // r4@4
  unsigned int v8; // r4@5

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( battle_side_get_owner(a1) << 24 && !(sub_8076BE0() << 24) )
  {
    v7 = (unsigned __int8)sub_8077BFC(v3, v4);
    v6 = (v7 - (unsigned __int8)sub_8077DD8(v3, v4)) & 0xFFFF;
  }
  else
  {
    v6 = sub_8077BFC(v3, v4) & 0xFF;
  }
  v8 = (*(&gUnknown_0837F578[16 * (v20239F8 & 1) + 1] + (4 * battle_get_per_side_status(v3) & 0x3FF)) + v6) & 0xFF;
  if ( v5 )
  {
    if ( !(battle_side_get_owner(v3) << 24) )
      v8 = (v8 + 8) & 0xFF;
    if ( v8 > 0x68 )
      v8 = 104;
  }
  return v8;
}
