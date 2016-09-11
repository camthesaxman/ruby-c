signed int sub_810CD5C()
{
  int v0; // r6@1
  int v1; // r5@1
  int v2; // r3@1
  char *v3; // r1@2
  signed int result; // r0@4

  v0 = (unsigned __int8)get_map_light_from_warp0();
  v1 = (unsigned __int8)sav1_map_get_light_level();
  v2 = 0;
  if ( gUnknown_083F7FC4[0] )
  {
    while ( 1 )
    {
      v3 = &gUnknown_083F7FC4[8 * v2];
      if ( (unsigned __int8)*v3 == v0 && (unsigned __int8)v3[1] == v1 )
        break;
      v2 = (v2 + 1) & 0xFF;
      if ( !gUnknown_083F7FC4[8 * v2] )
        goto _0810CDB0;
    }
    call_via_r0(dword_83F7FC8[2 * v2]);
    result = 1;
  }
  else
  {
_0810CDB0:
    result = 0;
  }
  return result;
}
