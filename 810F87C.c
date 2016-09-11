unsigned int sub_810F87C()
{
  unsigned int v0; // r6@1
  unsigned int v1; // r5@1
  unsigned int result; // r0@4

  v0 = (unsigned __int8)calc_player_party_count();
  v1 = 0;
  if ( v0 <= 0 )
  {
_0810F8CA:
    result = 0;
  }
  else
  {
    while ( GetMonData((int)&dword_3004360[25 * v1], 65, 0) == 412 || !GetMonData((int)&dword_3004360[25 * v1], 65, 0) )
    {
      v1 = (v1 + 1) & 0xFF;
      if ( v1 >= v0 )
        goto _0810F8CA;
    }
    result = v1;
  }
  return result;
}
