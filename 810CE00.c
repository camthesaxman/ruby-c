int __fastcall fade_type_for_given_maplight_pair(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r3@1
  char *v3; // r2@2
  int result; // r0@4

  v2 = 0;
  if ( gUnknown_083F7FC4[0] )
  {
    while ( 1 )
    {
      v3 = &gUnknown_083F7FC4[8 * v2];
      if ( (unsigned __int8)*v3 == a1 && (unsigned __int8)v3[1] == a2 )
        break;
      v2 = (v2 + 1) & 0xFF;
      if ( !gUnknown_083F7FC4[8 * v2] )
        goto _0810CE40;
    }
    result = (unsigned __int8)v3[3];
  }
  else
  {
_0810CE40:
    result = 0;
  }
  return result;
}
