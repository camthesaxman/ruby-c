signed int sub_810F694()
{
  unsigned __int16 v0; // r0@1
  int v1; // r6@1
  unsigned int v2; // r5@1
  unsigned int v3; // r4@1
  signed int result; // r0@3

  v0 = VarGet(16419);
  v1 = (unsigned __int16)sub_8109E50(v0);
  v2 = (unsigned __int8)calc_player_party_count();
  v3 = 0;
  if ( v2 <= 0 )
  {
_0810F6E2:
    result = 0;
  }
  else
  {
    while ( GetMonData((int)&dword_3004360[25 * v3], 65, 0) != v1 )
    {
      v3 = (v3 + 1) & 0xFF;
      if ( v3 >= v2 )
        goto _0810F6E2;
    }
    result = 1;
  }
  return result;
}
