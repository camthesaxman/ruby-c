signed int __fastcall duplicate_obj_of_side_rel2move_in_transparent_mode(unsigned __int8 a1)
{
  int v1; // r1@1
  unsigned int v2; // r6@2
  int v3; // r1@2
  char *v4; // r5@3
  signed int result; // r0@4

  v1 = (unsigned __int8)obj_id_for_side_relative_to_move(a1);
  if ( v1 == 255 )
  {
_0807964E:
    result = -1;
  }
  else
  {
    v2 = 0;
    v3 = 68 * v1;
    while ( 1 )
    {
      v4 = &gSprites[68 * v2 + 62];
      if ( !((unsigned __int8)*v4 << 31) )
        break;
      v2 = (v2 + 1) & 0xFFFF;
      if ( v2 > 0x3F )
        goto _0807964E;
    }
    memcpy(&gSprites[68 * v2], &gSprites[v3], 68);
    gSprites[68 * v2 + 1] = gSprites[68 * v2 + 1] & 0xF3 | 4;
    *v4 &= 0xFBu;
    result = (signed __int16)v2;
  }
  return result;
}
