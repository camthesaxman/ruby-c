int __fastcall sub_805F364(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r7@1
  int result; // r0@3
  char *v5; // r4@4
  unsigned __int8 v6; // r0@4
  int v7; // r4@4

  v2 = a1;
  v3 = a2;
  if ( LOBYTE(dword_30048A0[9 * v202E85D + 7]) != 255 && v202E85B != 2 )
  {
    v5 = (char *)&gUnknown_08375594 + (4 * player_get_x22() & 0x3FF);
    v6 = player_get_direction_upper_nybble();
    v7 = *(_DWORD *)v5;
    result = (unsigned __int8)call_via_r4(v2, v3, v6, 0);
  }
  else
  {
    result = 0;
  }
  return result;
}
