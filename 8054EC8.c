int sub_8054EC8()
{
  unsigned int i; // r5@1
  __int16 v2; // [sp+0h] [bp-18h]@1
  __int16 v3; // [sp+2h] [bp-16h]@1
  int v4; // [sp+14h] [bp-4h]@3

  sav1_camera_get_focus_coords(&v2, &v3);
  v2 -= (unsigned __int8)byte_3004860;
  for ( i = 0; i < (unsigned __int8)byte_3004864; i = (i + 1) & 0xFFFF )
  {
    sub_8055980((unsigned __int8)i, (signed __int16)(i + v2), v3, *((_BYTE *)&gLinkPlayers + 28 * i + 19));
    sub_8055E5C((unsigned __int8)i);
  }
  sub_8055340(word_3002910);
  return v4;
}
